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

/* 14465번 소가 길을 건너간 이유 5
// 해설 : 슬라이딩 윈도우, 원형 길이라 해서 앞3, 뒤3 인줄
// url : https://www.acmicpc.net/problem/14465

int N, K, B;
vector<bool> v;

void input()
{
    cin >> N >> K >> B;
    v.assign(N + 1, false);

    for(int i = 0 ; i < B ; i++)
    {
        int idx;
        cin >> idx;

        v[idx] = true;
    }
}

void solution()
{
    int answer, cnt = 0;

    for(int i = 1 ; i <= K ; i++)
    {
        cnt += v[i];
    }
    
    answer = cnt;

    int left = 1;

    for(int right = K + 1; right <= N ; right++)
    {
        cnt += v[right];
        cnt -= v[left++];
        answer = min(answer, cnt);
    }

    cout << answer;
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