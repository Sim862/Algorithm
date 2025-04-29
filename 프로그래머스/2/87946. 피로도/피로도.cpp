#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    int count = 0;
    int temp_k = 0;

    vector<int> index;

    for (int i = 0; i < dungeons.size(); i++)
    {
        index.push_back(i);
    }
    
    do {
        if (answer < count) {
            answer = count;
        }
        count = 0;
        temp_k = k;

        for (auto& i : index) {
            if (temp_k >= dungeons[i][0]) {
                temp_k -= dungeons[i][1];
                count++;
            }
        }
    }
    while(next_permutation(index.begin(), index.end()));

    return answer;
}

int main() {
    solution(80, { {80,20} ,{50,40},{30,10} });
}