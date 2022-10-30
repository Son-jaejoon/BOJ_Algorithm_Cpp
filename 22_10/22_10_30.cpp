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

/* 1509번 팰린드롬 분할
// 해설 : DP, 구간을 나눠서 생각해야한다.
// 참고 : https://yabmoons.tistory.com/592

int N;
vector<int> dp;
vector<char> st;
vector<vector<bool>> palindrome;

void make_palindrome()
{
    for(int i = 0 ; i < N ; i++)
    {
        palindrome[i][i] = true;
    }

    for(int i = 0; i < N - 1 ; i++)
    {
        if(st[i] == st[i + 1])
        {
            palindrome[i][i + 1] = true;
        }
    }

    for(int i = 3 ; i <= N ; i++)
    {
        for(int start = 0 ; start + i - 1 < N ; start++)
        {
            int end = start + i - 1;

            if(st[start] == st[end] && palindrome[start + 1][end - 1] == true)
            {
                palindrome[start][end] = true;
            }
        }
    }
}

void solution()
{
    N = st.size();
    dp.assign(N, 987654321);
    palindrome.assign(N, vector<bool>(N, false));

    make_palindrome();

    for(int end = 0 ; end < N ; end++)
    {
        for(int start = 0 ; start <= end ; start++)
        {
            if(palindrome[start][end] == true)
            {
                if(start == 0)
                {
                    dp[end] = min(dp[end], 1);
                }
                else
                    dp[end] = min(dp[end], dp[start - 1] + 1);
            }
        }
    }

    cout << dp[N - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string tmp;
    cin >> tmp;

    for(int i = 0 ; i < tmp.size() ; i++)
    {
        st.emplace_back(tmp[i]);
    }

    solution();
}
*/