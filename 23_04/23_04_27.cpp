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

/* 11123번 양 한마리... 양 두마리...
// 해설 : BFS
// url : https://www.acmicpc.net/problem/11123

int H, W;
vector<vector<char>> v;
vector<vector<bool>> visited;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void find_sheep(int start_y, int start_x)
{
    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));
    visited[start_y][start_x] = true;

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int dir = 0 ; dir < 4 ; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if(ny < 0 || nx < 0 || ny >= H || nx >= W)
                continue;
            
            if(v[ny][nx] == '.')
                continue;
            
            if(visited[ny][nx])
                continue;
            
            visited[ny][nx] = true;
            q.emplace(make_pair(ny, nx));
        }
    }
}

void solution()
{
    int answer = 0;

    for(int i = 0 ; i < H ; i++)
    {
        for(int j = 0 ; j < W ; j++)
        {
            if(v[i][j] == '.')
                continue;
            
            if(visited[i][j])
                continue;
            
            find_sheep(i, j);
            answer++;
        }
    }

    cout << answer << endl;
}

void input()
{
    int T;
    cin >> T;

    while(T--)
    {
        cin >> H >> W;
        v.assign(H, vector<char>(W, ' '));
        visited.assign(H, vector<bool>(W, false));

        for(int i = 0 ; i < H ; i++)
        {
            for(int j = 0 ; j < W ; j++)
            {
                cin >> v[i][j];
            }
        }

        solution();
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