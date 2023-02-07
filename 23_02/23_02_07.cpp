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

/* 18429번 근손실
// 해설 : DFS
// url : https://www.acmicpc.net/problem/18429

int N, K;
vector<int> kit;
int answer = 0;
void input()
{
    cin >> N >> K;

    kit.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> kit[i];
    }
}

void dfs(vector<bool> visited, int weight, int day)
{
    if(weight < 500)
        return;

    if(day == N)
        answer++;

    for(int i = 0 ; i < N ; i++)
    {
        if(visited[i])
            continue;
        
        visited[i] = true;
        dfs(visited, weight + kit[i] - K, day + 1);
        visited[i] = false;
    }
}

void solution()
{
    vector<bool> visited;
    visited.assign(N, false);

    dfs(visited, 500, 0);
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