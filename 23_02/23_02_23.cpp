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

/* 9375번 패션왕 신해빈
// 해설 : 조합, MAP
// url : https://www.acmicpc.net/problem/9375

map<string, int> mp;

void input()
{
    int t;
    cin >> t;

    while(t--)
    {
        mp.clear();

        int N;
        cin >> N;

        for(int i = 0 ; i < N ; i++)
        {
            string name, type;
            cin >> name >> type;

            if(mp.find(type) != mp.end())
            {
                mp[type] += 1;
            }
            else
                mp.insert(make_pair(type, 1));
        }

        int answer = 1;

        for(auto i : mp)
        {
            answer *= (i.second + 1);
        }

        answer -= 1;

        cout << answer << endl;
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