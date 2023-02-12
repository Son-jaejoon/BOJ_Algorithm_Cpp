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

/* 9881번 Ski Course Design
// 해설 : 브루트포스
// url : https://www.acmicpc.net/problem/9881

int N;
vector<int> v;

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
    int answer = 987654321;

    for(int i = 0 ; i <= 100 - 17 ; i++)
    {
        int tmp = 0;

        for(int j = 0 ; j < N ; j++)
        {
            if(v[j] < i)
                tmp += (i - v[j]) * (i - v[j]);
            else if(v[j] > i + 17)
            {
                tmp += (v[j] - i - 17) * (v[j] - i - 17);
            }
        }

        answer = min(answer, tmp);
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