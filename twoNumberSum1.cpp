#include <vector>
using namespace std;

/*
	Brute force solution that goes through all pairs of numbers.
	
	Time complexity  : O(n^2)
	Space complexity : O(1)
*/

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  
	for (int i = 0; i < array.size() - 1; ++i)
	{
		for (int j = i + 1; j < array.size(); ++j)
		{
			if (array[i] + array[j] == targetSum)
			{
				return vector<int>{array[i], array[j]};
			}
		}
		
	}
	
  return {};
	
}
