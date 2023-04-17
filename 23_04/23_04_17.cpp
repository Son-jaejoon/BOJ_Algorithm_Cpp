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

/* 18353번 병사 배치하기
// 해설 : 가장 긴 증가하는 수열, https://maramarathon.tistory.com/m/57
// url : https://www.acmicpc.net/problem/18353

int N;
vector<int> v;

void input()
{
    cin >> N;

    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }

    reverse(v.begin(), v.end());
}

void solution()
{
    vector<int> dp(N, 1);

    int answer = N;

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < i ; j++)
        {
            if(v[j] < v[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }

        answer = min(answer, N - dp[i]);
    }

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