#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> nums) {
	unordered_set<int> list(nums.begin(), nums.end());
	
	return min(nums.size()/2, list.size());
}

