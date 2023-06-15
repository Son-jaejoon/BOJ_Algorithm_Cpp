#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <string>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#include <numeric>
#include <deque>
#define endl "\n"

using namespace std;

int N;
vector<vector<int>> v;

/* 14675번 단절점과 단절선
// 해설 : 그래프
// url : https://www.acmicpc.net/problem/14675

void input()
{
    cin >> N;
    v.assign(N + 1, vector<int>());

    int a, b;

    for(int i = 1 ; i < N ; i++)
    {
        cin >> a >> b;
        v[a].emplace_back(b);
        v[b].emplace_back(a);    
    }

    int q, t, k;
    cin >> q;

    while(q--)
    {
        cin >> t >> k;

        if(t == 2)
        {
            cout << "yes" << endl;
            continue;
        }

        if(v[k].size() > 1)
        {
            cout << "yes" << endl;
        }
        else
            cout << "no" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/