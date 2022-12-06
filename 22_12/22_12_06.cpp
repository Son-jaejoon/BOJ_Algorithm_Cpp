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

/* 2887번 행성 터널
// 해설 : 최소 스패닝 트리 응용, 터널을 만들 때 시간 제한에 걸리지 않게 조심해야한다.

struct info
{
    int dist, first_idx, second_idx;
};

info create(int dist, int first_idx, int second_idx)
{
    info n_info;

    n_info.dist = dist;
    n_info.first_idx = first_idx;
    n_info.second_idx = second_idx;

    return n_info;
}

bool cmp(info a, info b)
{
    return a.dist < b.dist;
}

int N, ans;

vector<pair<int, int>> location_x;
vector<pair<int, int>> location_y;
vector<pair<int, int>> location_z;
vector<info> tunnel;
vector<int> parent;

void input();
void solution();
void create_tunnel();
void kruskal();
void print_answer();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();
}

void input()
{
    cin >> N;

    parent.assign(N, -1);

    for(int i = 0 ; i < N ; i++)
    {
        int x, y, z;

        cin >> x >> y >> z;

        location_x.emplace_back(make_pair(x, i));
        location_y.emplace_back(make_pair(y, i));
        location_z.emplace_back(make_pair(z, i));
    }
}

void solution()
{
    create_tunnel();
    kruskal();
    print_answer();
}

void create_tunnel()
{
    sort(location_x.begin(), location_x.end());
    sort(location_y.begin(), location_y.end());
    sort(location_z.begin(), location_z.end());

    for(int i = 0 ; i < N - 1 ; i++)
    {
        tunnel.emplace_back(create(abs(location_x[i].first - location_x[i + 1].first), location_x[i].second, location_x[i + 1].second));
        tunnel.emplace_back(create(abs(location_y[i].first - location_y[i + 1].first), location_y[i].second, location_y[i + 1].second));
        tunnel.emplace_back(create(abs(location_z[i].first - location_z[i + 1].first), location_z[i].second, location_z[i + 1].second));
    }

    sort(tunnel.begin(), tunnel.end(), cmp);
}

int find_parent(int a)
{
    if(parent[a] < 0)
        return a;
    
    return parent[a] = find_parent(parent[a]);
}

bool merge(int a, int b)
{
    a = find_parent(a);
    b = find_parent(b);

    if(a == b)
        return false;

    parent[a] = b;

    return true;
}

void kruskal()
{
    int cnt = 0;

    for(int i = 0 ; i < tunnel.size() ; i++)
    {
        if(merge(tunnel[i].first_idx, tunnel[i].second_idx))
        {
            ans += tunnel[i].dist;

            if(++cnt == N - 1)
                break;
        }
    }
}

void print_answer()
{
    cout << ans;
}
*/