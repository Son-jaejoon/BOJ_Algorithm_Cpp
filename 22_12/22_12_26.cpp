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

/* 11399번 ATM
// 해설 : 정렬
// url : https://www.acmicpc.net/problem/11399

int N;
vector<int> v;
vector<int> time;

void input()
{
    cin >> N;

    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
}

void solution()
{
    int answer = 0;
    time.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        int tmp = 0;

        for(int j = 0 ; j <= i ; j++)
        {
            tmp += v[j];
        }
        time[i] = tmp;
        answer += time[i];
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