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

/* 1208번 부분수열의 합 2
// 해설 : map의 이용법, meet in the middle 알고리즘
// 참고 : https://justicehui.github.io/ps/2019/03/24/BOJ1208/

int N, S, mid;
long long ans;
vector<int> arr;
map<int, int> mp;

void left(int idx, int sum)
{
    if(idx == mid)
    {
        mp[sum]++;
        return;
    }

    left(idx + 1, sum);
    left(idx + 1, sum + arr[idx]);
}

void right(int idx, int sum)
{
    if(idx == N)
    {
        ans += mp[S - sum];
        return;
    }

    right(idx + 1, sum);
    right(idx + 1, sum + arr[idx]);
}

void solution()
{
    left(0, 0);
    right(mid, 0);

    if(S == 0)
        ans--;
    
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> S;

    arr.assign(N, 0);
    mid = N/2;

    for(int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }

    solution();
}
*/