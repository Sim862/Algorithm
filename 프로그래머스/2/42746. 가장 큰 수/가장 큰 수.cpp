#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> strings;

    for (auto& item : numbers) {
        strings.push_back(to_string(item));
    }
    sort(strings.begin(), strings.end(), [](string &a, string &b) {
        return b + a < a + b;
        });

    if (strings[0] == "0")
        return "0";

    for (auto& item : strings)
    {
        answer += item;
    }

    return answer;
}