#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

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
			if (lost[i] == reserve[j]-- || lost[i] == reserve[j]++) {

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