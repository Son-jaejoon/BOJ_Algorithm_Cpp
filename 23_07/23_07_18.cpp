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

/* 2668번 숫자고르기
// 해설 : DFS
// url : https://www.acmicpc.net/problem/2668

int N;
vector<int> v;
vector<bool> visited;
set<int> answer;

void input()
{
    cin >> N;

    v.assign(N + 1, 0);

    for(int i = 1 ; i <= N ; i++)
        cin >> v[i];
}

void find_answer(int first_idx, int idx)
{
    if(visited[idx])
    {
        if(first_idx == idx)
        {
            answer.insert(idx);
        }
    }
    else
    {
        visited[idx] = true;
        find_answer(first_idx, v[idx]);
    }
}

void solution()
{
    for(int i = 1 ; i <= N ; i++)
    {
        visited.assign(N + 1, false);
        find_answer(i, i);
    }

    cout << answer.size() << endl;

    for(auto idx : answer)
        cout << idx << endl;
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