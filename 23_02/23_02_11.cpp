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

/* 12000번 Circular Barn (Bronze)
// 해설 : 브루트포스
// url : https://www.acmicpc.net/problem/12000

int N;
vector<int> room;

void input()
{
    cin >> N;
    room.assign(N + 1, 0);

    for(int i = 1 ; i <= N ; i++)
    {
        cin >> room[i];
    }
}

void solution()
{
    int answer = 987654321;

    for(int i = 1 ; i <= N ; i++)
    {
        int result = 0;
        for(int j = 1 ; j <= N ; j++)
        {
            if(j >= i)
                result += (j - i) * room[j];
            else
                result += (j + N - i) * room[j];
        }

        answer = min(answer, result);
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