#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    int count = 0;
    int day;

    for (int i = 0; i < progresses.size(); i++)
    {
        float rest = 100 - progresses[i];
        int restDays = ceilf(rest / speeds[i]);


        if (i == 0) {
            day = restDays;
        }

        if (restDays <= day) {
            count++;
        }
        else{
            answer.push_back(count);
            count = 1;
            day = restDays;
        }
    }
    answer.push_back(count);

    return answer;
}