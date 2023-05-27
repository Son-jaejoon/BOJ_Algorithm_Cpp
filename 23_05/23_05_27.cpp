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

/* 1052번 물병
// 해설 : 브루트포스, 그리디
// url : https://www.acmicpc.net/problem/1052

int N, K;

void input()
{
    cin >> N >> K;
}

void solution()
{
    if(K >= N)
    {
        cout << 0;
        return;
    }

    int answer = 0;
    int cnt, curr_num;

    while(1)
    {
        cnt = 0;
        curr_num = N;

        while(curr_num > 0)
        {
            if(curr_num % 2 == 0)
            {
                curr_num /= 2;
            }
            else
            {
                curr_num /= 2;
                cnt++;
            }
        }

        if(K >= cnt)
            break;
        
        N++;
        answer++;
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