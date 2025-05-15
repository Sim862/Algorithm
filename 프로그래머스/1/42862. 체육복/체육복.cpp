#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

	sort(lost.begin(), lost.end());
	sort(reserve.begin(), reserve.end());

	for (int i = 0; i < lost.size(); i++)
	{
		for (int j = 0; j < reserve.size(); j++)
		{
			if (lost[i] == reserve[j]) {

				reserve.erase(reserve.begin() + j);
				lost.erase(lost.begin() + i);
				i--;
				break;
			}
		}
	}
	
	for (int i = 0; i < lost.size(); i++)
	{
		for (int j = 0; j < reserve.size(); j++)
		{
			if (abs(lost[i] - reserve[j]) == 1) {

				reserve.erase(reserve.begin() + j);
				lost.erase(lost.begin() + i);
				i--;
				break;
			}
		}
	}

	answer = n - lost.size();

    return answer;
}