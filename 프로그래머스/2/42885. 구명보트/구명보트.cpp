#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    int right = people.size() - 1;
    for (int left = 0; left <= right; right--)
    {
        if (left == right) 
            left++;
        else 
            if (people[left] + people[right] <= limit) {
                left++;
            }
        answer++;
    }
    return answer;
}