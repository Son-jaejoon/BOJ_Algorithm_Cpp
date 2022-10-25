#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <vector>
#include <queue>
#include <utility>

/* 1963번 소수 경로
// 해설 : 소수 구하는 법 + 자릿수 바꾸기 + bfs

std::vector<std::pair<int, int>> v;
bool visited[9999];

int change(int num, int index, int digit){
    std::string s = std::to_string(num);
    s[index] = digit + '0';
    return stoi(s);
}

void bfs(int a, int b)
{
	std::queue<std::pair<std::pair<int, int>, int>> q;
	q.emplace(std::make_pair(std::make_pair(a, b), 0));
	visited[a] = true;

	while(!q.empty())
	{
		int x = q.front().first.first;
		int goal = q.front().first.second;
		int cnt = q.front().second;
		q.pop();

		if(x == goal)
		{
			printf("%d\n", cnt);
			return;
		}

		for(int i = 0 ; i < 4 ; i++)
		{
			if(i == 0)
			{
				for(int j = 1 ; j <= 9 ; j++)
				{
					int nx = change(x, i, j);
					bool ok = true;

					if(!visited[nx])
					{
						visited[nx] = true;

						for(int k = 2 ; k*k <= nx ; k++)
						{
							if(nx % k == 0)
							{
								ok = false;
								break;
							}
						}

						if(ok)
						{
							q.emplace(std::make_pair(std::make_pair(nx, goal), cnt + 1));
						}
					}
				}
			}
			else
			{
				for(int j = 0 ; j <= 9 ; j++)
				{
					int nx = change(x, i, j);
					bool ok = true;

					if(!visited[nx])
					{
						visited[nx] = true;

						for(int k = 2 ; k*k <= nx ; k++)
						{
							if(nx % k == 0)
							{
								ok = false;
								break;
							}
						}

						if(ok)
						{
							q.emplace(std::make_pair(std::make_pair(nx, goal), cnt + 1));
						}
					}
				}
			}
		}
	}

	printf("Impossible\n");
	return;	
}

int main()
{
	int test;
	scanf("%d", &test);

	for(int i = 0 ; i < test ; i++)
	{
		int one;
		int two;

		scanf("%d %d", &one, &two);
		v.emplace_back(std::make_pair(one, two));
	}

	for(int i = 0 ; i < test ; i++)
	{
		std::memset(visited, false, sizeof(visited));
		bfs(v[i].first, v[i].second);
	}
}
*/

/*16236번 아기상어
// 해설 : bfs를 while로 반복해야한다.
// 1. 아기상어가 먹을 수 있는 물고기 좌표 저장 2. 먹은 물고기 양이 아기상어 크기 보다 크다면 물고기 갯수 줄이고 크기 증가
// 3. board에 거리 저장 3. 횟수 체크 4. 더함 5. 다시 1번
// 참고 : https://blog.naver.com/PostView.nhn?blogId=fbfbf1&logNo=222473456076

using namespace std;

int board[22][22];
int check[22][22];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int second = 0, babySize = 2, N, x, y;
int eatFish = 0;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 9)
			{
				x = i;
				y = j;
			}
		}
	}

	while (1)
	{
		for (int i = 0; i <= N; i++)
			for (int j = 0; j <= N; j++)
				check[i][j] = -1;
		check[x][y] = 0;
		board[x][y] = 0;
		queue<pair<int, int>> q;
		vector<pair<int, int>> fish;
		if (eatFish >= babySize)
		{
			eatFish -= babySize;
			babySize++;
		}
		q.push({x, y});
		while (!q.empty())
		{
			auto cur = q.front();
			q.pop();
			for (int i = 0; i < 4; i++)
			{
				int nx = cur.first + dx[i];
				int ny = cur.second + dy[i];
				if (nx < 0 || nx >= N || ny < 0 || ny >= N)
					continue;

				if (check[nx][ny] != -1)
					continue;
				if (board[nx][ny] > babySize)
					continue;

				else if (board[nx][ny] == babySize || board[nx][ny] == 0)
				{
					check[nx][ny] = check[cur.first][cur.second] + 1;
					q.push({nx, ny});
				}
				else if (board[nx][ny] < babySize && board[nx][ny] >= 1)
				{
					check[nx][ny] = check[cur.first][cur.second] + 1;
					fish.push_back({nx, ny});
					q.push({nx, ny});
				}
			}
		}
		if (fish.size() == 0)
		{
			cout << second << "\n";
			return 0;
		}
		else if (fish.size() == 1)
		{
			x = fish[0].first;
			y = fish[0].second;
			board[x][y] = 0;
			eatFish++;
			second += check[x][y];
		}
		else
		{
			int minDist = 1e5;
			for (auto &x : fish)
			{
				minDist = min(minDist, check[x.first][x.second]);
			}
			int minCnt = 0;
			vector<pair<int, int>> minFish;
			for (auto &x : fish)
			{
				if (minDist == check[x.first][x.second])
				{
					minFish.push_back({x.first, x.second});
				}
			}
			if (minFish.size() == 1)
			{
				x = minFish[0].first;
				y = minFish[0].second;
				board[x][y] = 0;
				second += check[x][y];
				eatFish++;
			}
			else
			{
				sort(minFish.begin(), minFish.end());
				x = minFish[0].first;
				y = minFish[0].second;
				second += check[x][y];
				board[x][y] = 0;
				eatFish++;
			}
		}
	}
}
*/

/* 16954번 움직이는 미로 탈출
// 해설 : 총 8칸이기때문에 8번 이후엔 무조건 통과

#include <tuple>
using namespace std;

string a[8];
const int dy[9] = { -1,0,1,1,1,0,-1,-1,0 };
const int dx[9] = { 1,1,1,0,-1,-1,-1,0,0 };
bool check[9][8][8];

int main()
{
	for (int i = 0; i < 8; ++i)
		cin >> a[i];

	queue<tuple<int,int,int>> q;
	q.push({ 0,7,0 });
	check[0][7][0] = true;

	int ans = 0;
	while (!q.empty()) {
		int t,y,x;
		tie(t,y,x) = q.front();
		q.pop();

		if (y == 0 && x == 7) ans = 1;


		for (int i = 0; i < 9; ++i) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			int nt = min(t + 1, 8);

			if (!(0 <= ny && ny < 8 && 0 <= nx && nx < 8)) continue;
			// 벽이라서 못갈때
			if (ny - t >= 0 && a[ny - t][nx] == '#') continue;
			// 내려올 벽이 닿았을때
			if (ny - t - 1 >= 0 && a[ny - t - 1][nx] == '#') continue;

			if (!check[nt][ny][nx]) {
				check[nt][ny][nx] = true;
				q.push({ nt,ny,nx,});
			}

		}
	}
	if (ans) cout << 1 << "\n";
	else cout << 0 << "\n";
	return 0;
}
*/