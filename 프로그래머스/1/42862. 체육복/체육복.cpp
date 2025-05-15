#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;

    int* student = new int[n]();

    for (auto& i : lost) student[i - 1]--;
    for (auto& i : reserve) student[i - 1]++;

    for (int i = 0; i < n; i++)
    {
        if (student[i] < 0) {
            if (i > 0 && student[i - 1] > 0) {
                student[i - 1]--;
                student[i]++;
            }
            else if(i < n-1 && student[i+1] > 0) {
                student[i + 1]--;
                student[i]++;
            }
            else {
                answer--;
            }
        }
    }

    return answer;
}
