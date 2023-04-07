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

/* 1024번 수열의 합
// 해설 : 수학
// url : https://www.acmicpc.net/problem/1024

int N, L;

void solution()
{
    int answer = -1, len = 0;

    for(int i = L ; i <= 100 ; i++)
    {
        int sum = i*(i - 1)/2;

        if((N - sum) % i == 0 && (N - sum)/i >= 0)
        {
            answer = (N - sum)/i;
            len = i;
            break;
        }
    }

    if(len == 0)
        cout << answer;
    else
    {
        for(int i = 0 ; i < len ; i++)
        {
            cout << answer + i << " ";
        }
    }
}

void input()
{
    cin >> N >> L;
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