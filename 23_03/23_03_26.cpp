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

/* 5397번 키로거
// 해설 : 스택 활용
// url : https://www.acmicpc.net/problem/5397

void solution(string st)
{
    string answer = "";

    stack<char> left;
    stack<char> right;

    for(char ch : st)
    {
        if(ch == '<')
        {
            if(left.empty())
                continue;

            right.emplace(left.top());
            left.pop();
        }
        else if(ch == '>')
        {
            if(right.empty())
                continue;
            
            left.emplace(right.top());
            right.pop();
        }
        else if(ch == '-')
        {
            if(left.empty())
                continue;

            left.pop();    
        }
        else
        {

            left.emplace(ch);
        }
    }

    while(!left.empty())
    {
        right.emplace(left.top());
        left.pop();
    }

    while(!right.empty())
    {
        answer += right.top();
        right.pop();
    }

    cout << answer <<endl;
}

void input()
{
    int T;
    cin >> T;

    while(T--)
    {
        string st;
        cin >> st;

        solution(st);
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