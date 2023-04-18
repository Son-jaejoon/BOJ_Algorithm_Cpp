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

/* 14620번 꽃길
// 해설 : 브루트 포스, 구현
// url : https://www.acmicpc.net/problem/14620

int N, answer = 987654321;
vector<vector<int>> v, cost;
vector<vector<bool>> visited;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()    
{
    cin >> N;
    v.assign(N, vector<int>(N, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cin >> v[i][j];
        }
    }
}

void dfs(int cnt, int sum)
{
    if(answer < sum)
        return;

    if(cnt == 3)
    {
        answer = min(sum, answer);
        return;
    }

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            bool flag = false;

            if(visited[i][j])
                continue;

            for(int dir = 0 ; dir < 4 ; dir++)
            {
                int ny = i + dy[dir];
                int nx = j + dx[dir];

                if(ny < 0 || nx < 0 || ny >= N || nx >= N)
                {
                    flag = true;
                    break;
                }

                if(visited[ny][nx])
                {
                    flag = true;
                    break;
                }
            }

            if(flag)
                continue;
            
            visited[i][j] = true;
            visited[i - 1][j] = true;
            visited[i + 1][j] = true;
            visited[i][j - 1] = true;
            visited[i][j + 1] = true;

            dfs(cnt + 1, sum + cost[i][j]);

            visited[i][j] = false;
            visited[i - 1][j] = false;
            visited[i + 1][j] = false;
            visited[i][j - 1] = false;
            visited[i][j + 1] = false;
        }
    }
}

void setting()
{
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            int sum = v[i][j];
            bool flag = false;

            for(int dir = 0 ; dir < 4 ; dir++)
            {
                int ny = i + dy[dir];
                int nx = j + dx[dir];

                if(ny < 0 || nx < 0 || ny >= N || nx >= N)
                {
                    flag = true;
                    break;
                }

                sum += v[ny][nx];
            }

            if(flag)
                continue;
            
            cost[i][j] = sum;
        }
    }
}

void solution()
{
    visited.assign(N, vector<bool>(N, false));
    cost.assign(N, vector<int>(N, 0));

    setting();
    dfs(0, 0);

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