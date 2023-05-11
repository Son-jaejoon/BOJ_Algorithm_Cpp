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

/* 1743번 음식물 피하기
// 해설 : BFS, 범위 시작을 잘 체크하자.
// url : https://www.acmicpc.net/problem/1743

int N, M, K;
vector<vector<int>> v;
vector<vector<bool>> visited;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> N >> M >> K;

    v.assign(N + 1, vector<int>(M + 1, 0));

    for(int i = 0 ; i < K ; i++)
    {
        int y, x;
        cin >> y >> x;
        v[y][x] = 1;
    }
}

int bfs(int start_y, int start_x)
{
    int area_size = 0;
    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));
    
    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        area_size++;
        q.pop();

        for(int dir = 0 ; dir < 4 ; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if(ny <= 0 || nx <= 0 || ny > N || nx > M)
                continue;

            if(v[ny][nx] == 0)
                continue;

            if(visited[ny][nx])
                continue;

            visited[ny][nx] = true;
            q.emplace(make_pair(ny, nx));
        }
    }

    return area_size;
}

void solution()
{
    int answer = 0;
    visited.assign(N + 1, vector<bool>(M + 1, false));

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= M ; j++)
        {
            if(v[i][j] == 0)
                continue;
            
            if(visited[i][j])
                continue;
            
            visited[i][j] = true;
            answer = max(answer, bfs(i, j));
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