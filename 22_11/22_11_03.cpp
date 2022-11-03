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

/* 12850번 본대 산책2
// 해설 : 행렬을 통한 DP 계산, 행렬에 대한 이해도가 낮다보니 생각하기 어려웠다.
// 참고 : https://chinpa.tistory.com/149

long long MOD = 1000000007;
long long D;

vector<vector<long long>> v = 
{
    {0, 1, 1, 0, 0, 0, 0, 0},
    {1, 0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 0, 1},
    {0, 0, 0, 1, 1, 0, 1, 0},
    {0, 0, 0, 0, 0, 1, 0, 1},
    {0, 0, 0, 0, 1, 0, 1, 0}
};

vector<vector<long long>> multiple(const vector<vector<long long>>& A, const vector<vector<long long>>& B)
{
    vector<vector<long long>> ret(8, vector<long long>(8));

    for(int i = 0 ; i < 8 ; i++)
    {
        for(int j = 0 ; j < 8 ; j++)
        {
            long long elem = 0;

            for(int k = 0 ; k < 8 ; k++)
            {
                elem += (A[i][k] * B[k][j]);
                elem %= MOD;
            }

            ret[i][j] = elem%MOD;
        }
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> D;

    vector<vector<long long>> ans(8, vector<long long>(8));

    for (int i = 0; i < 8; i++)
    {
        ans[i][i] = 1;
    }

    vector<vector<long long>> factor = v;

    while(D)
    {
        if(D&1)
        {
            ans = multiple(ans, factor);
            D -= 1;
        }

        factor = multiple(factor, factor);
        D /= 2;
    }

    cout << ans[0][0] << endl;
}
*/