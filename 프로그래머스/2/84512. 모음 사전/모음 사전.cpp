#include <string>
#include <vector>

using namespace std;

int cnt = -1;
int answer = 0;
string target = "";
vector<char> words = { 'A','E','I','O','U' };

void dfs(string word) {
    cnt++;

    if (word == target) {
        answer = cnt;
        return;
    }

    if (word.length() >= words.size()) return;

    for (int i = 0; i < words.size(); i++) {
        dfs(word + words[i]);
    }
}

int solution(string word) {
    target = word;
    dfs("");

    return answer;
}