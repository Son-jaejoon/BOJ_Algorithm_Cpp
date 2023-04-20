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

/* 13565번 침투
// 해설 : BFS
// url : https://www.acmicpc.net/problem/13565

int N, M;
vector<vector<int>> v;
vector<vector<bool>> is_percolate;
queue<pair<int, int>> q;
bool flag = false;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> N >> M;

    v.assign(N, vector<int>(M, 0));
    is_percolate.assign(N, vector<bool>(M, false));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            char ch;
            cin >> ch;

            v[i][j] = ch - '0';

            if(i == 0 && v[i][j] == 0)
            {
                is_percolate[i][j] = true;
                q.emplace(make_pair(i, j));
            }
        }
    }
}

void bfs()
{
    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        if(y == N - 1)
        {
            flag = true;
            break;
        }

        for(int dir = 0 ; dir < 4 ; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;
            
            if(v[ny][nx] == 1)
                continue;

            if(is_percolate[ny][nx])
                continue;
            
            is_percolate[ny][nx] = true;
            q.emplace(make_pair(ny, nx));
        }
    }
}

void solution()
{
    bfs();

    if(flag)
        cout << "YES";
    else
        cout << "NO";
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