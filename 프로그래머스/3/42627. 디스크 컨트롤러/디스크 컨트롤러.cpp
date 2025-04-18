#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Job {
    int n;
    int s;
    int i;

    bool operator<(const Job& other) const {
        if (other.i != i) {
            return other.i < i;
        }
        if (other.s != s) {
            return other.s < s;
        }
        return other.n < n;
    }
};

int solution(vector<vector<int>> jobs) {
    int answer = 0;
    int size = jobs.size();
    int index = 0;
    int time = 0;
    int total = 0;
    priority_queue<Job> works;

    sort(jobs.begin(), jobs.end());

    while (index < size || !works.empty()) {
        Job job;
        while (index < size && jobs[index][0] <= time) {
            job.n = index;
            job.s = jobs[index][0];
            job.i = jobs[index][1];

            works.push(job);
            index++;
        }

        if (!works.empty()) {
            time += works.top().i;
            total += time - works.top().s;
            works.pop();
        }
        else{
            time = jobs[index][0];
        }
    }

    answer = total / size;
    return answer;
}

