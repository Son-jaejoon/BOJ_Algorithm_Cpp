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

/* 1182번 부분수열의 합
// 해설 : 브루트포스, dfs
// url : https://www.acmicpc.net/problem/1182

int N, S, answer;
vector<int> v;

void input()
{
    cin >> N >> S;

    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }
}

void dfs(int idx, int sum)
{
    if(idx == N)
        return;
    
    if(sum + v[idx] == S)
        answer++;
    
    dfs(idx + 1, sum);
    dfs(idx + 1, sum + v[idx]);
}

void solution()
{
    dfs(0, 0);

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