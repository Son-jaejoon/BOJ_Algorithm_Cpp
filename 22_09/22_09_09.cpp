#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 17090 미로 탈출하기
// 해설 : 시간초과 실패 -> DP로 해결하기.
// 참고 : https://yabmoons.tistory.com/347

int N, M, ans;
vector<vector<int>> arr;
vector<vector<int>> save;
vector<pair<int, int>> load;
bool visited[500][500];

void chk(int result)
{
    if (result == 1)
    {
        for (int i = 0; i < load.size(); i++)
        {
            int y = load[i].first;
            int x = load[i].second;

            save[y][x] = 1;
        }
    }
    else
    {
        for (int i = 0; i < load.size(); i++)
        {
            int y = load[i].first;
            int x = load[i].second;

            save[y][x] = 2;
        }
    }
}

void solution(int y, int x)
{
    if (!visited[y][x])
    {
        load.emplace_back(make_pair(y, x));

        visited[y][x] = true;
        int dir = arr[y][x];

        if (save[y][x] == 0)
        {
            if (dir == 1)
            {
                if (y - 1 < 0)
                {
                    chk(1);
                    ans++;
                    return;
                }
                else
                    solution(y - 1, x);
            }
            else if (dir == 2)
            {
                if (x + 1 >= M)
                {
                    chk(1);
                    ans++;
                    return;
                }
                else
                    solution(y, x + 1);
            }
            else if (dir == 3)
            {
                if (y + 1 >= N)
                {
                    chk(1);
                    ans++;
                    return;
                }
                else
                    solution(y + 1, x);
            }
            else if (dir == 4)
            {
                if (x - 1 < 0)
                {
                    chk(1);
                    ans++;
                    return;
                }
                else
                    solution(y, x - 1);
            }
        }
        else if(save[y][x] == 1)
        {
            ans++;
            load.pop_back();
            chk(1);
        }
        else if(save[y][x] == 2)
        {
            load.pop_back();
            chk(2);
        }
    }
    else
    {
        chk(2);
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    arr.assign(N, vector<int>(M, 0));
    save.assign(N, vector<int>(M, 0));

    for (int i = 0; i < N; i++)
    {
        string st;
        cin >> st;

        for (int j = 0; j < M; j++)
        {
            if (st[j] == 'U')
                arr[i][j] = 1;
            else if (st[j] == 'R')
                arr[i][j] = 2;
            else if (st[j] == 'D')
                arr[i][j] = 3;
            else if (st[j] == 'L')
                arr[i][j] = 4;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            load.clear();
            memset(visited, false, sizeof(visited));
            solution(i, j);
        }
    }

    cout << ans;
}
*/