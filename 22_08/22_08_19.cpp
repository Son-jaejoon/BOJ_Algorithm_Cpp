#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#define endl "\n"

using namespace std;
/* 16968번 차량 번호판 1
// 해설 : 음 그냥 조합

string Inp;
 
void Input()
{
    cin >> Inp;
}

void Solution()
{
    int C = 26;
    int D = 10;
    int Answer = 1;
 
    for (int i = 0; i < Inp.length(); i++)
    {
        if (Inp[i] == 'c')
        {
            if (i - 1 >= 0)
            {
                if (Inp[i - 1] == 'c')
                {
                    Answer = Answer * (C - 1);
                }
                else
                {
                    Answer = Answer * C;
                }
            }
            else
            {
                Answer = Answer * C;
            }
        }
        else
        {
            if (i - 1 >= 0)
            {
                if (Inp[i - 1] == 'd')
                {
                    Answer = Answer * (D - 1);
                }
                else
                {
                    Answer = Answer * D;
                }
            }
            else
            {
                Answer = Answer * D;
            }
        }
    }
    cout << Answer << endl;
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}
*/

/* 17822번 원판돌리기
// 해설 : 입력 -> 돌리기 -> 중복체크(조건 일일이) -> 총합 
// 현재 이 코드는 M = 4 짜리 코드임
// 참고 : https://everydaymorning.tistory.com/2

bool isNum(int a)
{
    if (a > 0)
        return true;
    else
        return false;
}

struct target_x_d_k
{
    int x;
    int d;
    int k;
};

target_x_d_k create(int x, int d, int k)
{
    target_x_d_k x_d_k;
    x_d_k.x = x;
    x_d_k.d = d;
    x_d_k.k = k;
    return x_d_k;
}

int N, M, T;
vector<vector<int>> target;
vector<target_x_d_k> x_d_k;
vector<int> tmp_target;

int ans = 0;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void solution()
{
    int idx = 0;

    while (T--)
    {
        //시계, 반시계 돌리기
        for (int i = 1; i <= N; i++)
        {
            if (i % x_d_k[idx].x == 0)
            {
                tmp_target.assign(M + 1, 0);

                if (x_d_k[idx].d == 0)
                {
                    for (int j = 1; j <= M; j++)
                    {
                        int next_idx = (j + N - x_d_k[idx].k) % M;

                        if (next_idx == 0)
                        {
                            tmp_target[j] = target[i][M];
                        }
                        else
                        {
                            tmp_target[j] = target[i][next_idx];
                        }
                    }

                    for (int j = 1; j <= M; j++)
                        target[i][j] = tmp_target[j];
                }
                else
                {
                    for (int j = 1; j <= M; j++)
                    {
                        int next_idx = (j + x_d_k[idx].k) % M;

                        if (next_idx == 0)
                        {
                            tmp_target[j] = target[i][M];
                        }
                        else
                        {
                            tmp_target[j] = target[i][next_idx];
                        }
                    }

                    for (int j = 1; j <= M; j++)
                        target[i][j] = tmp_target[j];
                }
            }
        }
        //인접 수 지우기
        vector<pair<int, int>> equal_target;
        equal_target.clear();

        int num = 0;

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= M; j++)
            {
                if (target[i][j] != 0)
                {
                    for (int k = 0; k < 4; k++)
                    {
                        int ny = i + dy[k];
                        int nx = j + dx[k];

                        if(nx == 0)
                            nx = M;
                        else if (ny <= 0 || nx <= 0 || ny > N || nx > N || target[ny][nx] == 0)
                            continue;

                        if (target[i][j] == target[ny][nx])
                        {
                            num++;
                            ans -= target[i][j];
                            equal_target.emplace_back(make_pair(i, j));
                            break;
                        }
                    }
                }
            }
        }

        if (num == 0)
        {
            int exist_target = 0;

            for (int i = 1; i <= N; i++)
            {
                for (int j = 1; j <= M; j++)
                {
                    if (target[i][j] > 0)
                        exist_target++;
                }
            }

            int average = ans / exist_target;
            for (int i = 1; i <= N; i++)
            {
                for (int j = 1; j <= M; j++)
                {
                    if (target[i][j] != 0 && target[i][j] > average)
                    {
                        target[i][j] -= 1;
                        ans -= 1;
                    }
                    else if (target[i][j] != 0 && target[i][j] <= average)
                    {
                        target[i][j] += 1;
                        ans += 1;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < equal_target.size(); i++)
            {
                int y = equal_target[i].first;
                int x = equal_target[i].second;

                target[y][x] = 0;
            }
        }

        idx++;
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> T;
    target.assign(N + 1, vector<int>(M + 1, 0));
    tmp_target.assign(N + 1, 0);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> target[i][j];
            ans += target[i][j];
        }
    }

    int n = 0;
    while (n < T)
    {
        int tmp_x, tmp_d, tmp_k;
        cin >> tmp_x >> tmp_d >> tmp_k;

        x_d_k.emplace_back(create(tmp_x, tmp_d, tmp_k));
        n++;
    }

    solution();
}
*/