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

/* 1793번 타일링
// 해설 : DP, 큰 수 연산, 큰 수 연산을 처음보는데 요즘은 파이썬만 이득을 보는 상황이라 문제 유형이 적다고 한다.
// url : https://www.acmicpc.net/problem/1793

int N;
string dp[251];

string BigNumAdd(string a, string b)
{
    string answer = "";

    if(a.size() < b.size())
    {
        swap(a, b);
    }

    int dist = a.size() - b.size();
    int prev = 0;

    for(int i = b.size() - 1 ; i >= 0 ; i--)
    {
        int a_num = a[dist + i] - '0';
        int b_num = b[i] - '0';
        int result = a_num + b_num + prev;
        answer += to_string(result % 10);
        prev = result / 10;
    }

    if(prev == 0)
    {
        for(int i = dist - 1 ; i >= 0 ; i--)
        {
            answer += a[i];
        }
    }
    else
    {
        for(int i = dist - 1 ; i >= 0 ; i--)
        {
            int result = (a[i] - '0') + prev;
            answer += to_string(result % 10);
            prev = result / 10;
        }

        if(prev != 0)
            answer += "1";
    }

    reverse(answer.begin(), answer.end());

    return answer;
}

void setting()
{
    dp[0] = "0";
    dp[1] = "1";
    dp[2] = "3";

    for(int i = 3 ; i <= 250 ; i++)
    {
        dp[i] = BigNumAdd(BigNumAdd(dp[i - 2], dp[i - 2]), dp[i - 1]);
    }
}

void input()
{
    int N;

    while(1)
    {
        cin >> N;

        if(cin.eof())
            break;

        cout << dp[N] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    setting();
    input();
}
*/