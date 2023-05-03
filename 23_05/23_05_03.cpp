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

/* 2725번 보이는 점의 개수
// 해설 : 유클리드 호제법
// url : https://www.acmicpc.net/problem/2725

vector<int> v;

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

void setting()
{
    v.assign(1001, 0);
    v[1] = 3;

    int cnt;

    for(int i = 2 ; i <= 1000 ; i++)
    {
        cnt = 0;

        for(int j = 1 ; j < i ; j++)
        {
            if(gcd(i, j) == 1)
                cnt++;
        }

        v[i] = v[i - 1] + cnt * 2;
    }
}

void input()
{
    setting();

    int C;
    cin >> C;

    while(C--)
    {
        int N;
        cin >> N;

        cout << v[N] << endl;
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