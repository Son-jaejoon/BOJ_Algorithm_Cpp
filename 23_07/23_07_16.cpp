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

/* 14719번 빗물
// 해설 : 구현
// url : https://www.acmicpc.net/problem/14719

int H, W;
vector<int> v;

void input()
{
    cin >> H >> W;
    v.assign(W, 0);

    for(int i = 0 ; i < W ; i++)
    {
        cin >> v[i];
    }
}

void solution()
{
    int left, right, answer = 0;

    for(int i = 0 ; i < W ; i++)
    {
        left = 0, right = 0;

        for(int j = 0 ; j < i ; j++)
            left = max(left, v[j]);
        
        for(int j = i + 1 ; j < W ; j++)
            right = max(right, v[j]);
        
        if(min(left, right) - v[i] > 0)
            answer += min(left, right) - v[i];
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