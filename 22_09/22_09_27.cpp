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

/* 6497번 전력난
// 해설 : 그냥 문제 잘 읽자.

int m, n, ans, sum;
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

struct info
{
    int x, y, z;
};

info create(int x, int y, int z)
{
    info n_info;

    n_info.x = x;
    n_info.y = y;
    n_info.z = z;

    return n_info;
}

bool cmp(info a, info b)
{
    return a.z < b.z;
}

vector<info> city;

void solution()
{
    ans = 0;
    int count = 0;
    for(int i = 0 ; i < city.size() ; i++)
    {
        int x = city[i].x;
        int y = city[i].y;
        int z = city[i].z;

        if(merge(x, y))
        {
            ans += z;
            if(++count == m - 1)
            {
                cout << sum - ans << endl;
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

    while(1)
    {
        cin >> m >> n;

        connect.clear();
        city.clear();
        sum = 0;

        connect.assign(m + 1, -1);

        if(m == 0 && n == 0)
            break;

        for(int i = 0 ; i < n ; i++)
        {
            int x, y, z;

            cin >> x >> y >> z;
            sum += z;
            city.emplace_back(create(x, y, z));
        }

        sort(city.begin(), city.end(), cmp);
        solution();
    }
}
*/