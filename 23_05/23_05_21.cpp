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

/* 11497번 통나무 건너뛰기
// 해설 : 구현, 그리디, 가운대를 중심으로 좌우를 놓으면 된다.(그러면 2칸씩의 차이가 된다.)
// url : https://www.acmicpc.net/problem/11497

int N;
vector<int> jump;

void solution()
{
    sort(jump.begin(), jump.end());

    int answer = 0;
    answer = max(answer, jump[1] - jump[0]);
    answer = max(answer, jump[N - 1] - jump[N - 2]);

    for(int i = 0 ; i < N - 2 ; i++)
    {
        answer = max(answer, jump[i + 2] - jump[i]);
    }

    cout << answer << endl;
}

void input()
{
    int T;
    cin >> T;

    while(T--)
    {
        cin >> N;
        jump.assign(N, 0);
        
        for(int i = 0 ; i < N ; i++)
        {
            cin >> jump[i];
        }

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