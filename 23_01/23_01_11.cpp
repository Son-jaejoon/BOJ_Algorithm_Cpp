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

/* 2178번 미로 탐색
// 해설 : BFS, string
// url : https://www.acmicpc.net/problem/2178

int N, M;
vector<vector<int>> v;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

struct info
{
    int y, x, cnt;
};

info create(int y, int x, int cnt)
{
    info n_info;

    n_info.y = y;
    n_info.x = x;
    n_info.cnt = cnt;

    return n_info;
}

void input()
{
    cin >> N >> M;
    v.assign(N, vector<int>(M, 0));

    for(int i = 0 ; i < N ; i++)
    {
        string st;
        cin >> st;

        for(int j = 0 ; j < M ; j++)
        {
            if(st[j] == '1')
            {
                v[i][j] = 1;
            }
        }
    }
}

void solution()
{
    int answer = 987654321;
    vector<vector<bool>> visited;
    visited.assign(N, vector<bool>(M, false));

    queue<info> q;
    q.emplace(create(0, 0, 1));
    v[0][0] = true;

    while(!q.empty())
    {
        int y = q.front().y;
        int x = q.front().x;
        int cnt = q.front().cnt;
        q.pop();

        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            int n_cnt = cnt + 1;

            if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;
            
            if(visited[ny][nx])
                continue;
            
            if(v[ny][nx] == 0)
                continue;
            
            if(ny == N - 1 && nx == M - 1)
            {
                answer = min(answer, n_cnt);
                continue;
            }

            visited[ny][nx] = true;
            q.emplace(create(ny, nx, n_cnt));
        }
    }

    cout << answer;
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