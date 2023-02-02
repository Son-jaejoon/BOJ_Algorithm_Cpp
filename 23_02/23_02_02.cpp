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

/* 10800번 컬러볼
// 해설 : 정렬, 누적 합, 누적 합의 규칙을 찾기
// url : https://www.acmicpc.net/problem/10800

int N;

struct info
{
    int idx, color, ball_size;
};

info create(int idx, int color, int ball_size)
{
    info n_info;

    n_info.idx = idx;
    n_info.color = color;
    n_info.ball_size = ball_size;

    return n_info;
}

vector<info> v;

void input()
{
    cin >> N;

    for(int i = 0 ; i < N ; i++)
    {
        int a, b;
        cin >> a >> b;

        v.emplace_back(create(i, a, b));
    }
}

bool cmp(info &a, info &b)
{
    if(a.ball_size == b.ball_size)
        return a.color < b.color;
    
    return a.ball_size < b.ball_size;
}

void solution()
{
    sort(v.begin(), v.end(), cmp);

    vector<int> answer(N, 0);
    vector<int> color_sum(N + 1, 0);
    vector<int> size_sum(2001, 0);

    int sum = 0;

    for(int i = 0 ; i < N ; i++)
    {
        int idx = v[i].idx;
        int color = v[i].color;
        int ball_size = v[i].ball_size;

        color_sum[color] += ball_size;
        size_sum[ball_size] += ball_size;
        sum += ball_size;

        answer[idx] = sum - color_sum[color] - size_sum[ball_size] + ball_size;

        if(i != 0 && (v[i - 1].color == color) && (v[i - 1].ball_size == ball_size))
            answer[idx] = answer[v[i - 1].idx];
    }

    for(auto i : answer)
    {
        cout << i << endl;
    }
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