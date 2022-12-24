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

/* 20166번 문자열 지옥에 빠진 호석
// 해설 : 해시맵, dfs
// url : https://www.acmicpc.net/problem/20166

string board[11];

int n, m, k;

int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};

map<string, int> caseMap;

void dfs(int y, int x, int depth, string s)
{
    if (depth == 5)
        return;
    caseMap[s]++;
    for (int dir = 0; dir < 8; dir++)
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (0 > ny)
            ny = n - 1;
        if (0 > nx)
            nx = m - 1;
        if (ny >= n)
            ny = 0;
        if (nx >= m)
            nx = 0;
        dfs(ny, nx, depth + 1, s + board[ny][nx]);
    }
}

void input()
{
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        cin >> board[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            string start = "";
            dfs(i, j, 0, start + board[i][j]);
        }
    }

    while (k--)
    {
        string s;
        cin >> s;
        cout << caseMap[s] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/