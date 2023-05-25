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

/* 2502¹ø ¶± ¸Ô´Â È£¶ûÀÌ
// ÇØ¼³ : DP, ºê·çÆ®Æ÷½º
// url : https://www.acmicpc.net/problem/2502

int D, K;

void input()
{
    cin >> D >> K;
}

void solution()
{
    int A[D + 1], B[D + 1];
    A[1] = 1;
    A[2] = 0;
    B[1] = 0;
    B[2] = 1;

    for(int i = 3 ; i <= D ; i++)
    {
        A[i] = A[i - 1] + A[i - 2];
        B[i] = B[i - 1] + B[i - 2];
    }

    for(int i = 1 ; i <= K ; i++)
    {
        int remain_score = K - (A[D] * i);

        if(remain_score % B[D] == 0)
        {
            cout << i << endl << (remain_score / B[D]) << endl;
            return;
        }
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