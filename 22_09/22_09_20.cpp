#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 2805번 나무 자르기
// 해설 : 이분 탐색

long long N, M;
vector<int> arr;

void solution()
{
    int start_first = 0;
    int start_end = *max_element(arr.begin(), arr.end());

    while(start_first + 1 < start_end)
    {
        int mid = (start_first + start_end) / 2;

        long long sum = 0;

        for(int i = 0 ; i < N ; i++)
        {
            if(arr[i] > mid)
                sum += arr[i] - mid;
        }

        if(sum >= M)
             start_first = mid;
        else
            start_end = mid;
    }

    cout << start_first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    arr.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    solution();
}
*/

/* 1952번 달팽이2
// 해설 : 구현, 너무 귀찮은데?

int M, N;
int ans;

bool visited[101][101];
int dy[] = {0, 1, 0, -1};
int dx[] = {1, 0, -1, 0};

struct info
{
    int y, x, dir, cnt;
};

info create(int y, int x, int dir, int cnt)
{
    info n_info;
    n_info.y = y;
    n_info.x = x;
    n_info.dir = dir;
    n_info.cnt = cnt;

    return n_info;
}

void solution()
{
    queue<info> q;
    q.emplace(create(0, 0, 0, 0));
    visited[0][0] = true;

    while(!q.empty())
    {
        int y = q.front().y;
        int x = q.front().x;
        int dir = q.front().dir;
        int cnt = q.front().cnt;
        q.pop();

        ans = max(ans, cnt);
        if(dir == 0)
        {
            int ny = y + dy[0];
            int nx = x + dx[0];

            if(nx >= N)
            {
                int ny = y + dy[1];
                int nx = x + dx[1];

                if(ny >= M)
                    continue;
                
                if(visited[ny][nx])
                    continue;
                
                visited[ny][nx] = true;
                q.emplace(create(ny, nx, 1, cnt + 1));
                continue;
            }
            else if(visited[ny][nx])
            {
                
                int ny = y + dy[1];
                int nx = x + dx[1];

                if(ny >= M)
                    continue;
                
                if(visited[ny][nx])
                    continue;
                
                visited[ny][nx] = true;
                q.emplace(create(ny, nx, 1, cnt + 1));
                continue;
            }

            visited[ny][nx] = true;
            q.emplace(create(ny, nx, 0, cnt));
            continue;
        }
        else if(dir == 1)
        {
            int ny = y + dy[1];
            int nx = x + dx[1];

            if(ny >= M)
            {
                int ny = y + dy[2];
                int nx = x + dx[2];

                if(ny < 0)
                    continue;
                
                if(visited[ny][nx])
                    continue;
                
                visited[ny][nx] = true;
                q.emplace(create(ny, nx, 2, cnt + 1));
                continue;
            }
            else if(visited[ny][nx])
            { 
                int ny = y + dy[2];
                int nx = x + dx[2];

                if(ny < 0)
                    continue;
                
                if(visited[ny][nx])
                    continue;
                
                visited[ny][nx] = true;
                q.emplace(create(ny, nx, 2, cnt + 1));
                continue;
            }

            visited[ny][nx] = true;
            q.emplace(create(ny, nx, 1, cnt));
            continue;
        }
        else if(dir == 2)
        {
            int ny = y + dy[2];
            int nx = x + dx[2];

            if(nx < 0)
            {
                int ny = y + dy[3];
                int nx = x + dx[3];

                if(ny < 0)
                    continue;
                
                if(visited[ny][nx])
                    continue;
                
                visited[ny][nx] = true;
                q.emplace(create(ny, nx, 3, cnt + 1));
                continue;
            }
            else if(visited[ny][nx])
            {
                
                int ny = y + dy[3];
                int nx = x + dx[3];

                if(ny < 0)
                    continue;
                
                if(visited[ny][nx])
                    continue;
                
                visited[ny][nx] = true;
                q.emplace(create(ny, nx, 3, cnt + 1));
                continue;
            }

            visited[ny][nx] = true;
            q.emplace(create(ny, nx, 2, cnt));
            continue;
        }
        else if(dir == 3)
        {
            int ny = y + dy[3];
            int nx = x + dx[3];

            if(ny < 0)
            {
                int ny = y + dy[0];
                int nx = x + dx[0];

                if(nx >= N)
                    continue;
                
                if(visited[ny][nx])
                    continue;
                
                visited[ny][nx] = true;
                q.emplace(create(ny, nx, 0, cnt + 1));
                continue;
            }
            else if(visited[ny][nx])
            { 
                int ny = y + dy[0];
                int nx = x + dx[0];

                if(nx >= N)
                    continue;
                
                if(visited[ny][nx])
                    continue;
                
                visited[ny][nx] = true;
                q.emplace(create(ny, nx, 0, cnt + 1));
                continue;
            }

            visited[ny][nx] = true;
            q.emplace(create(ny, nx, 3, cnt));
            continue;
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> M >> N;

    solution();
}
*/