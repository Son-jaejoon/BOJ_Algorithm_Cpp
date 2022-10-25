#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;
/* 12908번 텔레포트 3
// 해설 : 값이 10억이라 하나씩 옮기면 시간초과됨 ㅠㅠ 그래서 알아봤더니 next_permutation 이었음..
// 참고 : https://jungahshin.tistory.com/32
#define ll long long

int xs, ys, xe, ye;
int x1, y1, x2, y2;
int x3, y3, x4, y4;
int x5, y5, x6, y6;


int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};
vector<vector<int>> visited;

struct xys
{
    int y;
    int x;
    ll sec;
};

xys create(int y, int x, ll sec)
{
    xys n_xys;
    n_xys.y = y;
    n_xys.x = x;
    n_xys.sec = sec;

    return n_xys;
};

void solution()
{
    queue<xys> q;
    q.emplace(create(xs, ys, 0));
    visited[xs][ys] = 0;

    while(!q.empty())
    {
        int current_y = q.front().y;
        int current_x = q.front().x;
        ll sec = q.front().sec;
        q.pop();
        
        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = current_y + dy[i];
            int nx = current_x + dx[i];
            ll n_sec = sec + 1;

            if(ny < 0 || nx < 0)
                continue;
            if(ny == xe && nx == ye)
            {
                cout << n_sec;
                exit(0);
            }

            if(visited[ny][nx] > n_sec)
            {
                visited[ny][nx] = n_sec;
                q.emplace(create(ny, nx, n_sec));
            }
        }
        // 1 -> 2 teleport
        if(current_y == x1 && current_x == y1) 
        {
            ll n_sec = sec + 10;
            
            if(visited[x2][y2] > n_sec)
            {
                if(x2 == xe && y2 == ye)
                {
                    cout << n_sec;
                    exit(0);
                }
                visited[x2][y2] = n_sec;
                q.emplace(create(x2, y2, n_sec));
            }
        }
        else if(current_y == x2 && current_y == y2)
        {
            ll n_sec = sec + 10;

            if(visited[x1][y1] > n_sec)
            {
                if(x1 == xe && y1 == ye)
                {
                    cout << n_sec;
                    exit(0);
                }

                visited[x1][y1] = n_sec;
                q.emplace(create(x1, y1, n_sec));
            }
        }
        // 3 -> 4 teleport
        else if(current_y == x3 && current_x == y3)
        {
            ll n_sec = sec + 10;

            if(visited[x4][y4] > n_sec)
            {
                if(x4 == xe && y4 == ye)
                {
                    cout << n_sec;
                    exit(0);
                }

                visited[x4][y4] = n_sec;
                q.emplace(create(x4, y4, n_sec));
            }
        }
        else if(current_y == x4 && current_x == y4)
        {
            ll n_sec = sec + 10;

            if(visited[x3][y3] > n_sec)
            {
                if(x3 == xe && y3 == ye)
                {
                    cout << n_sec;
                    exit(0);
                }

                visited[x3][y3] = n_sec;
                q.emplace(create(x3, y3, n_sec));
            }
        }
        // 5 -> 6 teleport
        else if(current_y == x5 && current_x == y5)
        {
            ll n_sec = sec + 10;

            if(visited[x6][y6] > n_sec)
            {
                if(x6 == xe && y6 == ye)
                {
                    cout << n_sec;
                    exit(0);
                }

                visited[x6][y6] = n_sec;
                q.emplace(create(x6, y6, n_sec));
            }
        }
        else if(current_y == x6 && current_x == y6)
        {
            ll n_sec = sec + 10;

            if(visited[x5][y5] < n_sec)
            {
                if(x5 == xe && y5 == ye)
                {
                    cout << n_sec;
                    exit(0);
                }

                visited[x5][y5] = n_sec;
                q.emplace(create(x5, y5, n_sec));
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> xs >> ys >> xe >> ye >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;
    int x = max((max(max(xe, x1), max(x2, x3)), max(x4, x5)), x6);
    int y = max((max(max(ye, y1), max(y2, y3)), max(y4, y5)), y6);
    
    visited.assign(x + 1000, vector<int>(y + 1000, 1000000001));

    solution();
}
*/