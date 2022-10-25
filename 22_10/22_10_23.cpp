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

/* 20040번 사이클 게임
// 해설 : 유니온 파인드

int N, M;
vector<int> parent;
vector<pair<int, int>> save;

int find_loot(int a)
{
    if(parent[a] == -1)
        return a;
    
    return parent[a] = find_loot(parent[a]);
}

bool merge(int a, int b)
{
    a = find_loot(a);
    b = find_loot(b);

    if(a == b)
        return true;
    
    parent[a] = b;
    return false;
}

void solution()
{
    for(int i = 0 ; i < save.size() ; i++)
    {
        int a, b;
        a = save[i].first;
        b = save[i].second;

        if(merge(a, b))
        {
            cout << i + 1;
            return;
        }
    }

    cout << 0;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    parent.assign(N, -1);

    for(int i = 1 ; i <= M ; i++)
    {
        int a, b;

        cin >> a >> b;
        save.emplace_back(make_pair(a, b));
    }

    solution();
}
*/