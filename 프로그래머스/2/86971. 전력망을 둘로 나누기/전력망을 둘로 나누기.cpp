#include <string>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int BFS(vector<vector<int>> nodes) {
    queue<int> q;
    vector<bool> visited(nodes.size());
    int count = 0;

    q.push(1);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (visited[current]) continue;

        visited[current] = true;
        count++;
        for (int i = 0; i < nodes[current].size(); i++)
        {
            q.push(nodes[current][i]);
        }

    }

    int count2 = nodes.size() - 1 - count;
    return abs(count2 - count);
}

int solution(int n, vector<vector<int>> wires) {
    int answer = INT16_MAX;

    for (int i = 0;i < wires.size();i++)
    {
        vector<vector<int>> nodes(n+1);
        for (int j = 0;j < wires.size();j++)
        {
            if (i == j) continue;
            int start = wires[j][0];
            int end = wires[j][1];
            nodes[start].push_back(end);
            nodes[end].push_back(start);
        }
        answer = min(answer, BFS(nodes));
        nodes.clear();
    }

    return answer;
}