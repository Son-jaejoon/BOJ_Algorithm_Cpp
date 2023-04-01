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

/* 15665번 N과 M(11)
// 해설 : dfs
// url : https://www.acmicpc.net/problem/15665

int N, M;
vector<int> v;
vector<int> answer;
set<vector<int>> s;

void input()
{
    cin >> N >> M;
    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }
}

void dfs(int cnt)
{
    if(cnt == M)
    {
        s.insert(answer);
        return;
    }

    for(int i = 0 ; i < N ; i++)
    {
        answer.emplace_back(v[i]);
        dfs(cnt + 1);
        answer.pop_back();
    }
}

void print_answer()
{
    for(auto ans : s)
    {
        for(int i = 0 ; i < ans.size() ; i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }
}

void solution()
{
    dfs(0);
    print_answer();
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