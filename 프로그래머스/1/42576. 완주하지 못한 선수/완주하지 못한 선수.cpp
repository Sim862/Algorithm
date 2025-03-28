#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> table;

	for (int i = 0; i < completion.size(); i++)
	{
		if (table.find(completion[i]) == table.end()) {
			table.insert({ completion[i], 1 });
		}
		else {
			table[completion[i]] += 1;
		}
	}

	for (int i = 0; i < participant.size(); i++)
	{
		if (table.find(participant[i]) == table.end()) {
			answer = participant[i];
			break;
		}
		else {
			table[participant[i]] -= 1;
			if (table[participant[i]] < 0)
			{
				answer = participant[i];
				break;
			}
		}
	}

	return answer;
    
}