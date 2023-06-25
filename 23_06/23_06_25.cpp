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

/* 16926번 배열 돌리기 1
// 해설 : 구현
// url : https://www.acmicpc.net/problem/16926

int N, M, R;
vector<vector<int>> board;

void input()
{
    cin >> N >> M >> R;
    board.assign(N, vector<int>(M, 0));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
        }
    }
}

void rotate()
{
    vector<vector<int>> tmp(N, vector<int>(M, 0));

    for (int rot = 0; rot < min(N, M) / 2; rot++)
    {
        int y1 = rot, x1 = rot, y2 = N - 1 - rot, x2 = M - 1 - rot;
        
        for (int i = x2 - 1; i >= x1; i--)
            tmp[y1][i] = board[y1][i + 1];
        
        for (int i = y1 + 1; i <= y2; i++)
            tmp[i][x1] = board[i - 1][x1];
        
        for (int i = x1 + 1; i <= x2; i++)
            tmp[y2][i] = board[y2][i - 1];
        
        for (int i = y2 - 1; i >= y1; i--)
            tmp[i][x2] = board[i + 1][x2];
    }

    board.assign(tmp.begin(), tmp.end());
}

void solution()
{
    while (R--)
        rotate();

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
            cout << board[i][j] << " ";

        cout << endl;
    }
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