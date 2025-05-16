#include <string>
#include <vector>

using namespace std;

int solution(string name) {
    int answer = 0;
    int length = name.size();

    for (int i = 0; i < length; i++) {
        answer += min(name[i] - 'A', 'Z' - name[i] + 1);
    }

    int move = length - 1;
    for (int i = 0; i < length; i++) {
        int next = i + 1;
        while (next < length && name[next] == 'A') next++;

        move = min(move, i + length - next + min(i, length - next));
    }

    answer += move;
    return answer;
}