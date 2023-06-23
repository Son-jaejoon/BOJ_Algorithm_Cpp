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

/* 4889번 안정적인 문자열
// 해설 : 스택
// url : https://www.acmicpc.net/problem/4889

void solution(const int &cnt, string &st)
{
    int answer = 0;

    stack<char> stk;

    for(int i = 0 ; i < st.size() ; i++)
    {
        if(st[i] == '{')
            stk.emplace(st[i]);
        else if(st[i] == '}')
        {
            if(stk.empty() || stk.top() != '{')
                stk.emplace(st[i]);
            else
                stk.pop();
        }
    }

    while(!stk.empty())
    {
        char curr_word = stk.top();
        stk.pop();

        if(curr_word != stk.top())
            answer += 2;
        else
            answer += 1;
        
        stk.pop();
    }

    cout << cnt << ". " << answer << endl;
}

void input()
{
    int cnt = 1;
    string st = "";

    while(1)
    {
        cin >> st;

        if(st[0] == '-')
            break;
        
        solution(cnt, st);
        cnt++;
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