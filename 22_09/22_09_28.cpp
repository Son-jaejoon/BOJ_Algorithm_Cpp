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

/* 1944번 복제 로봇
// 해설 : BFS, MST, Union_find 다 들어있음

int N, M, idx;

vector<vector<int>> maze;
vector<pair<int, int>> save;
bool visited[51][51];
vector<vector<int>> number;
vector<int> connect;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

struct info
{
    int a, b, c;
};

info create(int a, int b, int c)
{
    info n_info;

    n_info.a = a;
    n_info.b = b;
    n_info.c = c;

    return n_info;
};

vector<info> cost;

bool cmp(info a, info b)
{
    return a.c < b.c;
}

int find_loot(int n)
{
    if(connect[n] < 0)
        return n;
    
    return connect[n] = find_loot(connect[n]);
}

bool merge(int a, int b)
{
    a = find_loot(a);
    b = find_loot(b);

    if(a == b)
        return false;
    
    connect[b] = a;
    return true;
}

void solution()
{
    for (int i = 0; i < save.size(); i++)
    {
        int y = save[i].first;
        int x = save[i].second;
        int key_idx = number[y][x];

        memset(visited, false, sizeof(visited));
        queue<info> q;
        q.emplace(create(y, x, 0));

        while (!q.empty())
        {
            int y = q.front().a;
            int x = q.front().b;
            int c = q.front().c;
            q.pop();

            if (maze[y][x] == 2 && c > 0)
            {
                int n_idx = number[y][x];
                cost.emplace_back(create(key_idx, n_idx, c));
                continue;
            }

            for(int i = 0 ; i < 4 ; i++)
            {
                int ny = y + dy[i];
                int nx = x + dx[i];
                int nc = c + 1;
                
                if(ny < 0 || nx < 0 || ny >= N || nx >= N)
                    continue;
                
                if(maze[ny][nx] == 1)
                    continue;
                
                if(visited[ny][nx])
                    continue;
                
                visited[ny][nx] = true;
                q.emplace(create(ny, nx, nc));
                
            }
        }
    }
    sort(cost.begin(), cost.end(), cmp);

    int ans = 0;
    int cnt = 0;

    for(int i = 0 ; i < cost.size() ; i++)
    {
        int a = cost[i].a;
        int b = cost[i].b;
        int c = cost[i].c;

        if(merge(a, b))
        {
            ans += c;

            if(++cnt == idx - 1)
            {
                cout << ans;
                return;
            }
        }
    }

    cout << -1;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    maze.assign(N, vector<int>(N, 0));
    //visited.assign(N, vector<bool>(N, false));
    number.assign(N, vector<int>(N, 0));

    for (int i = 0; i < N; i++)
    {
        string st;
        cin >> st;

        for (int j = 0; j < N; j++)
        {
            if (st[j] == '1')
                maze[i][j] = 1;
            else if (st[j] == '0')
                maze[i][j] = 0;
            else if (st[j] == 'S')
            {
                maze[i][j] = 2;
                number[i][j] = idx;
                idx++;
                save.emplace_back(make_pair(i, j));
            }
            else if (st[j] == 'K')
            {
                maze[i][j] = 2;
                number[i][j] = idx;
                idx++;
                save.emplace_back(make_pair(i, j));
            }
        }
    }

    connect.assign(idx + 1, -1);

    solution();
}
*/

/* 4386번 별자리 만들기
// 해설 : 그냥 2차원 좌표간의 거리 계산해서 유니온 파인드 후 mst

int n;

struct info
{
    int x, y;
    double c;
};

info create(int x, int y, double c)
{
    info n_info;

    n_info.x = x;
    n_info.y = y;
    n_info.c = c;

    return n_info;
}

bool cmp(info a, info b)
{
    return a.c < b.c;
}

vector<pair<double, double>> star;
vector<info> cost;
vector<int> connect;

int find_loot(int n)
{
    if(connect[n] < 0)
        return n;

    return connect[n] = find_loot(connect[n]);
}

bool merge(int a, int b)
{
    a = find_loot(a);
    b = find_loot(b);

    if(a == b)
        return false;

    connect[b] = a;
    return true;
}

void solution()
{
    double ans = 0;
    int cnt = 0;

    for(int i = 0 ; i < cost.size() ; i++)
    {
        int x = cost[i].x;
        int y = cost[i].y;
        double c = cost[i].c;

        if(merge(x, y))
        {
            ans += c;
            if(++cnt == n - 1)
            {
                cout << ans;
                return;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed;
    cout.precision(2);

    cin >> n;
    connect.assign(n + 1, -1);

    for(int i = 0 ; i < n ; i++)
    {
        double x, y;

        cin >> x >> y;
        star.emplace_back(make_pair(x, y));
    }

    for(int i = 0 ; i < n - 1 ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            double cur_x = star[i].first;
            double cur_y = star[i].second;

            double next_x = star[j].first;
            double next_y = star[j].second;

            double c = sqrtl((cur_x - next_x)*(cur_x - next_x) + (cur_y - next_y)*(cur_y - next_y));

            cost.emplace_back(create(i, j, c));
        }
    }

    sort(cost.begin(), cost.end(), cmp);

    solution();
}
*/

/* 1647번 도시 분할 계획
// 해설 : MST로 이은 후 최대 값 빼기

int N, M;

struct info
{
    int a, b, c;
};

info create(int a, int b, int c)
{
    info n_info;

    n_info.a = a;
    n_info.b = b;
    n_info.c = c;

    return n_info;
}

bool cmp(info a, info b)
{
    return a.c < b.c;
}

vector<info> cost;
vector<int> house;

int find_loot(int n)
{
    if(house[n] < 0)
        return n;

    return house[n] = find_loot(house[n]);
}

bool merge(int a, int b)
{
    a = find_loot(a);
    b = find_loot(b);

    if(a == b)
        return false;

    house[b] = a;
    return true;
}

void solution()
{
    int ans = 0;
    int max_cost = 0;
    int cnt = 0;

    for(int i =  0 ; i < cost.size() ; i++)
    {
        int a = cost[i].a;
        int b = cost[i].b;
        int c = cost[i].c;

        if(merge(a, b))
        {
            ans += c;
            max_cost = max(max_cost, c);

            if(++cnt == N - 1)
            {
                cout << ans - max_cost;
                return;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    house.assign(N + 1, -1);

    for(int i = 0 ; i < M ; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cost.emplace_back(create(a, b, c));
    }

    sort(cost.begin(), cost.end(), cmp);
    solution();
}
*/