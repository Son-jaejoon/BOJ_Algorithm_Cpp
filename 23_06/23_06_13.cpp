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

/* 1527번 금민수의 개수
// 해설 : 브루트포스(dfs)
// url : https://www.acmicpc.net/problem/1527
int A, B, answer;

void input()
{
    cin >> A >> B;
}

void dfs(int curr_num, int cnt)
{
    if(curr_num > B || cnt >= 10)
        return;

    if(A <= curr_num)
        answer++;
    
    dfs(curr_num * 10 + 4, cnt + 1);
    dfs(curr_num * 10 + 7, cnt + 1);
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