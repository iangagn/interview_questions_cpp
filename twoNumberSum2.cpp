#include <vector>
#include <unordered_set>
using namespace std;

/*
	This approach based on a hash table ameliorates time complexity from O(n^2)
	to O(n), but space complexity goes from O(1) to O(n) since the 
	unordered set grow on every iteration.
	
	Time complexity  : O(n)
	Space complexity : O(n)
*/

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  
	unordered_set<int> arraySet;
	
	int complement;
	
	for (int number : array)
	{
		complement = targetSum - number;
		if (arraySet.find(complement) != arraySet.end())
		{
			return vector<int>{number, complement};
		}
		else
		{
			arraySet.insert(number);
		}
	}
	
  return {};
}
