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
#include <stack>
#define endl "\n"

using namespace std;

/* 11779번 최소비용 구하기 2
// 해설 : 다익스트라, 경로 추적, 보기 편하게 함수 정리 습관 시작.

int n, m, start_city, end_city;
vector<pair<int, int>> v[1001];
vector<int> answer_route;
vector<int> dist;
vector<int> route;

void input();
void dijkstra();
void solution();
void find_route(int start, int end);
void print_answer();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();
}

void input()
{
    cin >> n >> m;

    for(int i = 0 ; i < m ; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].emplace_back(make_pair(b, c));
    }

    cin >> start_city >> end_city;
}

void solution()
{
    dijkstra();
    find_route(start_city, end_city);
    print_answer();
}

void dijkstra()
{
    dist.assign(n + 1, 987654321);
    route.assign(n + 1, 0);
    dist[start_city] = 0;

    priority_queue<pair<int, int>> pq;
    pq.emplace(make_pair(start_city, 0));

    while(!pq.empty())
    {
        int curr = pq.top().first;
        int total = -pq.top().second;
        pq.pop();

        if(dist[curr] < total)
            continue;

        for(int i = 0 ; i < v[curr].size() ; i++)
        {
            int next = v[curr][i].first;
            int cost = total + v[curr][i].second;

            if(dist[next] > cost)
            {
                dist[next] = cost;
                route[next] = curr;

                pq.emplace(make_pair(next, -dist[next]));
            }
        }
    }
}

void find_route(int start, int end)
{
    answer_route.emplace_back(end);

    while(1)
    {
        end = route[end];

        answer_route.emplace_back(end);

        if(end == start)
            break;
    }
}

void print_answer()
{
    cout << dist[end_city] << endl;
    cout << answer_route.size() << endl;

    for(int i = answer_route.size() - 1 ; i >= 0 ; i--)
    {
        cout << answer_route[i] << " ";
    }
}

*/