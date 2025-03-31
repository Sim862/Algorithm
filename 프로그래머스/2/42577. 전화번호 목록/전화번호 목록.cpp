#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());
    
    for (int i = 0; i < phone_book.size() - 1; i++) {
        string current = phone_book[i];
        string next = phone_book[i + 1];

        if (next.find(current) == 0) {
            return false;
        }
    }
    
    return true;
}