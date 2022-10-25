#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#define endl "\n"

using namespace std;

/* 12869번 뮤탈리스크
// 해설 : 1. 체력이 해당된게 있나 메모라이즈 2. scv가 터질때 다시 리턴해서 넣는다. 3. 6개의 경우의 수로 넣는다.
// 참고 : https://transferhwang.tistory.com/462

int N;
vector<int> scv;
int dp[61][61][61];

int attack(int x, int y, int z)
{
    if(x < 0) return attack(0, y, z);
    if(y < 0) return attack(x, 0, z);
    if(z < 0) return attack(x, y, 0);

    if(dp[x][y][z] != -1)
        return dp[x][y][z]; // 메모라이즈
    
    if(x == 0 && y == 0 && z == 0)
        return 0;
    
    dp[x][y][z] = 987654321;
    dp[x][y][z] = min(dp[x][y][z], attack(x - 9, y - 3, z - 1) + 1);
    dp[x][y][z] = min(dp[x][y][z], attack(x - 9, y - 1, z - 3) + 1);
    dp[x][y][z] = min(dp[x][y][z], attack(x - 3, y - 1, z - 9) + 1);
    dp[x][y][z] = min(dp[x][y][z], attack(x - 1, y - 3, z - 9) + 1);
    dp[x][y][z] = min(dp[x][y][z], attack(x - 3, y - 9, z - 1) + 1);
    dp[x][y][z] = min(dp[x][y][z], attack(x - 1, y - 9, z - 3) + 1);

    return dp[x][y][z];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    scv.assign(3, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> scv[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << attack(scv[0], scv[1], scv[2]);
}
*/

/* 2294번 동전 2
// 해설 : 작은 값부터 세기때문에 갯수를  +1 하는 것을 알아채는게 핵심
// 참고 : https://jaemin8852.tistory.com/163

int n, k;
vector<int> v;
vector<int> dp;

void coin()
{

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = v[i] ; j <= k ; j++)
        {
            dp[j] = min(dp[j], dp[j - v[i]] + 1);
        }
    }

    if(dp[k] == 10001)
        cout << -1;
    else
        cout << dp[k];
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    v.assign(n, -1);
    dp.assign(k + 1, 10001);
    dp[0] = 0;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }

    coin();
}
*/

/* 2293번 동전 1
// 해설 : 동전의 가치가 가격보다 작으면 경우의 수를 1씩 추가함

int n, k;
vector<int> v;
vector<int> dp;

void coin()
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 1 ; j <= k ; j++)
        {
            if(j - v[i] >= 0)
            {
                dp[j] = dp[j] + dp[j - v[i]];
            }
        }
    }

    cout << dp[k];
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    v.assign(n, 0);
    dp.assign(k + 1, 0);
    dp[0] = 1;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }

    coin();
}
*/