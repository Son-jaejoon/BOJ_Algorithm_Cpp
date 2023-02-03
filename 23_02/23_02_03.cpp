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

/* 1189번 컴백홈
// 해설 : dfs
// url : https://www.acmicpc.net/problem/1189

int R, C, K;
int answer;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

vector<vector<int>> v;
vector<vector<bool>> visited;

void input()
{
    cin >> R >> C >> K;

    v.assign(R, vector<int>(C, 0));

    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            char ch;
            cin >> ch;

            if(ch == 'T')
                v[i][j] = 1;
        }
    }    
}

void move(int curr_y, int curr_x, int cnt)
{
    if(cnt > K)
        return;
    
    if(curr_y == 0 && curr_x == C - 1)
    {
        if(cnt == K)
            answer++;
        
        return;
    }

    
    for(int dir = 0 ; dir < 4 ; dir++)
    {
        int ny = curr_y + dy[dir];
        int nx = curr_x + dx[dir];

        if(ny < 0 || nx < 0 || ny >= R || nx >= C)
            continue;

        if(visited[ny][nx])
            continue;

        if(v[ny][nx])
            continue;

        visited[ny][nx] = true;
        move(ny, nx, cnt + 1);
        visited[ny][nx] = false;   
    }
}

void solution()
{
    visited.assign(R, vector<bool>(C, false));
    visited[R - 1][0] = true;

    move(R - 1, 0, 1);

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