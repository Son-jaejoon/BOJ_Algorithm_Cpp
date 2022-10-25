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

/* 9466번 텀 프로젝트
// 해설: DFS으로 풀었지만 시간초과..
// 참고 : https://wooono.tistory.com/409

int N, cnt;
vector<int> arr;
vector<bool> ans;
bool chk[100001];

void find_friend(int first, int curr)
{
    if(first == curr)
    {
        for(int i = arr[first] ; i != first ; i = arr[i])
        {
            cnt++;
            ans[i] = true;
        }
        cnt++;
        ans[first] = true;

        return;
    }

    if(chk[curr])
        return;
    
    chk[curr] = true;
    int next = arr[curr];

    find_friend(first, next);
}

void solution(int i)
{
    memset(chk, false, sizeof(chk));

    chk[i] = true;
    find_friend(i, arr[i]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;

    cin >> T;

    while (T--)
    {
        arr.clear();
        ans.clear();

        cin >> N;

        cnt = 0;
        arr.assign(N + 1, 0);
        ans.assign(N + 1, false);

        for (int i = 1; i <= N; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i <= N; i++)
        {
            if (ans[i])
                continue;

            solution(i);
        }
        cout << N - cnt << endl;
    }
}
*/

/* 7579번 앱
// 해설 : DP, 배낭문제, DFS로 풀려했으나 실패..
// 참고 : https://cocoon1787.tistory.com/319

int N, M;
int ans = 987654321;
vector<int> cost;
vector<int> re_start;

void solution(int idx, long long sum, int re_cost)
{
    if(sum >= M)
    {
        ans = min(ans, re_cost);
        return;
    }

    for(int i = idx ; i < N ; i++)
    {
        int memory = cost[i];

        if(re_cost + re_start[i] > ans)
            continue;

        sum += memory;
        re_cost += re_start[i];

        solution(i + 1, sum, re_cost);
        sum -= memory;
        re_cost -= re_start[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    cost.assign(N, 0);
    re_start.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> cost[i];
    }

    for(int i = 0 ; i < N ; i++)
    {
        cin >> re_start[i];
    }

    solution(0, 0, 0);

    cout << ans;
}
*/