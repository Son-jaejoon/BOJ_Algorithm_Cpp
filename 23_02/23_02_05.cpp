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

/* 16967번 배열 복원하기
// 해설 : 구현, 중복 부분을 어떻게 해결하는가
// url : https://www.acmicpc.net/problem/16967

int H, W, X, Y;

vector<vector<int>> B;

void input()
{
    cin >> H >> W >> X >> Y;

    B.assign(H + X, vector<int>(W + Y, 0));

    for(int i = 0 ; i < H + X ; i++)
    {
        for(int j = 0 ; j < W + Y ; j++)
        {
            cin >> B[i][j];
        }
    }
}

void solution()
{
    for(int i = X ; i < H ; i++)
    {
        for(int j = Y ; j < W ; j++)
        {
            B[i][j] -= B[i - X][j - Y];
        }
    }

    for(int i = 0 ; i < H ; i++)
    {
        for(int j = 0 ; j < W ; j++)
        {
            cout << B[i][j] << " ";
        }

        cout << endl;
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