#include <string>
#include <vector>
#include <sstream>
#include <set>

using namespace std;

pair<string, int> Split(const std::string& input, char delimiter) {
    stringstream ss(input);
    string token;
    vector<string> result;

    while (getline(ss, token, delimiter)) {
        result.push_back(token);
    }
    
    return pair<string, int> { result[0], stoi(result[1])};
}


vector<int> solution(vector<string> operations) {
    vector<int> answer;
    multiset<int> dq;
    for (auto& item : operations) {
        pair<string, int> operation = Split(item, ' ');

        if (operation.first == "I") {
            dq.insert(operation.second);
        }
        else if (dq.size() > 0)
        {
            if (operation.second > 0) {
                dq.erase(prev(dq.end()));
            }
            else {
                dq.erase(dq.begin());
            }
        }
    }

    if (dq.size() <= 0) {
        answer = { 0, 0 };
    }
    else {
        answer = { *prev(dq.end()), *dq.begin() };
    }
    return answer;
}
