#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (auto& item : commands) {
        vector<int> nums;
        for (int i = item[0]-1; i < item[1]; i++)
        {
            nums.push_back(array[i]);
        }
        sort(nums.begin(), nums.end());
        answer.push_back(nums[item[2] - 1]);
    }

    return answer;
}