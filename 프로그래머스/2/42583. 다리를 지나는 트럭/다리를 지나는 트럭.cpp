#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    vector<int> truck_cross;

    int weight_current = 0;

    for (int i = 0; i < truck_weights.size();)
    {

        answer++;

        if (truck_cross.size() > 0)
        {
            if (truck_cross[0] <= answer)
            {
                weight_current -= truck_weights[i - truck_cross.size()];
                truck_cross.erase(truck_cross.begin());
            }
        }

        if (truck_cross.size() < bridge_length) {

            if (weight_current + truck_weights[i] <= weight) {
                truck_cross.push_back(answer + bridge_length);
                weight_current += truck_weights[i];
                i++;
            }
        }


    }
    answer += truck_cross[truck_cross.size()-1] - answer;
    return answer;
}