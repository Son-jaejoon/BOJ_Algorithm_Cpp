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

/* 16174번 점프왕 쩰리 (Large)
// 해설 : BFS
// url : https://www.acmicpc.net/problem/16174

int N;
vector<vector<int>> board;

void input()
{
    cin >> N;
    board.assign(N, vector<int>(N, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cin >> board[i][j];
        }
    }
}

void solution()
{
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    queue<pair<int, int>> q;
    q.emplace(make_pair(0, 0));
    
    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        if(y < 0 || x < 0 || y >= N || x >= N)
            continue;
        
        if(visited[y][x])
            continue;

        visited[y][x] = true;
        
        if(y == N - 1 && x == N - 1)
        {
            visited[y][x] = true;
            break;
        }

        q.emplace(y + board[y][x], x);
        q.emplace(y, x + board[y][x]);
    }

    if(visited[N - 1][N - 1])
        cout << "HaruHaru";
    else
        cout << "Hing";
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