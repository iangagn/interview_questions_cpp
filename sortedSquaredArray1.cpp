#include <vector>
#include <algorithm>
using namespace std;

/*
	Approach based on built-in sort() function.
	
	Time complexity  : O(nlog(n)) -> sort()
	Space complexity : O(n)       -> newArray
*/

vector<int> sortedSquaredArray(vector<int> array) {
  
	vector<int> newArray(array.begin(), array.end());
	
	for (int i = 0; i < newArray.size(); ++i)
		newArray[i] *= newArray[i];
	
	sort(newArray.begin(), newArray.end());
	
  return newArray;
	
}
