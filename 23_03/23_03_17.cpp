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

/* 14444번, 13275번 가장 긴 팰린드롬 부분 문자열
// 해설 : 마나커 알고리즘 (manachers)
// url : https://www.acmicpc.net/problem/14444

string s, str;

vector<int> dp;
int answer;

void input()
{
    cin >> s;
}

void manachers()
{
    int max_idx = 0, cur = 0;

    for(int i = 0 ; i < str.size() ; i++)
    {
        if(i <= max_idx)   
            dp[i] = min(dp[2 * cur - i], max_idx - i);
        else
            dp[i] = 0;

        int left = i - dp[i] - 1;
        int right = i + dp[i] + 1;

        while(0 <= left && right < str.size() && str[left] == str[right])
        {
            dp[i]++;
            left--;
            right++;
        }

        if(max_idx < i + dp[i])
        {
            max_idx = i + dp[i];
            cur = i;
        }

        answer = max(answer, dp[i]);
    }
}

void solution()
{
    for(int i = 0 ; i < s.size() ; i++)
    {
        str += "#";
        str += s[i];
    }

    str += "#";
    
    dp.assign(str.size(), 0);
    manachers();

    cout << answer;
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