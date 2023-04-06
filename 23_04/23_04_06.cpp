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

/* 2961번 도영이가 만든 맛있는 음식
// 해설 : bfs
// url : https://www.acmicpc.net/problem/2961

int N, answer = 987654321;
vector<pair<int, int>> ingredient;

void input()
{
    cin >> N;
    ingredient.assign(N, make_pair(0, 0));

    for(int i = 0 ; i < N ; i++)
    {
        cin >> ingredient[i].first >> ingredient[i].second;
    }
}

void bfs(int idx, int sour, int bitter)
{
    if(idx == N)
    {
        int dist = abs(sour - bitter);
        answer = min(dist, answer);
        return;
    }

    for(int i = idx ; i < N ; i++)
    {
        bfs(i + 1, sour * ingredient[i].first, bitter + ingredient[i].second);
        bfs(i + 1, sour, bitter);
    }
}

void solution()
{
    for(int i = 0 ; i < N ; i++)
    {
        bfs(i + 1, ingredient[i].first, ingredient[i].second);
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