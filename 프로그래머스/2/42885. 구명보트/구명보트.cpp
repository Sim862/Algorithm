#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int left = 0;
    int right = people.size() - 1;
    sort(people.begin(), people.end());

    while (right - left > 0) {

        if (people[right] <= limit / 2)
            break;
       
        int sum = people[left] + people[right];

        right--;

        if (sum <= limit)
            left++;
      
        answer++;
    }
    
    if (left <= right)
    {
        int rest = right - (left - 1);

        answer += rest / 2 + rest % 2;
    }

    return answer;
}
