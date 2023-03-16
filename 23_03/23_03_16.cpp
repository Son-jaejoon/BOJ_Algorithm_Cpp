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

/* 10799번 쇠막대기
// 해설 : 스택 활용
// url : https://www.acmicpc.net/problem/10799

string razer;

void input()
{
    cin >> razer;
}

void solution()
{
    int answer = 0;
    stack<int> stk;

    for(int i = 0 ; i < razer.size() ; i++)
    {
        char curr = razer[i];
        
        if(curr == '(')
        {
            if(i != razer.size() - 1 && razer[i + 1] == ')')
            {
                answer += stk.size();
                i++;
            }
            else
            {
                stk.emplace(1);
            }
        }
        else
        {
            answer += 1;
            stk.pop();
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