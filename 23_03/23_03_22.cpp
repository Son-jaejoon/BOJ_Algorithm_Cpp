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

/* 2644번 촌수계산
// 해설 : BFS 생각해내기
// url : https://www.acmicpc.net/problem/2644

int N, M;
int know_first, know_second;

vector<vector<int>> v;
vector<int> answer;
queue<int> q;

void input()
{
    cin >> N;
    cin >> know_first >> know_second;
    cin >> M;

    v.assign(N + 1, vector<int>(N + 1, 0));

    for(int i = 0 ; i < M ; i++)
    {
        int x, y;
        cin >> x >> y;

        v[x][y] = 1;
        v[y][x] = 1;
    }
}

void bfs(int k)
{
    q.emplace(k);

    while(!q.empty())
    {
        k = q.front();
        q.pop();

        for(int i = 1 ; i <= N ; i++)
        {
            if(v[k][i] == 0)
                continue;
            
            if(answer[i])
                continue;
            
            q.emplace(i);
            answer[i] = answer[k] + 1;
        }
    }
}

void solution()
{
    answer.assign(N + 1, 0);
    bfs(know_first);

    if(answer[know_second] == 0)
        answer[know_second] = -1;
    
    cout << answer[know_second];
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