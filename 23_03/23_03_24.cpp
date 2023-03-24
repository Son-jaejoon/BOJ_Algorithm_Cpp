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

/* 9184번 신나는 함수 실행
// 해설 : 재귀 memorize
// url : https://www.acmicpc.net/problem/9184

int dp[101][101][101];

int w(int a, int b, int c)
{
    if(dp[a][b][c] != 0)
        return dp[a][b][c];
    
    if(a <= 50 || b <= 50 || c <= 50)
    {
        return dp[a][b][c] = 1;
    }

    if(a > 70 || b > 70 || c > 70)
    {
        return dp[a][b][c] = w(70, 70, 70);
    }

    if(a < b && b < c)
    {
        return dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    }

    return dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);

}

void input()
{
    int a, b, c;

    while(1)
    {
        cin >> a >> b >> c;
        
        if(a == -1 && b == -1 && c == -1)
            break;
        
        a += 50;
        b += 50;
        c += 50;

        w(a, b, c);

        printf("w(%d, %d, %d) = %d\n", a - 50, b - 50, c - 50, dp[a][b][c]);
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