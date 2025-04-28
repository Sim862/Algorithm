#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
	
	int width = brown - 2;
	int length = 2;
	while (width >= length) {

		if (yellow == ((width / 2) - 2) * (length / 2)) {
			answer.push_back(width / 2);
			answer.push_back((length / 2) + 2);
			break;
		}


		width -= 2;
		length += 2;
	}

    return answer;
}