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

/* 17103번 골드바흐 파티션
// 해설 : 에라토스테네스의 체
// url : https://www.acmicpc.net/problem/17103

int N;

void solution()
{
    int answer = 0;

    vector<int> v;
    v.assign(N + 1, 0);

    for(int i = 2 ; i <= N ; i++)
    {
        v[i] = i;
    }

    for(int i = 2 ; i * i <= N ; i++)
    {
        if(v[i] == 0)
            continue;
        
        for(int j = i * i ; j <= N ; j += i)
        {
            v[j] = 0;
        }
    }

    for(int i = 2 ; i < N ; i++)
    {
        if(v[i] + v[N - i] == N)
        {
            answer++;

            if(i == N - i)
                answer++;
        }
    }

    answer /= 2;

    cout << answer << endl;
}

void input()
{
    int T;
    cin >> T;

    while(T--)
    {
        cin >> N;
        solution();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}

*/