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

/* 13458번 시험 감독
// 해설 : 구현
// url : https://www.acmicpc.net/problem/13458

int N, B, C;
vector<int> room;

void input()
{
    cin >> N;
    room.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> room[i];
    }

    cin >> B >> C;
}

void solution()
{
    long long answer = 0;

    for(int i = 0 ; i < N ; i++)
    {
        room[i] -= B;
        answer++;

        if(room[i] > 0)
        {
            answer += (room[i] / C);

            if(room[i] % C)
                answer++;
        }
    }
    
    cout << answer;
}

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();
}
*/