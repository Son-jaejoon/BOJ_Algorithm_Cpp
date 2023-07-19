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

/* 2023번 신기한 소수
// 해설 : DFS
// url : https://www.acmicpc.net/problem/2023

int N;

void input()
{
    cin >> N;
}

bool check(int num)
{
    for(int i = 2 ; i * i <= num ; i++)
    {
        if(num % i == 0)
            return false;
    }

    return true;
}

void dfs(int num, int cnt)
{
    if(cnt == N)
    {
        cout << num << endl;
        return;
    }

    for(int i = 1 ; i <= 9 ; i++)
    {
        if(check(num * 10 + i))
            dfs(num * 10 + i, cnt + 1);
    }
}

void solution()
{
    dfs(2, 1);
    dfs(3, 1);
    dfs(5, 1);
    dfs(7, 1);
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