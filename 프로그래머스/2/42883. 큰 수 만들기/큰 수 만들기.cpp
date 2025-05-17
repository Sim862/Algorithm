#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    vector<int> nums;
    for (int i = 0; i < number.size(); i++)
    {
        int num = (int)number[i] - 48;
        nums.push_back(num);
    }

    while (k > 0 && k != nums.size()) {
        int index_max = 0;
        for (int i = 0; i <= k; i++)
        {
            index_max = nums[i] > nums[index_max] ? i : index_max;
        }

        answer += to_string(nums[index_max]);
        nums.erase(nums.begin(), nums.begin() + index_max + 1);
        k -= index_max;
    }


    if (k != nums.size())
    {
        for (auto& i : nums) {
            answer += to_string(i);
        }
    }

    return answer;
}
