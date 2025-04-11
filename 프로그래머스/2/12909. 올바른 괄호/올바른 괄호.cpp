#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int parentheses = 0;

    for (const auto& item : s) {
        if (item == '(') {
            parentheses++;
        }
        else if (item == ')') {
            parentheses--;
        }

        if (parentheses < 0) {
            return false;
        }
    }

    return parentheses == 0;
}