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

/* 1141번 접두사
// 해설 : 정렬, 그리디
// url : https://www.acmicpc.net/problem/1141

int N;
vector<string> v;
vector<bool> chk;

void input()
{
    cin >> N;

    v.assign(N, "0");

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
}

void solution()
{
    int answer = 0;

    chk.assign(N, true);

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = i + 1 ; j < N ; j++)
        {
            if(v[j].substr(0, v[i].size()) == v[i])
            {
                chk[i] = false;
                break;
            }
        }
    }

    for(auto curr_bool : chk)
    {
        if(curr_bool)
            answer++;
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