#include <vector>
#include <algorithm>
using namespace std;

/*
	Approach based on sorting the array. Initially, the smallest and
	the largest elements are added and depending on if the sum is either 
	larger or smaller than the target, we will either increase it by 
	increasing the smallest element or by decreasing the largest element.
	
	Time complexity  : O(nlog(n))
	Space complexity : O(1)
*/

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  
	sort(array.begin(), array.end());
	
	int left = 0;
	int right = array.size() - 1;
	
	int currentSum;
	
	while (left < right)
	{
		currentSum = array[left] + array[right];
		
		if (currentSum == targetSum)
		{
			return {array[left], array[right]};			
		}
		else if (currentSum < targetSum)
		{
			++left;
		}
		else
		{
			--right;
		}
	}

  return {};

}