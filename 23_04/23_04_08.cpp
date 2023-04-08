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

/* 2304번 창고 다각형
// 해설 : 브루트포스
// url : https://www.acmicpc.net/problem/2304

int arr[1001];
int max_idx, max_h;

void input()
{
    int N, L, H;
    
    cin >> N;

    for(int i = 0 ; i < N ; i++)
    {
        cin >> L >> H;
        arr[L] = H;

        if(max_h < H)
        {
            max_h = H;
            max_idx = L;
        }
    }
}

void solution()
{
    int answer = max_h;

    int h = 0;
    for(int i = 1 ; i < max_idx ; i++)
    {
        h = max(h, arr[i]);
        answer += h;
    }

    h = 0;

    for(int i = 1000 ; i > max_idx ; i--)
    {
        h = max(h, arr[i]);
        answer += h;
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