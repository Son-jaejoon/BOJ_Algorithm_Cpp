#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <string>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#include <numeric>
#include <deque>
#define endl "\n"

using namespace std;

/* 1446번 지름길
// 해설 : DP
// url : https://www.acmicpc.net/problem/1446

int N, D;
vector<int> answer;
vector<pair<int, int>> dist[10001];

void input()
{
    cin >> N >> D;
    int start, end, short_dist;

    for(int i = 0 ; i < N ; i++)
    {
        cin >> start >> end >> short_dist;

        if(start >= D || end > D)
            continue;
        
        dist[end].emplace_back(make_pair(start, short_dist));
    }
}

void solution()
{
    answer.assign(D + 1, 987654321);

    answer[0] = 0;

    for(int i = 1 ; i <= D ; i++)
    {
        answer[i] = answer[i - 1] + 1;

        for(int j = 0 ; j < dist[i].size() ; j++)
        {
            answer[i] = min(answer[i], answer[dist[i][j].first] + dist[i][j].second);
        }
    }

    cout << answer[D];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();
}
*/