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

/* 11758번 CCW
// 해설 : 기하학
// url : https://www.acmicpc.net/problem/11758

void solution(const int &x1, const int &y1, const int &x2, const int &y2, const int &x3, const int &y3);

void input()
{
    int x1, y1, x2, y2, x3, y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    solution(x1, y1, x2, y2, x3, y3);
}

void solution(const int &x1, const int &y1, const int &x2, const int &y2, const int &x3, const int &y3)
{
    if ((x1 * y2 - x2 * y1 + x2 * y3 - x3 * y2 + x3 * y1 - x1 * y3) / 2 > 0)
        cout << "1";
    else if ((x1 * y2 - x2 * y1 + x2 * y3 - x3 * y2 + x3 * y1 - x1 * y3) / 2 < 0)
        cout << "-1";
    else
        cout << "0";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/