#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#define endl "\n"

using namespace std;

/* 2638번 치즈
// 해설 : BFS, 외부 공기, 내부공기 체크하는 걸 잊지 말자.

int N, M, ans;

vector<vector<int>> box;
vector<vector<int>> curr_box;
vector<vector<bool>> visited;
vector<pair<int, int>> cheese;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void outair()
{
    queue<pair<int, int>> q;
    q.emplace(make_pair(0, 0));

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        if(visited[y][x])
            continue;
        
        visited[y][x] = true;

        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;
            
            if(box[ny][nx] == 1)
                curr_box[ny][nx]++;
            else if(!visited[ny][nx])
                q.emplace(make_pair(ny, nx));
        }
    }
}

void solution()
{

    while(1)
    {
        visited.assign(N, vector<bool>(M, false));
        curr_box.assign(N, vector<int>(M, 0));

        outair();

        bool chk = false;

        for(int i = 0 ; i < N ; i++)
        {
            for(int j = 0 ; j < M ; j++)
            {
                if(curr_box[i][j] >= 2)
                {
                    box[i][j] = 0;
                    chk = true;
                }
            }
        }

        if(chk)
            ans++;
        else
            break;
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    box.assign(N, vector<int>(M, 0));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> box[i][j];
        }
    }

    solution();
}
*/