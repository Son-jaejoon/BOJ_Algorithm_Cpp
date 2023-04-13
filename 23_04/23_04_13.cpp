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

/* 1058번 친구
// 해설 : 플로이드 워셜, 문제를 이해하는데 좀 걸렸다. 2-친구가 무슨 소린가 했음..
// url : https://www.acmicpc.net/problem/1058

int N;
vector<vector<int>> dist;

void input()
{
    cin >> N;
    dist.assign(N, vector<int>(N, 987654321));

    for (int i = 0; i < N; i++)
    {
        string st;
        cin >> st;

        for (int j = 0 ; j < st.size(); j++)
        {
            if (st[j] == 'Y')
                dist[i][j] = 1;
        }
    }
}

bool cmp(int num)
{
    return num <= 2;
}

void solution()
{
    int answer = 0;

    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if(dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];            
            }
        }
    }

    for(int i = 0 ; i < N ; i++)
    {
        int cnt = count_if(dist[i].begin(), dist[i].end(), cmp);
        cnt -= 1;

        answer = max(answer, cnt);
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