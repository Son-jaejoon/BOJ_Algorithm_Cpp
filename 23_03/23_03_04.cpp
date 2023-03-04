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

/* 1676번 팩토리얼 0의 개수
// 해설 : 수학, 직접 계산 x
// url : https://www.acmicpc.net/problem/1676

int N;

void input()
{
    cin >> N;
}

void solution()
{
    int answer = 0;

    for(int i = N ; i >= 5 ; i--)
    {
        if(i % 5 != 0)
            continue;
            
        if(i % 125 == 0)
            answer += 3;
        else if(i % 25 == 0)
            answer += 2;
        else if(i % 5 == 0)
            answer += 1;
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