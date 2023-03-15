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

/* 4963번 섬의 개수
// 해설 : bfs
// url : https://www.acmicpc.net/problem/4963

int W, H;
vector<vector<int>> v;
vector<pair<int, int>> island;
vector<vector<bool>> visited;

int dy[] = {-1, -1, -1, 1, 1, 1, 0, 0};
int dx[] = {-1, 0, 1, -1, 0, 1, -1, 1};

void bfs(int start_y, int start_x)
{
    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));
    visited[start_y][start_x] = true;

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int i = 0 ; i < 8 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= W || nx >= H)
                continue;
            
            if(v[ny][nx] == 0 || visited[ny][nx])
                continue;

            visited[ny][nx] = true;

            q.emplace(make_pair(ny, nx));
        }
    }
}

void solution()
{
    int answer = 0;

    for(int i = 0 ; i < island.size() ; i++)
    {
        int y = island[i].first;
        int x = island[i].second;

        if(visited[y][x])
            continue;
        
        answer++;
        bfs(y, x);
    }

    cout << answer << endl;
}

void input()
{
    while(1)
    {
        cin >> H >> W;

        if(W == 0 && H == 0)
            break;
        
        v.assign(W, vector<int>(H, 0));
        visited.assign(W, vector<bool>(H, false));
        island.clear();

        for(int i = 0 ; i < W ; i++)
        {
            for(int j = 0 ; j < H ; j++)
            {
                cin >> v[i][j];

                if(v[i][j] == 1)
                    island.emplace_back(make_pair(i, j));
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