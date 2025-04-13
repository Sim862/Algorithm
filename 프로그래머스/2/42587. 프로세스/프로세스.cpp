#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    // 인덱스 관리
    queue<int> processes;
    for (int i = 0; i < priorities.size(); i++)
    {
        processes.push(i);
    }

    while (!processes.empty()) {
        int now_index = processes.front();
        processes.pop();
        // 실행 조건 확인
        if (priorities[now_index] != *max_element(priorities.begin(), priorities.end())) {
            processes.push(now_index);
        }
        else{
            answer++;
            priorities[now_index] = -1;
            // 목표 실행 확인
            if (location == now_index) {
                break;
            }
        }
    }

    return answer;
}