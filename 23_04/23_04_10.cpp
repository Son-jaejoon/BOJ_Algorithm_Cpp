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

/* 4358번 생태학
// 해설 : 해시, 맵
// url : https://www.acmicpc.net/problem/4358

map<string, float> mp;
float cnt;

void input()
{
    string st;

    while(getline(cin, st))
    {
        cnt++;

        if(mp.find(st) != mp.end())
            mp[st] += 1;
        else
            mp[st] = 1;
    }
}

void solution()
{
    cout << fixed;
    cout.precision(4);

    for(auto it : mp)
    {
        float answer = (it.second / cnt) * 100;
        cout << it.first << " ";
        cout << answer << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();
}
*/