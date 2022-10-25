#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>

/* 2290번 LCD Test
//해설: 그냥 안했음 에바임

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int s;
	string n;
	cin >> s >> n;

	for (int h = 0; h < 2 * s + 3; h++)
	{
		for (int i = 0; i < n.length(); i++)
		{
			//제일 위 줄
			if (h == 0)
			{
				if (n[i] == '0' || n[i] == '2' || n[i] == '3' || n[i] == '5' || n[i] == '6' || n[i] == '7' || n[i] == '8' || n[i] == '9')
				{
					cout << " ";
					for (int j = 0; j < s; j++)
						cout << "-";
					cout << " ";
				}
				else
				{
					for (int j = 0; j < s + 2; j++)
						cout << " ";
				}
			}
			//몸통 위쪽
			else if (1 <= h && h <= s)
			{
				if (n[i] == '0' || n[i] == '4' || n[i] == '8' || n[i] == '9')
				{
					cout << "|";
					for (int j = 0; j < s; j++)
						cout << " ";
					cout << "|";
				}
				else if (n[i] == '1' || n[i] == '2' || n[i] == '3' || n[i] == '7')
				{
					for (int j = 0; j < s + 1; j++)
						cout << " ";
					cout << "|";
				}
				else
				{
					cout << "|";
					for (int j = 0; j < s + 1; j++)
						cout << " ";
				}
			}
			//가운데
			else if (h == s + 1)
			{
				if (n[i] == '0' || n[i] == '1' || n[i] == '7')
				{
					for (int j = 0; j < s + 2; j++)
						cout << " ";
				}
				else
				{
					cout << " ";
					for (int j = 0; j < s; j++)
						cout << "-";
					cout << " ";
				}
			}
			//몸통 아래쪽
			else if (s + 2 <= h && h <= 2 * s + 1)
			{
				if (n[i] == '0' || n[i] == '6' || n[i] == '8')
				{
					cout << "|";
					for (int j = 0; j < s; j++)
						cout << " ";
					cout << "|";
				}
				else if (n[i] == '1' || n[i] == '3' || n[i] == '4' || n[i] == '5' || n[i] == '7' || n[i] == '9')
				{
					for (int j = 0; j < s + 1; j++)
						cout << " ";
					cout << "|";
				}
				else
				{
					cout << "|";
					for (int j = 0; j < s + 1; j++)
						cout << " ";
				}
			}
			//맨 아랫줄
			else
			{
				if (n[i] == '1' || n[i] == '4' || n[i] == '7')
				{
					for (int j = 0; j < s + 2; j++)
						cout << " ";
				}
				else
				{
					cout << " ";
					for (int j = 0; j < s; j++)
						cout << "-";
					cout << " ";
				}
			}
			cout << " ";
		}
		cout << "\n";
	}
	return 0;
}
*/

/*16935번 배열 돌리기 3
//해설 : 그냥 돌리면 됨

int N, M, R;
std::queue<int> q;
int arr[101][101];
int temp[101][101];

void arr_change(int num)
{
    if (num == 1)
    {
        for (int i = 0; i < N / 2; i++)
        {
            for (int j = 0; j < M; j++)
            {
                std::swap(arr[i][j], arr[N - i - 1][j]);
            }
        }
        return;
    }

    if (num == 2)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M / 2; j++)
            {
                std::swap(arr[i][j], arr[i][M - j - 1]);
            }
        }
        return;
    }

    if (num == 3)
    {
        std::memset(temp, 0, sizeof(temp));

        int h = N;

        std::swap(N, M);

        for (int i = 0; i < N; ++i)
            for (int j = 0; j < M; ++j)
                temp[i][j] = arr[h - 1 - j][i];

        for (int i = 0; i < N; ++i)
            for (int j = 0; j < M; ++j)
                arr[i][j] = temp[i][j];
        return;
    }

    if (num == 4)
    {
        std::memset(temp, 0, sizeof(temp));

        int w = M;

        std::swap(N, M);

        for (int i = 0; i < N; ++i)
            for (int j = 0; j < M; ++j)
                temp[i][j] = arr[j][w-1-i];

        for (int i = 0; i < N; ++i)
            for (int j = 0; j < M; ++j)
                arr[i][j] = temp[i][j];
        return;
    }

    if (num == 5)
    {

        for (int i = 0; i < N / 2; i++)
        {
            for (int j = 0; j < M / 2; j++)
            {
                std::swap(arr[i][j], arr[i][M / 2 + M % 2 + j]);
            }
        }

        for (int i = 0; i < N / 2; i++)
        {
            for (int j = 0; j < M / 2; j++)
            {
                std::swap(arr[i][j], arr[N / 2 + N % 2 + i][M / 2 + M % 2 + j]);
            }
        }

        for (int i = 0; i < N / 2; i++)
        {
            for (int j = 0; j < M / 2; j++)
            {
                std::swap(arr[i][j], arr[N / 2 + N % 2 + i][j]);
            }
        }

        return;
    }

    if (num == 6)
    {
        for (int i = 0; i < N / 2; i++)
        {
            for (int j = 0; j < M / 2; j++)
            {
                std::swap(arr[i][j], arr[N / 2 + N % 2 + i][j]);
            }
        }

        for (int i = 0; i < N / 2; i++)
        {
            for (int j = 0; j < M / 2; j++)
            {
                std::swap(arr[i][j], arr[N / 2 + N % 2 + i][M / 2 + M % 2 + j]);
            }
        }

        for (int i = 0; i < N / 2; i++)
        {
            for (int j = 0; j < M / 2; j++)
            {
                std::swap(arr[i][j], arr[i][M / 2 + M % 2 + j]);
            }
        }

        return;
    }
}

void arr_print(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    scanf("%d %d %d", &N, &M, &R);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < R; i++)
    {
        int num;
        scanf("%d", &num);
        q.emplace(num);
    }

    while (!q.empty())
    {
        arr_change(q.front());
        q.pop();
    }

    arr_print(N, M);
}
*/

/* 14226번 이모티콘
//해설 : 숨박꼭질과 비슷한 원리로 make pair 을 2개로 써 3개의 인자를 통해 값을 반환받는 방식으로 해결함.
int S;
std::queue<std::pair<std::pair<int, int>, int>> q;
bool visit[2010][2010];

int dfs()
{
    int cnt, clip, ans;
    while (!q.empty())
    {
        cnt = q.front().first.first;
        clip = q.front().first.second;
        ans = q.front().second;
        q.pop();

        if (cnt == S)
        {
            return ans;
        }

        int x_1 = cnt;
        int x_2 = cnt + clip;
        int x_3 = cnt - 1;

        if(!visit[x_1][cnt])
        {
            q.emplace(std::make_pair(std::make_pair(x_1, cnt), ans + 1));
            visit[x_1][cnt] = true;
        }
        if(x_2 <= S+1 && !visit[x_2][clip])
        {
            q.emplace(std::make_pair(std::make_pair(x_2, clip), ans + 1));
            visit[x_2][clip] = true;
        }
        if(x_3 > 0 && !visit[x_3][clip])
        {
            q.emplace(std::make_pair(std::make_pair(x_3, clip), ans + 1));
            visit[x_3][clip] = true;
        }
    }
    return 0;
}

int main()
{
    scanf("%d", &S);
    //복사 및 저장
    // 클립보드 붙여넣기
    // 1개 삭제

    q.emplace(std::make_pair(std::make_pair(1, 0), 0));
    visit[1][0] = true;

    int ans = dfs();
    printf("%d\n", ans);
}
*/