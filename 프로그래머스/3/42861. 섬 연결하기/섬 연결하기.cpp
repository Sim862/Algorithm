#include <string>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int FindParent(vector<int>& parent, int x) {
    if (parent[x] == x) return x;
    parent[x] = FindParent(parent, parent[x]);
    return parent[x];
}

bool UnionSet(vector<int>& parent, int a, int b) {
    int rootA = FindParent(parent, a);
    int rootB = FindParent(parent, b);

    if (rootA == rootB) return false;

    parent[rootB] = rootA;
    return true;
}

int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
    vector<int> parent(n);
    for (int i = 0; i < parent.size(); i++)
        parent[i] = i;
    
    sort(costs.begin(), costs.end(), [](const vector<int>& a, const vector<int>& b) { return a[2] < b[2];});

    for (const auto& cost : costs) {
        if (UnionSet(parent, cost[0], cost[1])) {
            answer += cost[2];
        }
    }

    return answer;
}

