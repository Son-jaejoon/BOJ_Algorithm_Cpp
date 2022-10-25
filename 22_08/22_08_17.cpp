#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <numeric>
#define endl "\n"

using namespace std;

/* 17144번 미세먼지 안녕!
//해설 : 단순하게 생각하자..

int R, C, T;
int sum = 0;
int arr[51][51];
int add[51][51];
int dy[] = {-1, 1, 0 ,0};
int dx[] = {0, 0, -1, 1};

vector<pair<int, int>> cleaner;

void clean()
{
    sum = sum - arr[cleaner[0].first - 1][0] - arr[cleaner[1].first + 1][0]; 

    for(int i = cleaner[0].first - 1 ; i > 0 ; i--)
    {
        arr[i][0] = arr[i - 1][0];
    }

    for(int i = 0 ; i < C - 1 ; i++)
    {
        arr[0][i] = arr[0][i + 1];
    }

    for(int i = 1; i <= cleaner[0].first ; i++)
    {
        arr[i - 1][C - 1] = arr[i][C - 1];
    }

    for(int i = C - 1 ; i > 1 ; i--)
    {
        arr[cleaner[0].first][i] = arr[cleaner[0].first][i - 1];
    }
    
    arr[cleaner[0].first][1] = 0;

    for(int i = cleaner[1].first + 1 ; i < R - 1 ; i++)
    {
        arr[i][0] = arr[i + 1][0];
    }

    for(int i = 0 ; i < C - 1 ; i++)
    {
        arr[R - 1][i] = arr[R - 1][i + 1];
    }

    for(int i = R - 1 ; i >= cleaner[1].first ; i--)
    {
        arr[i][C - 1] = arr[i - 1][C - 1];
    }

    for(int i = C - 1 ; i > 1 ; i--)
    {
        arr[cleaner[1].first][i] = arr[cleaner[1].first][i - 1];
    }

    arr[cleaner[1].first][1] = 0;
}

void solution()
{
    for (int i = 0; i < R ; i++)
    {
        for (int j = 0; j < C ; j++)
        {
            int cnt = 0;
            int val = arr[i][j] / 5;
            if (arr[i][j] == 0 || arr[i][j] == -1)
                continue;
            for (int k = 0; k < 4; k++)
            {
                int ny = i + dy[k];
                int nx = j + dx[k];
                if (ny < 0 || ny >= R || nx < 0 || nx >= C)
                    continue;
                if (arr[ny][nx] == -1)
                    continue;
                add[ny][nx] += val;
                cnt++;
            }
            add[i][j] -= (cnt * val);
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            arr[i][j] += add[i][j];
            add[i][j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R >> C >> T;

    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            cin >> arr[i][j];

            if(arr[i][j] == -1)
            {
                cleaner.emplace_back(make_pair(i,j));
            }
            else
            {
                sum += arr[i][j];
            }

        }
    }

    while(T > 0)
    {
        solution();
        clean();
        T--;
    }

    cout << sum;
}
*/

/* 16234번 인구 이동
// 해설 : bfs로 검색 후 저장
// 참고 : https://jaimemin.tistory.com/1064

int N, L, R;
int cnt;
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

int world_tmp = 0;
int world_cnt = 1;

int arr[51][51];
bool visit[51][51];
vector<pair<int, int>> save_yx;

void solution(int a, int b)
{
    queue<pair<int, int>> q;
    q.emplace(make_pair(a, b));
    save_yx.emplace_back(make_pair(a, b));

    visit[a][b] = true;

    world_tmp = arr[a][b];
    world_cnt = 1;

    while (!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        int world_sum = arr[y][x];
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            int next_sum = arr[ny][nx];

            int world_dis = abs(world_sum - next_sum);

            if (ny < 0 || nx < 0 || ny >= N || nx >= N)
                continue;
            
            if (!visit[ny][nx] && world_dis >= L && world_dis <= R)
            {
                world_tmp += next_sum;
                world_cnt++;
                visit[ny][nx] = true;
                save_yx.emplace_back(make_pair(ny, nx));
                q.emplace(make_pair(ny, nx));
            }
            
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> L >> R;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    bool found = false;
    
    while (1)
    {
        found = false;
        memset(visit, false, sizeof(visit));


        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (!visit[i][j])
                {
                    save_yx.clear();
                    solution(i, j);
                    
                    if (world_cnt > 1)
                    {
                        found = true;

                        int save_point = world_tmp / world_cnt;

                        for (int k = 0; k < save_yx.size(); k++)
                        {
                            int y = save_yx[k].first;
                            int x = save_yx[k].second;
                            arr[y][x] = save_point;
                        }
                    }
                }
            }
        }

        if(found)
            ans++;
        else
            break;
    }

    cout << ans;
}
*/