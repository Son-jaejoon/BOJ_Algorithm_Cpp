#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#include <numeric>
#define endl "\n"

using namespace std;

/* 10830번 행렬 제곱
// 해설 : 분할 정복을 이용한 거듭제곱, 행렬 곱

int mod = 1000;

long long N, B;
long long A[5][5], tmp[5][5], answer[5][5];

void input()
{
    cin >> N >> B;
    
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
            cin >> A[i][j];

        answer[i][i] = 1;
    }
}

void matrix_multiple(long long X[5][5], long long Y[5][5])
{
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            tmp[i][j] = 0;

            for(int k = 0 ; k < N ; k++)
                tmp[i][j] += (X[i][k] * Y[k][j]);

            tmp[i][j] %= mod;
        }
    }

    for(int i = 0 ; i < N ; i++)
        for(int j = 0 ; j < N ; j++)
            X[i][j] = tmp[i][j];
}

void power()
{
    while(B > 0)
    {
        if(B & 1)
            matrix_multiple(answer, A);

        matrix_multiple(A, A);
        B >>= 1;
    }
}

void print_answer()
{
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
            cout << answer[i][j] << " ";
        
        cout << endl;
    }
}

void solution()
{
    power();
    print_answer();
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