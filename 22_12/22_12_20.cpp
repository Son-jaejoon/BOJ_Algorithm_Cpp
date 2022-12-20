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

/* 9942번 하노이의 네 탑
// 해설 : 하노이탑 DP, 어렵다..
// 참고 : https://www.youtube.com/watch?v=xWOWwJEgiJQ

int N, case_cnt;

long long pow(int num)
{
    long long x = 2;
    long long result = 1;

    while(num)
    {
        if(num & 1)
            result *= x;

        x *= x;
        num >>= 1;
    }

    return result;
}

void solution()
{
    cout << "Case " << case_cnt << ": ";

    long long sum = 0;
    int idx = 0;
    int cnt = 0;

    for(idx = 1 ; idx * (idx + 1) / 2 < N ; idx++)
        continue;
    
    idx--;
    
    cnt = N - idx * (idx + 1) / 2;

    for(int i = 0 ; i < idx ; i++)
    {
        sum = sum + pow(i) * (i + 1);
    }

    sum = pow(idx) * cnt + sum;

    cout << sum << endl;
}

void input()
{
    while(cin >> N)
    {        
        case_cnt++;
        solution();
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