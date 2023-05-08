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

/* 1946번 신입 사원
// 해설 : 정렬, 문제 이해에 다소 오래걸림.
// url : https://www.acmicpc.net/problem/1946

int N;
vector<pair<int, int>> v;

void solution()
{
    sort(v.begin(), v.end());

    int answer = 1;
    int interview_rank = v[0].second;

    for(int i = 1 ; i < N ; i++)
    {
        if(v[i].second < interview_rank)
        {
            answer++;
            interview_rank = v[i].second;
        }
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
        v.assign(N, {0, 0});

        for(int i = 0 ; i < N ; i++)
        {
            cin >> v[i].first >> v[i].second;
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