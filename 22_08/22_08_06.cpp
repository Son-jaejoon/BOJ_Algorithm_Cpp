#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#define endl "\n"

using namespace std;

/* 10026번 적록색약
// 해설 : 일반 판단 후 적록은 같은 색상으로 바꾸고 다시 판단

int n, cnt = 0;
char photo[100][100];
bool isVisited[100][100] = { false };

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

void dfs(int x, int y) {
	isVisited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
		if (!isVisited[nx][ny] && photo[x][y] == photo[nx][ny]) {
			dfs(nx, ny);
		}
	}
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", photo[i]);
	}

	//적록색약이 아닌 사람
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!isVisited[i][j]) {
				dfs( i, j);
				cnt++;
			}
		}
	}
	printf("%d ", cnt);

	//적록색약인 사람
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (photo[i][j] == 'G') photo[i][j] = 'R';
			else photo[i][j] = photo[i][j];
		}
	}
	memset(isVisited, false, sizeof(isVisited));

	cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!isVisited[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	printf("%d", cnt);

	return 0;
}
*/

/* 14395번 4연산
// 해설 : 그냥 저장하면됨 근데 메모리가 너무 큼
// 참고 : https://yabmoons.tistory.com/72

using namespace std;
vector<char> load;
vector<char> save(100000);
vector<bool> visit(100000);
vector<int> graph(100000);
int s, t;

int plus_my(int num)
{
    num = num + num;
    return num;
}

int minus_my(int num)
{
    num = num - num;
    return num;
}

int multi(int num)
{
    num = num * num;
    return num;
}

int divide(int num)
{
    num = num / num;
    return num;
}

void bfs(int start, int end)
{
    queue<pair<int, int>> q;
    q.emplace(make_pair(start, end));
    visit[start] = true;

    while(!q.empty())
    {
        int change = q.front().first;
        int goal = q.front().second;
        
        q.pop();

        if(change == goal)
        {
            int idx = change;

            while(idx != start)
            {
                load.emplace_back(save[idx]);
                idx = graph[idx];
            }
            return;
        }

        int x_1 = plus_my(change);
        int x_2 = minus_my(change);
        int x_3 = multi(change);
        int x_4 = divide(change);

        if(!visit[x_3] && x_3 <= goal + goal)
        {
            visit[x_3] = true;
            q.emplace(make_pair(x_3, goal));
            graph[x_3] = change;
            save[x_3] = '*';
        }

        if(!visit[x_1] && x_1 <= goal)
        {
            visit[x_1] = true;
            q.emplace(make_pair(x_1, goal));
            graph[x_1] = change;
            save[x_1] = '+';
        }

        if(!visit[x_2] && x_2 <= goal)
        {
            visit[x_2] = true;
            q.emplace(make_pair(x_2, goal));
            graph[x_2] = change;
            save[x_2] = '-';
        }

        if(!visit[x_4] && x_4 <= goal + change)
        {
            visit[x_4] = true;
            q.emplace(make_pair(x_4, goal));
            graph[x_4] = change;
            save[x_4] = '/';
        }
    }
    cout << -1;
    exit(0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>s>>t;

    if(s == t)
    {
        cout << 0;
        exit(0);
    }
    else
    {
        bfs(s, t);
        for(int i = load.size() - 1 ; i >= 0 ; i--)
        {
            cout << load[i];
        }
    }
}
*/