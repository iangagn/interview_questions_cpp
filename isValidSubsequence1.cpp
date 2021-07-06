using namespace std;

/*
	Approach based on position indicator and compound
	for loop stopping condition. It also leaves early
	if the sequence is largere than the array.
	
	Time complexity  : O(n)
	Space complexity : O(1)
*/

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
	
	if (sequence.size() > array.size())
		return false;
	
	int sequenceIndex = 0;
	
	for (int i = 0; i < array.size() && sequenceIndex != sequence.size(); ++i)
	{	
		if (array[i] == sequence[sequenceIndex])
		{
			++sequenceIndex;
		}
	}
			
  return (sequenceIndex == sequence.size() ? true : false);
	
}