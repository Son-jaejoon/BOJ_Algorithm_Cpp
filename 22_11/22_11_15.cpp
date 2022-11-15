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
#define endl "\n"

using namespace std;

/* 13549번 숨바꼭질 3 1번풀이
// 해설 : dfs, bfs

int N, K, ans;
vector<int> dp;

void dfs(int n, int k, int cost)
{
    if(n == k)
        return;

    if(n - 1 >= 0 && dp[n - 1] > dp[n] + 1)
    {
        dp[n - 1] = dp[n] + 1;
        dfs(n - 1, k, dp[n] + 1);
    }
    
    if(n + 1 <= k + 1 && dp[n + 1] > dp[n] + 1)
    {
        dp[n + 1] = dp[n] + 1;
        dfs(n + 1, k, dp[n] + 1);
    }

    if(2*n <= k + k/2 && dp[n*2] > dp[n])
    {
        dp[n*2] = dp[n];
        dfs(2*n, k, dp[n]);
    }        
}

void solution()
{
    dp.assign(max(N, K) + max(N, K)/2 + 1, 987654321);

    dp[N] = 0;
    dfs(N, K, 0);

    cout << dp[K];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    solution();
}
*/

/* 2번풀이
int n, k;

int p[100001]{};
int w = 0;

int min_w = 1000000;

void bfs() {
	queue<int> q;
	q.push(n); 
	p[n]=0;

	while (!q.empty()) {
		auto cur = q.front(); q.pop();

		if (cur == k) {
			min_w = p[cur];
			return;
		}
		if (cur * 2 < 100001  && p[cur * 2] > p[cur]) {
			p[cur * 2] = p[cur];
			q.push(cur * 2);
		}
		 
		if (cur + 1 < 100001 && p[cur + 1] > p[cur] + 1) {
			p[cur + 1] = p[cur] + 1;
			q.push(cur + 1);
		}

		if (cur - 1 >= 0 && p[cur - 1] > p[cur] + 1) {
			p[cur - 1] = p[cur] + 1;
			q.push(cur - 1);
		}

		
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> k;

	for (int i = 0; i < 100001; i++) {
		p[i] = 1000000;
	}

	bfs();

	cout << min_w << '\n';
	return 0;
}
*/