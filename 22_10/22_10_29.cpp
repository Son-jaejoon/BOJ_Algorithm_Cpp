#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 17143번 낚시왕
// 해설 : 구현 문제
// 참고 : https://yabmoons.tistory.com/288

int R, C, M;
int dy[] = {0, -1, 1, 0, 0};
int dx[] = {0, 0, 0, 1, -1};

struct info
{
    int y, x, s, d, z;
};

info create(int y, int x, int s, int d, int z)
{
    info n_info;
    
    n_info.y = y;
    n_info.x = x;
    n_info.s = s;
    n_info.d = d;
    n_info.z = z;

    return n_info;
}

int ans;
vector<info> shark;

void move()
{
    for(int i = 0 ; i < M ; i++)
    {
        if(shark[i].z == 0)
            continue;

        int shark_y = shark[i].y;
        int shark_x = shark[i].x;
        int shark_velocity = shark[i].s;
        int shark_direction = shark[i].d;

        if(shark_direction == 1 || shark_direction == 2) // 위, 아래
        {
            int row_size = (R - 1)*2;

            if(shark_velocity >= row_size)
                shark_velocity %= row_size;

            for(int j = 0 ; j < shark_velocity ; j++)
            {
                int ny = shark_y + dy[shark_direction];
                int nx = shark_x + dx[shark_direction];

                if(ny < 0)
                {
                    shark_direction = 2;
                    ny = ny + 2;
                }

                if(ny >= R)
                {
                    shark_direction = 1;
                    ny = ny - 2;
                }

                shark_y = ny;
                shark_x = nx;
            }
        }
        else// 오른쪽, 왼쪽
        {
            int col_size = (C - 1)*2;

            if(shark_velocity >= col_size)
                shark_velocity %= col_size;

            for(int j = 0 ; j < shark_velocity ; j++)
            {
                int ny = shark_y + dy[shark_direction];
                int nx = shark_x + dx[shark_direction];

                if(nx < 0)
                {
                    shark_direction = 3;
                    nx = nx + 2;
                }

                if(nx >= C)
                {
                    shark_direction = 4;
                    nx = nx - 2;
                }

                shark_y = ny;
                shark_x = nx;
            }
        }

        shark[i].y = shark_y;
        shark[i].x = shark_x;
        shark[i].d = shark_direction;
    }
}

void kill_shark()
{
    vector<vector<int>> visited;
    visited.assign(R + 1, vector<int>(C + 1, -1));

    for(int i = 0 ; i < M ; i++)
    {
        if(shark[i].z == 0)
            continue;

        int y = shark[i].y;
        int x = shark[i].x;

        if(visited[y][x] == -1)
        {
            visited[y][x] = i;
        }
        else
        {
            int boss_idx = visited[y][x];
            int shark_boss_size = shark[boss_idx].z;

            if(shark_boss_size > shark[i].z)
            {
                cout << "kill!" << endl;
                shark[i].z = 0;
            }
            else
            {
                cout << "change!" << endl;
                shark[boss_idx].z = 0;
                visited[y][x] = shark[i].z;
            }
        }
    }
}

void solution()
{
    for(int i = 0 ; i < C ; i++)
    {
        cout << i + 1 << "sec" << endl;

        for(int j = 0 ; j < M ; j++)
        {
            if(shark[j].z == 0)
                continue;
                
            int shark_y = shark[j].y;
            int shark_x = shark[j].x;

            if(shark_x == i)
            {
                cout << shark[j].z << endl;
                ans += shark[j].z;
                shark[j].z = 0;
                break;
            }
        }

        move();
        kill_shark();
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R >> C >> M;

    for(int i = 0 ; i < M ; i++)
    {
        int r, c, s, d, z;

        cin >> r >> c >> s >> d >> z;
        shark.emplace_back(create(r - 1 , c - 1, s, d, z));
    }

    solution();
}
*/