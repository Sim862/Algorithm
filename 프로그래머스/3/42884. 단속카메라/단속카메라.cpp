#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> routes) {
    sort(routes.begin(), routes.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
        });

    int cameras = 0;
    int cameraPos = -30001;

    for (const auto& route : routes) {
        if (route[0] > cameraPos) {
            cameraPos = route[1];
            ++cameras;
        }
    }

    return cameras;
}