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

/* 2168번 타일 위의 대각선
// 해설 : 수학
// url : https://www.acmicpc.net/problem/2168

int X, Y;

void input()
{
    cin >> X >> Y;
}

void solution()
{
    int g = [](int a, int b)
    {
        while (b)
        {
            int t = b;
            b = a % b;
            a = t;
        }
        return a;
    }(X, Y);

    cout << (X + Y - g);
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