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

/* 15565번 귀여운 라이언
// 해설 : 투포인터인데 거리가 정해져있어서 쉽게 풀 수 있다.
// url : https://www.acmicpc.net/problem/15565

int N, K;
vector<int> ryan;

void input()
{
    int doll;
    cin >> N >> K;

    for(int i = 0 ; i < N ; i++)
    {
        cin >> doll;

        if(doll == 1)
            ryan.emplace_back(i);
    }   
}

void solution()
{
    if(ryan.size() < K)
    {
        cout << "-1";
        return;
    }

    int answer = N;
    int distance;

    for(int i = 0 ; i <= ryan.size() - K ; i++)
    {
        distance = ryan[i + K - 1] - ryan[i] + 1;
        answer = min(answer, distance);
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