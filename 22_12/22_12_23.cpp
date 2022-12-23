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

/* 2573번 빙산
// 해설 : bfs, 구현
// url : https://www.acmicpc.net/problem/2573

int N, M, answer;

vector<vector<int>> v;
vector<pair<int, int>> ice;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> N >> M;

    v.assign(N, vector<int>(M, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            cin >> v[i][j];

            if(v[i][j] != 0)
            {
                ice.emplace_back(make_pair(i, j));
            }
        }
    }
}

bool chk()
{
    vector<vector<bool>> visited;

    visited.assign(N, vector<bool>(M, false));

    queue<pair<int, int>> q;
    q.emplace(make_pair(ice[0].first, ice[0].second));
    visited[ice[0].first][ice[0].second] = true;

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;
            
            if(v[ny][nx] == 0 || visited[ny][nx])
                continue;
            
            visited[ny][nx] = true;
            q.emplace(make_pair(ny, nx));
        }
    }

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            if(v[i][j] != 0 && visited[i][j] == false)
            {
                return false;
            }
        }
    }

    return true;
}

void print_answer()
{
    if(ice.empty())
        cout << "0";
    else
        cout << answer;
    
}

void solution()
{
    while(!ice.empty() && chk())
    {
        vector<vector<int>> next;
        next.assign(v.begin(), v.end());

        for(int i = 0 ; i < ice.size() ; i++)
        {
            int y = ice[i].first;
            int x = ice[i].second;

            for(int j = 0 ; j < 4 ; j++)
            {
                int ny = y + dy[j];
                int nx = x + dx[j];

                if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                    continue;
                
                if(v[ny][nx] == 0)
                    next[y][x] -= 1;
                
                if(next[y][x] == 0)
                {
                    ice.erase(ice.begin() + i);
                    i--;
                    break;
                }
            }
        }

        v.assign(next.begin(), next.end());
        answer++;
    }

    print_answer();
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