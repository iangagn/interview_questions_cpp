#include <vector>
#include <unordered_map>
using namespace std;

#define PTS_PER_WIN 3

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) 
{
  
	// Initialize scores and best-so-far team
	string best_so_far = "";
	unordered_map<string, int> scores = {{best_so_far, 0}};
	
	for (int i = 0; i < competitions.size(); ++i)
	{
		
		// Determine who the winner is
		string winner = (results[i] == 1 ? competitions[i][0] : competitions[i][1]);
		
		// Update scores
		(scores.find(winner) != scores.end()) ? (scores[winner] += scores[winner] ) : // Team already exists, increment score
		                                        (scores[winner] = PTS_PER_WIN);       // Team does not exist, add to map and initialize score
		
		// Update best team so far
		if (scores[winner] > scores[best_so_far])
			best_so_far = winner;

	}
	
	return best_so_far;
	
}