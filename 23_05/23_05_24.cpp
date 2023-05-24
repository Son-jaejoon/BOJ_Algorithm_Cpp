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

/* 15903번 카드 합체 놀이
// 해설 : 그리디, 우선순위 큐(풀이 2)
// url : https://www.acmicpc.net/problem/15903

int N, M;
priority_queue<long long, vector<long long>, greater<long long>> pq;

void input()
{
    cin >> N >> M;

    int num;

    while(N--)
    {
        cin >> num;
        pq.emplace(num);
    }
}

void solution()
{
    int answer = 0;

    while(M--)
    {
        long long sum = 0;
        sum = pq.top();
        pq.pop();
        sum += pq.top();
        pq.pop();

        pq.emplace(sum);
        pq.emplace(sum);
    }

    while(!pq.empty())
    {
        answer += pq.top();
        pq.pop();
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

/* 풀이 1 : 시간이 너무 오래걸림 sort 시간복잡도가 N*logN

int N, M;
vector<int> v;

void input()
{
    cin >> N >> M;
    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }
}

void solution()
{
    int answer = 0;

    while(M--)
    {
        sort(v.begin(), v.end());
        v[0] += v[1];
        v[1] = v[0];
    }

    for(auto score : v)
        answer += score;

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