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

/* 14938번 서강그라운드
// 해설 : 다익스트라 알고리즘 응용

#define MAX 101

int n, m, r, ans;

vector<int> item;
vector<int> v;
vector<pair<int, int>> load[MAX];

int farming(int idx)
{
    int result = 0;
    v.assign(n + 1 , 987654321);
    v[idx] = 0;

    priority_queue<pair<int, int>> pq;
    pq.emplace(make_pair(idx, 0));

    while(!pq.empty())
    {
        int curr = pq.top().first;
        int cost = -pq.top().second;
        pq.pop();

        if(v[curr] < cost)
            continue;
        
        for(int i = 0 ; i < load[curr].size() ; i++)
        {
            int next = load[curr][i].first;
            int next_cost = cost + load[curr][i].second;

            if(v[next] > next_cost)
            {
                v[next] = next_cost;
                pq.emplace(make_pair(next, -v[next]));
            }
        }
    }

    for(int i = 1 ; i <= n ; i++)
    {
        if(v[i] <= m)
            result += item[i];
    }

    return result;
}

void solution()
{
    for(int i = 1 ; i <= n ; i++)
    {
        ans = max(ans, farming(i));
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> r;
    
    item.assign(n + 1, 0);

    for(int i = 1 ; i <= n ; i++)
    {
        cin >> item[i];
    }

    for(int i = 0 ; i < r ; i++)
    {
        int a, b, c;

        cin >> a >> b >> c;

        load[a].emplace_back(make_pair(b, c));
        load[b].emplace_back(make_pair(a, c));
    }

    solution();
}
*/