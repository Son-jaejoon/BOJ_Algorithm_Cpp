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

/* 2493번 탑
// 해설 : 스택
// url : https://www.acmicpc.net/problem/2493

void input()
{
    int N, num;
    cin >> N;

    stack<pair<int, int>> tower;

    for (int i = 1; i <= N; i++)
    {
        cin >> num;

        while (!tower.empty())
        {
            if (tower.top().second > num)
            {
                cout << tower.top().first << " ";
                break;
            }

            tower.pop();
        }

        if (tower.empty())
        {
            cout << "0" << " ";
        }

        tower.emplace(make_pair(i, num));
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