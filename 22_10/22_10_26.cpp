#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 16724번 피리 부는 사나이
// 해설 : 배열의 값을 dy, dx로 이동 구현 후 1차원 배열로 표기해 유니온 파인드. 이후엔 그룹의 수를 세면 정답.

int N, M, ans;

vector<vector<int>> v;
vector<int> parent;
vector<bool> visited;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

int find_root(int a)
{
    if(parent[a] < 0)
        return a;
    
    return parent[a] = find_root(parent[a]);
}

void merge(int a, int b)
{
    a = find_root(a);
    b = find_root(b);

    if(a == b)
        return;

    parent[a] = b;
    return;
}

void solution()
{
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            int next_y = i + dy[v[i][j]];
            int next_x = j + dx[v[i][j]];

            int idx = i*M + j;
            int next_idx = next_y*M + next_x;

            merge(idx, next_idx);
        }
    }

    for(int i = 0 ; i < N*M ; i++)
    {
        if(!visited[find_root(i)])
        {
            ans++;
            visited[find_root(i)] = true;
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    v.assign(N, vector<int>(M, 0));
    parent.assign(N*M, -1);
    visited.assign(N*M, false);

    for(int i = 0 ; i < N ; i++)
    {
        string st;
        cin >> st;

        for(int j = 0 ; j < M ; j++)
        {
            char ch = st[j];

            if(ch == 'U')
            {
                v[i][j] = 0;
            }
            else if(ch == 'D')
            {
                v[i][j] = 1;
            }
            else if(ch == 'L')
            {
                v[i][j] = 2;
            }
            else if(ch == 'R')
            {
                v[i][j] = 3;
            }
        }
    }

    solution();
}
*/