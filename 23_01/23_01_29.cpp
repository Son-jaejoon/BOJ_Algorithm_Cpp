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

/* 18430번 무기 공학
// 해설 : 백트랙킹, 구현
// 해설 : https://www.acmicpc.net/problem/18430

int N, M;
int answer;
vector<vector<int>> v;
vector<vector<bool>> visited;

void input()
{
    cin >> N >> M;

    v.assign(N, vector<int>(M, 0));
    visited.assign(N, vector<bool>(M, false));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> v[i][j];
        }
    }
}

int rightUp(int y, int x)
{
    return v[y][x - 1] + v[y + 1][x] + 2 * v[y][x];
}

int rightDown(int y, int x)
{
    return v[y - 1][x] + v[y][x - 1] + 2 * v[y][x];
}

int leftUp(int y, int x)
{
    return v[y][x + 1] + v[y + 1][x] + 2 * v[y][x];
}

int leftDown(int y, int x)
{
    return v[y - 1][x] + v[y][x + 1] + 2 * v[y][x];
}

void dfs(int y, int x, int sum)
{
    if (x == M)
    {
        x = 0;
        y++;
    }

    if (y == N)
    {
        answer = max(answer, sum);
        return;
    }

    if (!visited[y][x])
    {
        if (y + 1 < N && x - 1 >= 0 && !visited[y + 1][x] && !visited[y][x - 1])
        {
            visited[y][x] = true;
            visited[y][x - 1] = true;
            visited[y + 1][x] = true;
            int nsum = sum + rightUp(y, x);
            dfs(y, x + 1, nsum);
            visited[y][x] = false;
            visited[y][x - 1] = false;
            visited[y + 1][x] = false;
        }

        if (y - 1 >= 0 && x - 1 >= 0 && !visited[y - 1][x] && !visited[y][x - 1])
        {
            visited[y][x] = true;
            visited[y - 1][x] = true;
            visited[y][x - 1] = true;
            int nsum = sum + rightDown(y, x);
            dfs(y, x + 1, nsum);
            visited[y][x] = false;
            visited[y - 1][x] = false;
            visited[y][x - 1] = false;
        }

        if (y + 1 < N && x + 1 < M && !visited[y + 1][x] && !visited[y][x + 1])
        {
            visited[y][x] = true;
            visited[y][x + 1] = true;
            visited[y + 1][x] = true;
            int nsum = sum + leftUp(y, x);
            dfs(y, x + 1, nsum);
            visited[y][x] = false;
            visited[y][x + 1] = false;
            visited[y + 1][x] = false;
        }

        if (y - 1 >= 0 && x + 1 < M && !visited[y - 1][x] && !visited[y][x + 1])
        {
            visited[y][x] = true;
            visited[y - 1][x] = true;
            visited[y][x + 1] = true;
            int nsum = sum + leftDown(y, x);
            dfs(y, x + 1, nsum);
            visited[y][x] = false;
            visited[y - 1][x] = false;
            visited[y][x + 1] = false;
        }
    }

    dfs(y, x + 1, sum);
}

void solution()
{
    dfs(0, 0, 0);
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