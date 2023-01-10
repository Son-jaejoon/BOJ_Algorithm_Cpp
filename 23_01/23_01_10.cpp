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

/* 1003번 피보나치 함수
// 해설 : DP
// url : https://www.acmicpc.net/problem/1003

int N;

vector<int> v;
vector<pair<int, int>> dp;

void input()
{
    int T;
    cin >> T;

    while(T--)
    {
        cin >> N;
        v.emplace_back(N);
    }
}

pair<int, int> fibonacci(int num)
{
    if(dp[num].first != -1)
    {
        return make_pair(dp[num].first, dp[num].second);
    }

    pair<int, int> a = fibonacci(num - 1);
    pair<int, int> b = fibonacci(num - 2);

    dp[num].first = a.first + b.first;
    dp[num].second = a.second + b.second;

    return make_pair(dp[num].first, dp[num].second);
}

void solution()
{
    dp.assign(41, make_pair(-1, -1));
    dp[0].first = 1;
    dp[0].second = 0;
    dp[1].first = 0;
    dp[1].second = 1;

    fibonacci(40);

    for(int i = 0 ; i < v.size() ; i++)
    {
        cout << dp[v[i]].first << " " << dp[v[i]].second << endl;
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