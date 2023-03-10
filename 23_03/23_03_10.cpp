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

/* 1874번 스택 수열
// 해설 : 스택에 대한 이해
// url : https://www.acmicpc.net/problem/1874

int N;
vector<int> v;
vector<char> answer;

void input()
{
    cin >> N;
    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }
}

void solution()
{
    stack<int> stk;
    
    int num = 1;
    int idx = 0;

    while(idx != N)
    {
        if(stk.empty() && num <= N)
        {
            stk.emplace(num);
            answer.emplace_back('+');
            num++;
        }

        int top_value = stk.top();

        if(top_value == v[idx])
        {
            stk.pop();
            answer.emplace_back('-');
            idx++;
        }
        else if(num <= N)
        {
            stk.emplace(num);
            answer.emplace_back('+');
            num++;
        }
        else
        {
            cout << "NO";
            return;
        }
    }

    for(auto i : answer)
    {
        cout << i << endl;
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