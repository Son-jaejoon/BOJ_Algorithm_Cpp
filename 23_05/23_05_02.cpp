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

/* 1254번 팰린드롬 만들기
// 해설 : 브루트포스
// url : https://www.acmicpc.net/problem/1254

string st;

void input()
{
    cin >> st;
}

bool isPalindrom(string str)
{
    int cnt = str.size() / 2;

    for(int i = 0 ; i < cnt ; i++)
    {
        if(str[i] != str[str.size() - 1 - i])
            return false;
    }

    return true;
}

void solution()
{
    int answer = st.size()*2 - 1;

    for(int i = 0 ; i < st.size() ; i++)
    {
        string curr_st = st.substr(i, st.size() - i);

        if(isPalindrom(curr_st))
        {
            answer = st.size() + i;
            break;
        }
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