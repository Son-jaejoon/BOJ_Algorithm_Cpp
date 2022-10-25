#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 17069번 파이프 옮기기 2
// 해설 : DP로만 해결할 수 있었던 문제. 좌 우 대각에 저장 후 출력

int N;
long long ans;
vector<vector<int>> arr;
long long DP[34][34][3];

void solution()
{
    DP[1][2][0] = 1;

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= N ; j++)
        {
            if(arr[i][j] == 1)
                continue;
            if(i == 1 && j == 1)
                continue;

            if(j + 1 <= N)
            {
                if(arr[i][j + 1] == 0) // 오른쪽
                    DP[i][j + 1][0] = DP[i][j][0] + DP[i][j][2]; // 오른쪽 + 대각선
            }        
            
            if(i + 1 <= N)
            {
                if(arr[i + 1][j] == 0) // 아래
                    DP[i + 1][j][1] = DP[i][j][1] + DP[i][j][2]; // 아래 + 대각선
            }

            if(i + 1 <= N && j + 1 <= N)
                if(arr[i + 1][j] == 0 && arr[i][j + 1] == 0 && arr[i + 1][j + 1] == 0)
                    DP[i + 1][j + 1][2] = DP[i][j][0] + DP[i][j][1] + DP[i][j][2]; // 오른쪽 + 아래  + 대각선
        }
    }

    ans =  DP[N][N][0] + DP[N][N][1] + DP[N][N][2];
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    arr.assign(N + 1, vector<int>(N + 1, 0));
    
    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= N ; j++)
        {
            cin >> arr[i][j];
        }
    }
    solution();
}
*/