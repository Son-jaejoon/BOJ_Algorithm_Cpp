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

/* 1911번 흙길 보수하기
// 해설 : 그리디
// url : https://www.acmicpc.net/problem/1911

int N, L;
vector<pair<int, int>> pool;

void input()
{
    cin >> N >> L;

    int start, end;

    for(int i = 0 ; i < N ; i++)
    {
        cin >> start >> end;
        pool.emplace_back(make_pair(start, end));
    }
}

void solution()
{
    sort(pool.begin(), pool.end());

    int answer = 0;
    int idx = 0; // 마지막 판자의 위치

    for(auto &curr_pool : pool)
    {
        int pool_left = curr_pool.first;
        int pool_right = curr_pool.second;

        if(pool_left < idx)
            pool_left = idx;

        if(pool_right < pool_left)
            continue;
        
        int diff = pool_right - pool_left;
        int cnt = diff / L;

        if(diff % L != 0)
            cnt++;
        
        answer += cnt;
        idx = pool_left + L * cnt;
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