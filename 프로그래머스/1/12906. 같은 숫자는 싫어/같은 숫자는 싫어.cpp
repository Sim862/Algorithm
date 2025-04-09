#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    queue<int> nums;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i > 0) {
            if (arr[i] != arr[i - 1])
                nums.push(arr[i]);
        }
        else {
            nums.push(arr[i]);
        }
    }

    for (int i = 0; i <nums.size();)
    {
        answer.push_back(nums.front());
        nums.pop();
    }

    return answer;
}