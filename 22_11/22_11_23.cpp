#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#define endl "\n"

using namespace std;

/* 1918번 후위 표기식
// 해설 : 스택 활용

string st;
stack<char> stk;

void solution()
{
    string ans = "";

    for(int i = 0 ; i < st.size() ; i++)
    {
        if('A' <= st[i] && st[i] <= 'Z')
            ans += st[i];
        else
        {
            if(stk.empty())
                stk.emplace(st[i]);
            else
            {
                if(st[i] == '(')
                    stk.emplace(st[i]);
                else if(st[i] == ')')
                {
                    while(stk.top() != '(')
                    {
                        ans += stk.top();
                        stk.pop();
                    }
                    stk.pop();
                }
                else if(st[i] == '+' || st[i] == '-')
                {
                    while(!stk.empty() && stk.top() != '(')
                    {
                        ans += stk.top();
                        stk.pop();
                    }

                    stk.emplace(st[i]);
                }
                else if(st[i] == '*' || st[i] == '/')
                {
                    while(!stk.empty() && (stk.top() == '*' || stk.top() == '/'))
                    {
                        ans += stk.top();
                        stk.pop();
                    }

                    stk.emplace(st[i]);
                }
            }
        }
    }

    while(!stk.empty())
    {
        ans += stk.top();
        stk.pop();
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> st;

    solution();
}
*/