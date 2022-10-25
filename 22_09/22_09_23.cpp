#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 2038번 골롱 수열
// 해설 : 골롱 수열의 점화식 - f(1) = 1, f(n) = 1 + f(n - f(f(n - 1))).
// 인덱스 값과 그에 해당하는 값이 뭔지 알아야함.
// 참고 : https://blog.naver.com/kks227/220795165570

int N;

vector<int> arr;

void solution()
{
    arr[1] = 1;

    int idx = 1;
    int fx = 1;

    while(fx < N)
    {
        idx++;
        arr[idx] = 1 + arr[idx - arr[arr[idx - 1]]];
        fx += arr[idx]; 
    }

    cout << idx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    arr.assign(N, 0);
    solution();
}
*/

/* 2230번 수 고르기
// 해설 : lo hi의 증가 조건, 두 값의 차이가 M보다 작은가?
// hi가 끝에 도달했는가, 그렇지않다면 lo와 hi가 같은가?, 그렇지 않다면 lo 증가
// 정렬하는게 제일 중요

int N,M;
vector<int> A;

void solution()
{
    int dis = 0, ans = 1e18;

    int lo = 1, hi = 1;
    
    while(1)
    {
        if(dis < M && hi < N)
            dis = abs(A[lo] - A[hi++]);
        else if(lo == N)
            break;
        else
            dis = abs(A[lo++] - A[hi]);

        if(dis >= M)
        {
            ans = min(dis, ans);
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    A.assign(N + 1, 0);

    for(int i = 1 ; i <= N ; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    solution();
}
*/