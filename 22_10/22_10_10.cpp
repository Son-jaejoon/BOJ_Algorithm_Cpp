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

/* 2239번 스도쿠
// 해설 : DFS, 3x3의 작은칸을 해결하는 법(3으로 나누고 다시 3곱하기)

int cnt;
int arr[9][9];
vector<pair<int, int>> save;
bool visit[81];

bool possible(int y, int x, int num)
{
    for(int i = 0 ; i < 9 ; i++)
    {
        if(arr[y][i] == num || arr[i][x] == num)
            return false;
    }

    int box_y = y/3;
    int box_x = x/3;

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            if(arr[box_y*3 + i][box_x*3 + j] == num)
                return false;
        }
    }

    return true;
}

void solution(int n)
{
    if(n == cnt)
    {
        for(int i = 0 ; i < 9 ; i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                cout << arr[i][j];
            }

            cout << endl;
        }

        exit(0);
    }

    if(visit[n])
        return;
    
    visit[n] = true;
    int y = save[n].first;
    int x = save[n].second;

    for(int i = 1 ; i <= 9 ; i++)
    {
        if(possible(y, x, i))
        {
            arr[y][x] = i;
            solution(n + 1);
            arr[y][x] = 0;
        }
    }

    visit[n] = false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    for(int i = 0 ; i < 9 ; i++)
    {
        string st;
        cin >> st;

        for(int j = 0 ; j < 9 ; j++)
        {
            arr[i][j] = (int)(st[j] - '0');

            if(arr[i][j] == 0)
            {
                save.emplace_back(make_pair(i, j));
                cnt++;
            }
        }
    }

    solution(0);
}
*/

/* 1987번 알파벳
// 해설 : dfs

int R, C, ans;

vector<vector<int>> arr;
vector<vector<bool>> visited;
bool chk[27];

int dy[] = {-1, 1, 0 ,0};
int dx[] = {0, 0, -1, 1};

void solution(int y, int x, int cnt)
{
    ans = max(ans, cnt);

    for(int i = 0 ; i < 4 ; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 || nx < 0 || ny >= R || nx >= C)
            continue;
        
        if(visited[ny][nx])
            continue;
        
        int num = arr[ny][nx];

        if(chk[num])
            continue;
        
        visited[ny][nx] = true;
        chk[num] = true;

        solution(ny, nx, cnt + 1);

        visited[ny][nx] = false;
        chk[num] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> R >> C;

    arr.assign(R, vector<int>(C, 0));
    visited.assign(R, vector<bool>(C, false));

    for(int i = 0 ; i < R ; i++)
    {
        string st;
        cin >> st;

        for(int j = 0 ; j < C ; j++)
        {
            char ch = st[j];
            int num = (int)ch - 64;
            arr[i][j] = num;
        }
    }

    chk[arr[0][0]] = true;
    solution(0, 0, 1);
    cout << ans;
}
*/

/* 1197번 최소 스패닝 트리
// 해설 : 최소 스패닝 트리

int V, E;

struct info
{
    int x, y;
    long long c;
};

info create(int x, int y, long long c)
{
    info n_info;

    n_info.x = x;
    n_info.y = y;
    n_info.c = c;

    return n_info;
}

bool cmp(info &a, info &b)
{
    return a.c < b.c;
}

vector<int> arr;
vector<info> connect;

int find_loot(int a)
{
    if(arr[a] < 0)
        return a;
    
    return arr[a] = find_loot(arr[a]);
}

bool merge(int a, int b)
{
    a = find_loot(a);
    b = find_loot(b);

    if(a == b)
        return false;
    
    arr[b] = a;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> V >> E;
    
    arr.assign(V + 1, -1);

    for(int i = 0 ; i < E ; i++)
    {
        int a, b;
        long long c;
        cin >> a >> b >> c;

        connect.emplace_back(create(a, b, c));
    }

    long long ans = 0;
    int cnt = 0;

    sort(connect.begin(), connect.end(), cmp);

    for(int i = 0 ; i < connect.size() ; i++)
    {
        int x = connect[i].x;
        int y = connect[i].y;
        long long c = connect[i].c;

        if(merge(x, y))
        {
            ans += c;
            if(++cnt == V - 1)
            {
                cout << ans;
                break;
            }    
        }
    }
}
*/