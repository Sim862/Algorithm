#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    unordered_map<string,int> table;

    for (auto& item : clothes) {
        string name = item[0];
        string type = item[1];
        table[type]++;
    }

    answer = 1;
    for (auto& item : table) {
        answer *= (item.second + 1);
    }

    answer--;

    return answer;
}