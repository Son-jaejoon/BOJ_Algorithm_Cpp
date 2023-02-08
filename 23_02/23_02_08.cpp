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

/* 1935번 후위 표기식2
// 해설 : 스택, 후위표기식을 스택으로 구현하기
// url : https://www.acmicpc.net/problem/1935

int N;
string st;
vector<int> v;

void input()
{
    cin >> N >> st;

    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }
}

void solution()
{
    stack<double> stk;

    for(int i = 0 ; i < st.size() ; i++)
    {
        if(st[i] >= 'A' && st[i] <= 'Z')
        {
            stk.push(v[st[i] - 'A']);
        }
        else
        {
            if(!stk.empty())
            {
                double tmp = stk.top();
                stk.pop();

                if(st[i] == '+')
                {
                    tmp = stk.top() + tmp;
                }
                else if(st[i] == '-')
                {
                    tmp = stk.top() - tmp;
                }
                else if(st[i] == '*')
                {
                    tmp = stk.top() * tmp;
                }
                else if(st[i] == '/')
                {
                    tmp = stk.top() / tmp;
                }

                stk.pop();
                stk.emplace(tmp);
            }
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << stk.top();
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