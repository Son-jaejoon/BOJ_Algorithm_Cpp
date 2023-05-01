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

/* 2942번 퍼거슨과 사과
// 해설 : 유클리드호제법
// url : https://www.acmicpc.net/problem/2942

int R, G;

void input()
{
    cin >> R >> G;
}

int gcd(int a, int b)
{
    int mod;

    while(b != 0)
    {
        mod = a % b;
        a = b;
        b = mod;
    }

    return a;
}

void solution()
{
    int divisor_num = gcd(R, G);

    for(int i = 1 ; i <= divisor_num ; i++)
    {
        if(divisor_num % i == 0)
            cout << i << " " << R / i << " " << G / i << endl;
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