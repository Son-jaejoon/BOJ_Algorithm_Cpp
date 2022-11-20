#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#include <climits>
#define endl "\n"

using namespace std;

/* 1865번 웜홀
// 해설 : 벨만포드 알고리즘 응용 (모든 노드에서의 음의 가중치 확인)
// 참고 : https://8iggy.tistory.com/153

int N;
vector<int> dist;

struct info
{
    int curr, next, cost;
};

vector<info> road;

info create(int curr, int next, int cost)
{
    info n_info;

    n_info.curr = curr;
    n_info.next = next;
    n_info.cost = cost;

    return n_info;
}

void solution()
{
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < road.size() ; j++)
        {
            int curr = road[j].curr;
            int next = road[j].next;
            int cost = road[j].cost;

            if(dist[curr] + cost < dist[next])
                dist[next] = dist[curr] + cost;
        }
    }

    for(int i = 0 ; i < road.size() ; i++)
    {
        int curr = road[i].curr;
        int next = road[i].next;
        int cost = road[i].cost;

        if(dist[curr] + cost < dist[next])
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int TC;

    cin >> TC;

    while(TC--)
    {
        road.clear();
        dist.clear();

        int M, W;

        cin >> N >> M >> W;
        dist.resize(N + 1, 987654321);

        for(int i = 0 ; i < M ; i++)
        {
            int S, E, T;

            cin >> S >> E >> T;
            road.emplace_back(create(S, E, T));
            road.emplace_back(create(E, S, T));
        }

        for(int i = 0 ; i < W ; i++)
        {
            int S, E, T;

            cin >> S >> E >> T;
            road.emplace_back(create(S, E, -T));
        }

        solution();
    }
}
*/