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

/* 15724번 주지수
// 해설 : 누적합
// url : https://www.acmicpc.net/problem/15724

int N, M;
vector<vector<int>> v, board;

void solution(int y1, int x1, int y2, int x2);

void input()
{
    cin >> N >> M;

    v.assign(N, vector<int>(M, 0));
    board.assign(N, vector<int>(M, 0));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> v[i][j];

            if (j == 0)
                board[i][j] = v[i][j];
            else
                board[i][j] = v[i][j] + board[i][j - 1];
        }
    }

    int T, y1, x1, y2, x2;
    cin >> T;

    while (T--)
    {
        cin >> y1 >> x1 >> y2 >> x2;

        solution(y1 - 1, x1 - 2, y2 - 1, x2 - 1);
    }
}

void solution(int y1, int x1, int y2, int x2)
{
    int answer = 0, distance = 0;

    for (int i = y1; i <= y2; i++)
    {
        distance = board[i][x2] - (x1 < 0 ? 0 : board[i][x1]);
        answer += distance;
    }

    cout << answer << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/