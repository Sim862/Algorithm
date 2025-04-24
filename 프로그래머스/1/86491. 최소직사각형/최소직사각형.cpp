#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
	int horizontal = 0;
	int vertical = 0;

	for (auto& size : sizes) {
		sort(size.begin(), size.end(), greater<int>());
		if (size[0] > horizontal) {
			horizontal = size[0];
		}
		if (size[1] > vertical) {
			vertical = size[1];
		}
	}

    return horizontal * vertical;
}
