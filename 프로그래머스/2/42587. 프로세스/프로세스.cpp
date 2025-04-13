#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<int> processes;
    for (auto& item : priorities) {
        processes.push(item);
    }

    while (true) {
        bool start = true;
        int index = 0;
        for (int i = 0; i < priorities.size(); i++)
        {
            if (processes.front() < priorities[i]) {
                processes.push(processes.front());
                processes.pop();
                location--;

                if (location < 0) {
                    location = processes.size() - 1;
                }

                start = false;
                break;
            }
            else if (processes.front() == priorities[i]) {
                index = i;
            }
        }

        if (start) {
            processes.pop();
            answer++;
            priorities.erase(priorities.begin() + index);
            if (location == 0) {
                break;
            }
            else {
                location--;
            }
        }
    }

    return answer;
}