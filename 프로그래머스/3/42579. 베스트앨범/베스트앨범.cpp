#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct Music {
    int index;
    int play;
};

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;

    unordered_map<string, pair<vector<Music>, int>> map;
    vector<int> playCounts;


    for (int i = 0; i < genres.size(); i++)
    {
        Music music = { i, plays[i] };
        map[genres[i]].first.push_back(music);
        map[genres[i]].second += music.play;
    }

    for (auto& item : map) {
        sort(item.second.first.begin(), item.second.first.end(), [](const Music& a, const Music& b) {return a.play > b.play;});
    }

    
     // 3. map을 vector로 변환해서 재생 수 기준으로 장르 정렬
    vector<pair<string, pair<vector<Music>, int>>> sortedGenres(map.begin(), map.end());

    sort(sortedGenres.begin(), sortedGenres.end(), [](const auto& a, const auto& b) {
        return a.second.second > b.second.second; // 총 재생 수 기준 내림차순
    });

    for (const auto& item : sortedGenres) {
        const vector<Music>& musics = item.second.first;
        for (int i = 0; i < musics.size() && i < 2; i++) {
            answer.push_back(musics[i].index);
        }
    }

    return answer;
}
