#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> truck_cross;

    int weight_current = 0;

    for (int i = 0; i < truck_weights.size();)
    {

        answer++;

        if (truck_cross.size() > 0)
        {
            if (truck_cross.front() <= answer)
            {
                weight_current -= truck_weights[i - truck_cross.size()];
                truck_cross.pop();
            }
        }

        if (truck_cross.size() < bridge_length) {

            if (weight_current + truck_weights[i] <= weight) {
                truck_cross.push(answer + bridge_length);
                weight_current += truck_weights[i];
                i++;
            }
        }
    }

    answer += truck_cross.back() - answer;
    return answer;
}
