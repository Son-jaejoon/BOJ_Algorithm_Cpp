#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#define endl "\n"

using namespace std;

/* 11060번 점프 점프
// 해설 : DP문제 지만 BFS로 쉽게 해결

int N;
vector<int> v;
vector<int> visited;

void bfs(int now, int k, int cnt)
{
    queue<pair<pair<int, int>, int>> q;
    q.emplace(make_pair(make_pair(now, k), cnt));
    visited[now] = cnt;

    while (!q.empty())
    {
        int x = q.front().first.first;
        int jump = q.front().first.second;
        int cnt = q.front().second;
        q.pop();

        for (int i = x + 1; i <= x + jump; i++)
        {
            if(jump == 0)
            {
                break;
            }

            int nx = i;
            int n_jump = v[nx];
            int n_cnt = cnt + 1;

            if (nx >= 0 && nx < N)
            {
                if (visited[nx] > n_cnt)
                {
                    visited[nx] = visited[x] + 1;
                    q.emplace(make_pair(make_pair(nx, n_jump), n_cnt));
                }
            }
        }
    }
    if(visited[N-1] == 987654321)
    {
        cout << -1 ;
    }
    else
    {
        cout << visited[N-1];
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    v.assign(N, 0);
    visited.assign(N, 987654321);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    bfs(0, v[0], 0);
}
*/

/*11048번 이동하기
// 해설 : DP문제인데 bfs로 해결가능 할 것 같아서 해보니 시간초가 됨
// 그래서 그냥 브루트포스로 했음

int N, M;
vector<vector<int>> v;
vector<vector<int>> visited;

int dy[] = {1, 0, 1};
int dx[] = {0, 1, 1};

void bfs()
{
    visited[0][0] = v[0][0];
    int y = 0;
    int x = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                int ny = i + dy[k];
                int nx = j + dx[k];

                if (ny >= 0 && nx >= 0 && ny < N && nx < M)
                {
                    if (visited[ny][nx] < visited[i][j] + v[ny][nx])
                    {
                        visited[ny][nx] = visited[i][j] + v[ny][nx];
                    }
                }
            }
        }
    }

    cout << visited[N - 1][M - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    v.assign(N, vector<int>(M, 0));
    visited.assign(N, vector<int>(M, 0));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> v[i][j];
        }
    }

    bfs();
}
*/

/* 1600번 말이 되고픈 원숭이
// 해설 : 일반 bfs에 가변되는 말의 움직임 횟수를 추가하면 됨.(visited에 y, x축 + 말의 움직임 횟수)
// 참고 : https://www.acmicpc.net/board/view/30139


int K, H, W;
vector<vector<int>> zoo;
vector<vector<vector<int>>> visited;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};
int horse_dy[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int horse_dx[] = {-1, 1, -2, 2, -2, 2, -1, 1};

void bfs(int horse_move)
{
    queue<pair<pair<int, int>, pair<int, int>>> q;
    q.emplace(make_pair(make_pair(0, 0), make_pair(0, horse_move)));
    visited[0][0][horse_move] = 0;

    while (!q.empty())
    {
        int y = q.front().first.first;
        int x = q.front().first.second;
        int cnt = q.front().second.first;
        int horse = q.front().second.second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny >= 0 && nx >= 0 && ny < H && nx < W)
            {
                if (visited[ny][nx][horse] > cnt + 1 && zoo[ny][nx] == 0)
                {
                    visited[ny][nx][horse] = cnt + 1;
                    q.emplace(make_pair(make_pair(ny, nx), make_pair(cnt + 1, horse)));
                }
            }
        }

        if (horse > 0)
        {
            for (int i = 0; i < 8; i++)
            {
                int ny = y + horse_dy[i];
                int nx = x + horse_dx[i];

                if (ny >= 0 && nx >= 0 && ny < H && nx < W)
                {
                    if (visited[ny][nx][horse - 1] > cnt + 1 && zoo[ny][nx] == 0)
                    {
                        visited[ny][nx][horse - 1] = cnt + 1;
                        q.emplace(make_pair(make_pair(ny, nx), make_pair(cnt + 1, horse - 1)));
                    }
                }
            }
        }
    }

    int result = 987654321;

    for(int i = 0 ; i < visited[H - 1][W - 1].size() ; i++)
    {
        result = min(result, visited[H-1][W-1][i]);
    }

    if(result == 987654321)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << result << endl;
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> K >> W >> H;
    zoo.assign(H, vector<int>(W, 0));
    visited.assign(H, vector<vector<int>>(W, vector<int>(K + 1, 987654321)));
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> zoo[i][j];
        }
    }

    bfs(K);
}

*/