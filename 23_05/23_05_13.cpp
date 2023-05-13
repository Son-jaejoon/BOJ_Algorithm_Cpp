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

/* 10164번 격자상의 경로
// 해설 : BFS, BFS로 풀었는데 DP 문제였다.
// url : https://www.acmicpc.net/problem/10164

int N, M, K;
int circle_y, circle_x;
int dy[] = {0, 1};
int dx[] = {1, 0};

void input()
{
    cin >> N >> M >> K;
}

int bfs(int start_y, int start_x, int box_y, int box_x)
{
    int cnt = 0;
    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        
        if(y == box_y && x == box_x)
        {
            cnt++;
            continue;
        }

        for(int dir = 0 ; dir < 2 ; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if(ny > box_y || nx > box_x)
                continue;
            
            q.emplace(make_pair(ny, nx));
        }
    }

    return cnt;
}

void solution()
{
    int answer = 0;

    if(K != 0)
    {
        K--;
        circle_y = K/M;
        circle_x = K%M;

        answer = bfs(0, 0, circle_y, circle_x) * bfs(circle_y, circle_x, N - 1, M - 1); 
    }
    else
    {
        answer = bfs(0, 0, N - 1, M - 1);
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