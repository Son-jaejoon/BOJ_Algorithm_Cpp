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

/* 2251번 물통
// 해설 : BFS
// url : https://www.acmicpc.net/problem/2251

int A, B, C;

void input()
{
    cin >> A >> B >> C;
}

struct info
{
    int a, b, c;
};

info create(int a, int b, int c)
{
    info n_info;

    n_info.a = a;
    n_info.b = b;
    n_info.c = c;

    return n_info;
}

void solution()
{
    vector<int> answer;

    vector<vector<vector<bool>>> visited(A + 1, vector<vector<bool>>(B + 1, vector<bool>(C + 1, false)));

    queue<info> q;
    q.emplace(create(0, 0, C));

    while (!q.empty())
    {
        int a = q.front().a;
        int b = q.front().b;
        int c = q.front().c;
        q.pop();

        if (visited[a][b][c])
            continue;

        visited[a][b][c] = true;

        if(a == 0)
            answer.emplace_back(c);

        if (a + b > B)
            q.emplace(create(a + b - B, B, c));
        else
            q.emplace(create(0, a + b, c));

        if (a + c > C)
            q.emplace(create(a + c - C, b, C));
        else
            q.emplace(create(0, b, a + c));

        if (b + a > A)
            q.emplace(create(A, b + a - A, c));
        else
            q.emplace(create(b + a, 0, c));

        if (b + c > C)
            q.emplace(create(a, b + c - C, C));
        else
            q.emplace(create(a, 0, b + c));

        if (c + a > A)
            q.emplace(create(A, b, c + a - A));
        else
            q.emplace(create(c + a, b, 0));

        if (c + b > B)
            q.emplace(create(a, B, c + b - B));
        else
            q.emplace(create(a, b + c, 0));
    }

    sort(answer.begin(), answer.end());
    for (auto num : answer)
        cout << num << " ";
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