#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
	vector<int> scores = { 0,0,0 };

	vector<vector<int>> check = { {1,2,3,4,5},{2,1,2,3,2,4,2,5},{3,3,1,1,2,2,4,4,5,5} };
	for (int i = 0; i < answers.size(); i++)
	{
		for (int j = 0; j < check.size(); j++)
		{
			if (check[j][i%check[j].size()] == answers[i]) {
				scores[j]++;
			}
		}
	}

	int max = -1;
	for (int i = 0; i < scores.size(); i++)
	{
		if (scores[i] > max) {
			max = scores[i];
			answer.clear();
			answer.push_back(i + 1);
		}
		else if (scores[i] == max) {
			answer.push_back(i + 1);
		}

	}
    return answer;
}

