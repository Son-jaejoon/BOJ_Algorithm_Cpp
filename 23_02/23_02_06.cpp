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

/* 13335번 트럭
// 해설 : 스택, 큐, 구현
// url : https://www.acmicpc.net/problem/13335

int N, W, L;

vector<int> v;

void input()
{
    cin >> N >> W >> L;

    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }
}

void solution()
{
    int answer = 0;
    int in_bridge = 0;
    int idx = 0;

    queue<int> q;

    while(1)
    {
        answer++;

        if(q.size() == W)
        {
            in_bridge -= q.front();
            q.pop();
        }

        if(in_bridge + v[idx] <= L)
        {
            if(idx + 1 == N)
            {
                answer += W;
                break;
            }

            q.emplace(v[idx]);
            in_bridge += v[idx];
            idx++;
        }
        else
            q.emplace(0);
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