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

/* 17087번 숨바꼭질 6
// 해설 : GCD
// url : https://www.acmicpc.net/problem/17087

int S;
vector<int> v, dist;

void input()
{
    int N;
    cin >> N >> S;

    for(int i = 0 ; i < N ; i++)
    {
        int num;
        cin >> num;
        v.emplace_back(num);
        dist.emplace_back(abs(num - S));
    }
}

int gcd(int a, int b)
{
    int tmp = 0;

    while(b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }

    return a;
}

void solution()
{
    int answer = dist[0];

    for(int i = 1 ; i < dist.size() ; i++)
    {
        answer = gcd(answer, dist[i]);
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