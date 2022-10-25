#include <iostream>
#include <algorithm>
using namespace std;

 /* NM°ú K (1)
#define MAX 10
int N, M, K;
int max_until_now= -40000;
int board[MAX][MAX];
int visited[MAX][MAX] = { 0, };

void backtracking(int cnt, int sum)
{
	if (cnt == K)
	{
		max_until_now = max(max_until_now, sum);
		return;
	}
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
		{
			if (!visited[i][j])
			{
				visited[i][j]++;
				if (i - 1 > -1) visited[i - 1][j]++; // ¿ŞÂÊÄ­
				if (i + 1 < N) visited[i + 1][j]++; // ¿À¸¥ÂÊÄ­
				if (j - 1 > -1) visited[i][j - 1]++; // À§ÂÊÄ­
				if (j + 1 < M) visited[i][j + 1]++; // ¾Æ·¡ÂÊÄ­

				backtracking(cnt + 1, sum + board[i][j]);

				visited[i][j] = false;
				if (i - 1 > -1) visited[i - 1][j]--; // ¿ŞÂÊÄ­
				if (i + 1 < N) visited[i + 1][j]--; // ¿À¸¥ÂÊÄ­
				if (j - 1 > -1) visited[i][j - 1]--; // À§ÂÊÄ­
				if (j + 1 < M) visited[i][j + 1]--; // ¾Æ·¡ÂÊÄ­
			}
		}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M >> K;
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			cin >> board[i][j];

	backtracking(0, 0);

	cout << max_until_now;

	return 0;
}
*/