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

/* 15486Ήψ Επ»η 2
// ΗΨΌ³ : DP
// url : https://www.acmicpc.net/problem/15486

int N;
vector<vector<int>> schedule;

void input()
{
    cin >> N;
    schedule.assign(N, vector<int>(2, 0));

    for(int i = 0 ; i < N ; i++)
    {
        cin >> schedule[i][0] >> schedule[i][1];
    }
}


void solution()
{
    vector<int> days(N + 1, 0);

    int curr_max = 0;

    for(int i = 0 ; i <= N ; i++)
    {
        curr_max = max(curr_max, days[i]);

        if(i == N)
            continue;
        
        if(i + schedule[i][0] > N)
            continue;
        
        days[i + schedule[i][0]] = max(days[i + schedule[i][0]], curr_max + schedule[i][1]);
    }

    cout << curr_max;
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