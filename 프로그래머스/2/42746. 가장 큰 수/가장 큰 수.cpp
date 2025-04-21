#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return to_string(a) + to_string(b) > to_string(b) + to_string(a);
        });

    if (numbers[0] == 0) return "0";

    for (auto& item : numbers)
    {
        answer += to_string(item);
    }

    return answer;
}