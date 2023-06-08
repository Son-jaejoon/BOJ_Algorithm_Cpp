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

/* 2792번 보석 상자
// 해설 : 이분탐색
// url : https://www.acmicpc.net/problem/2792

int N, M;
vector<int> candy;

void input()
{
    cin >> N >> M;

    candy.assign(M, 0);
    
    for(int i = 0 ; i < M ; i++)
    {
        cin >> candy[i];
    }
}

void solution()
{
    int left = 1;
    int right = *max_element(candy.begin(), candy.end());

    while(left < right)
    {
        int mid = (left + right) / 2;
        int cnt = 0;

        for(int i = 0 ; i < M ; i++)
        {
            cnt += candy[i] / mid;

            if(candy[i] % mid)
                cnt++; 
        }

        if(cnt > N)
            left = mid + 1;
        else
            right = mid;
    }

    cout << left;
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