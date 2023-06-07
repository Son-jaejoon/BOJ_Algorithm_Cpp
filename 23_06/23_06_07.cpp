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

/* 9009번 피보나치
// 해설 : 구현, 그리디
// url : https://www.acmicpc.net/problem/9009

vector<int> fibonacci;
bool chk;

void setting()
{
    fibonacci.assign(46, 0);
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2 ; i < 46 ; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
}

void solution(int num)
{   
    deque<int> save;

    for(int i = 45 ; i >= 1 ; i--)
    {
        if(fibonacci[i] > num)
            continue;
        
        num -= fibonacci[i];
        save.emplace_front(fibonacci[i]);
    }

    while(!save.empty())
    {
        cout << save.front() << " ";
        save.pop_front();
    }

    cout << endl;
}

void input()
{
    int T, num;
    cin >> T;
    
    while(T--)
    {
        cin >> num;
        solution(num);
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