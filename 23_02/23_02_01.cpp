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

/* 10159번 저울
// 해설 : 그래프, 플로이드 워셜
// url : https://www.acmicpc.net/problem/10159

int N, M;
vector<vector<int>> v;

void input()
{
    cin >> N >> M;

    v.assign(N + 1, vector<int>(N + 1, 0));

    for(int i = 0 ; i < M ; i++)
    {
        int a, b;
        cin >> a >> b;

        v[a][b] = 1;
    }
}

void floyd_warshall()
{
    for(int k = 1 ; k <= N ; k++)
    {
        for(int i = 1 ; i <= N ; i++)
        {
            for(int j = 1 ; j <= N ; j++)
            {
                if(v[i][k] == 1 && v[k][j] == 1)
                    v[i][j] = 1;
            }
        }
    }
}

void solution()
{
    floyd_warshall();

    for(int i = 1 ; i <= N ; i++)
    {
        int cnt = 0;

        for(int j = 1 ; j <= N ; j++)
        {
            if(i == j)
                continue;
            
            if(v[i][j] == 1 || v[j][i] == 1)
                continue;
            
            cnt++;
        }

        cout << cnt << endl;
    }
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