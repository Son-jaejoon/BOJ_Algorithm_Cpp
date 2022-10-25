#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 2098번 외판원 순회
// 해설 : 비트필드를 통한 visited 계산, DP, dfs
// 참고 : https://yabmoons.tistory.com/m/358, https://gksid102.tistory.com/m/90

int N, ans = 987654321;
int city[16][16];
bool visited[16];

void dfs_travel(bool visited[], int first, int curr, int cnt, int cost)
{
    if(cnt == N)
    {
        if(city[curr][first] == 0)
            return;
        else
            cost += city[curr][first];
        
        ans = min(ans, cost);
        return;
    }

    for(int i = 0 ; i < N ; i++)
    {
        if(visited[i])
            continue;
        
        if(city[curr][i] == 0)
            continue;
        
        if(ans < cost + city[curr][i])
            continue;
        
        visited[i] = true;
        dfs_travel(visited, first, i, cnt + 1, cost + city[curr][i]);
        visited[i] = false;
    }
}

void solution()
{
    visited[0] = true;
    dfs_travel(visited, 0, 0, 1, 0);

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cin >> city[i][j];
        }
    }
    
    solution();
}
*/