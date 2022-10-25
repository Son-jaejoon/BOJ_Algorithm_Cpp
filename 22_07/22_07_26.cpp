#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>

/* 9663번 N-Queen
//해설 : 퀸의 위치를 보고 for문을 돌려 다시 리턴을 통해 하나씩 체크하면서 + 해주는 것이 목적
//해당 방법은 2차원 배열을 하지 않고 1차원 배열으로 값을 통해 행과 열을 지정한 것이 핵심
// 백트랙킹에 대해서 : https://chanhuiseok.github.io/posts/algo-23/

int board[15];
int n;
int count = 0;

int promising(int cdx) {

	// 같은 열이면 안되고, 대각선상에 있어서도 안 된다.
	for (int i = 0; i < cdx; i++) {
		if (board[cdx] == board[i] || cdx - i == abs(board[cdx] - board[i])) {
			return 0;
		}
	}
	return 1;
}

void dfs(int cdx)
{
    if(cdx == n)
    {
        count++;
        return;
    }

    for(int i = 0 ; i < n ; i++)
    {
        board[cdx] = i ;
        if(promising(cdx))
        {
            dfs(cdx + 1);
        }
    }
}

int main()
{
    scanf("%d", &n);

    dfs(0);
    printf("%d\n", count);
}
*/

/* 16197번 두 동전
//해설: bfs를 이용한 문제로 움직이는 점이 2개라고 생각하고 x,y좌표를 2배씩 갖는다 생각하면 된다.
//bfs 응용문제를 확인할 때 다시한번 보는 것이 중요.

char board[22][22];
int n, m, coin1_x, coin1_y, coin2_x, coin2_y;
std::string s;
int visited[22][22][22][22] = {0, };
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
bool check = false;

struct Coins
{
    int x1, y1, x2, y2, cnt;
};

bool isOut(int x, int y)
{
    if ((0 <= x && x < n) && (0 <= y && y < m))
        return true;

    return false;
}

int bfs()
{
    std::queue<Coins> q;
    q.push({coin1_x, coin1_y, coin2_x, coin2_y, 0});

    while (!q.empty())
    {
        Coins cur = q.front();
        visited[cur.x1][cur.y1][cur.x2][cur.y2] = 1;
        q.pop();

        if (cur.cnt > 10)
            break;

        for (int i = 0; i < 4; i++)
        {
            int nx1 = cur.x1 + dx[i];
            int ny1 = cur.y1 + dy[i];
            int nx2 = cur.x2 + dx[i];
            int ny2 = cur.y2 + dy[i];

            if ((isOut(nx1, ny1) && !isOut(nx2, ny2)) || (!isOut(nx1, ny1) && isOut(nx2, ny2)))
            {
                if (cur.cnt + 1 > 10)
                    return -1;

                return cur.cnt + 1;
            }

            if (!isOut(nx1, ny1) && !isOut(nx2, ny2))
                continue;

            if (board[nx1][ny1] == '#' && board[nx2][ny2] == '#')
                continue;

            if (board[nx1][ny1] == '#')
            {
                nx1 = cur.x1;
                ny1 = cur.y1;
            }
            else if (board[nx2][ny2] == '#')
            {
                nx2 = cur.x2;
                ny2 = cur.y2;
            }

            if (!visited[nx1][ny1][nx2][ny2])
            {
                q.push({nx1, ny1, nx2, ny2, cur.cnt + 1});
                visited[nx1][ny1][nx2][ny2] = 1;
            }
        }
    }
    return -1;
}

int main()
{
    scanf("%d %d", &n, &m);
    int num = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> s;

        for (int j = 0; j < s.size(); j++)
        {
            board[i][j] = s[j];

            if (board[i][j] == 'o')
            {
                board[i][j] = '.';

                if (num == 0)
                {
                    coin1_x = i;
                    coin1_y = j;
                    num++;
                }

                if (num == 1)
                {
                    coin2_x = i;
                    coin2_y = j;
                }
            }
        }
    }

    std::cout << bfs() << std::endl;
}
*/

/* 16927번 배열 돌리기 2
//해설 : 각 영역마다 (가로 길이 - 1)*2 + (세로 길이 - 1)*2를 하면 1바퀴
//참고 블로그 : https://conkjh032.tistory.com/278

int N, M, R;
int arr[301][301];

void rotate()
{
    int y1 = 0;
    int x1 = 0;

    int y2 = N-1;
    int x2 = 0;

    int y3 = N-1;
    int x3 = M-1;

    int y4 = 0;
    int x4 = M-1;

    while((y1 < y2) && (x1 < x4))
    {
        int move = R % ((y2-y1)*2 + (x4-x1)*2);

        while(move--){

            int tmp = arr[y1][x1];

            for(int j=x1; j<x4; j++)
            {
                arr[y1][j] = arr[y1][j+1];
            }

            for(int i=y4; i<y3; i++)
            {
                arr[i][x4] = arr[i+1][x4];
            }

            for(int j=x3; j>x2; j--)
            {
                arr[y3][j] = arr[y3][j-1];
            }

            for(int i=y2; i>y1; i--)
            {
                arr[i][x2] = arr[i-1][x2];
            }

            arr[y1+1][x1] = tmp;
        }

        y1 += 1;
        x1 += 1;

        y2 -= 1;
        x2 += 1;

        y3 -= 1;
        x3 -= 1;

        y4 += 1;
        x4 -= 1;
    }
}

int main()
{
    scanf("%d %d %d", &N, &M, &R);

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    rotate();

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
*/