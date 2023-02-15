#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <string>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#include <numeric>
#include <deque>
#define endl "\n"

using namespace std;

/* 17780번 새로운 게임
// 해설 : 구현
// url : https://www.acmicpc.net/problem/17780

struct info
{
    int y, x, dir;
    bool under;
};

int N, K;
int chess_map[12][12];
info chess[10];
vector<int> chess_map_state[12][12];

int dy[] = {0, 0, 0, -1, 1};
int dx[] = {0, 1, -1, 0, 0};

void input()
{
    cin >> N >> K;

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cin >> chess_map[i][j];
        }
    }

    for(int i = 0 ; i < K ; i++)
    {
        int y, x, dir;
        cin >> y >> x >> dir;
        y -= 1;
        x -= 1;

        chess[i] = {y, x, dir, true};
        chess_map_state[y][x].emplace_back(i);
    }
}

bool check_state()
{
    for(int i = 0 ; i < K ; i++)
    {
        int y = chess[i].y;
        int x = chess[i].x;

        if(chess_map_state[y][x].size() >= 4)
            return true;
    }

    return false;
}

int reverse_dir(int dir)
{
    if(dir == 1)
        return 2;
    else if(dir == 2)
        return 1;
    else if(dir == 3)
        return 4;
    else if(dir == 4)
        return 3;
}

void reverse_chess(int y, int x)
{
    vector<int> tmp;

    for(int i = 0 ; i < chess_map_state[y][x].size() ; i++)
    {
        tmp.emplace_back(chess_map_state[y][x][i]);
    }

    chess_map_state[y][x].clear();

    for(int i = tmp.size() - 1 ; i >= 0 ; i--)
    {
        chess_map_state[y][x].emplace_back(tmp[i]);
        chess[tmp[i]].under = false;
    }

    chess[chess_map_state[y][x][0]].under = true;
}

void change_state(int y, int x, int ny, int nx, int case_num)
{
    if(case_num == 0)
    {
        if(chess_map_state[ny][nx].size() != 0)
            chess[chess_map_state[y][x][0]].under = false;
        
        for(int i = 0 ; i < chess_map_state[y][x].size() ; i++)
        {
            chess_map_state[ny][nx].emplace_back(chess_map_state[y][x][i]);
            int idx = chess_map_state[y][x][i];
            chess[idx].y = ny;
            chess[idx].x = nx;
        }

        chess_map_state[y][x].clear();
    }
    else if(case_num == 1)
    {
        reverse_chess(y, x);

        for(int i = 0 ; i < chess_map_state[y][x].size() ; i++)
        {
            chess_map_state[ny][nx].emplace_back(chess_map_state[y][x][i]);
            int idx = chess_map_state[y][x][i];
            chess[idx].y = ny;
            chess[idx].x = nx;
        }

        chess_map_state[y][x].clear();

        for(int i = 1 ; i < chess_map_state[ny][nx].size() ; i++)
        {
            chess[chess_map_state[ny][nx][i]].under = false;
        }
    }
    else if(case_num == 2)
    {
        int dir = reverse_dir(chess[chess_map_state[y][x][0]].dir);
        chess[chess_map_state[y][x][0]].dir = dir;
        int nny = chess[chess_map_state[y][x][0]].y + dy[dir];
        int nnx = chess[chess_map_state[y][x][0]].x + dx[dir];

        if (nny >= 0 && nnx >= 0 && nny < N && nnx < N)
        {
            if (chess_map[nny][nnx] != 2)
                change_state(y, x, nny, nnx, chess_map[nny][nnx]);
        }
    }
}

void solution()
{
    bool chk = true;
    int cnt = 0;

    while(1)
    {
        if(cnt > 1000)
        {
            chk = false;
            break;
        }

        if(check_state())
        {
            break;
        }

        for(int i = 0 ; i < K ; i++)
        {
            if(chess[i].under == false)
                continue;
            
            int y = chess[i].y;
            int x = chess[i].x;
            int dir = chess[i].dir;

            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if(ny < 0 || nx < 0 || ny >= N || nx >= N)
                change_state(y, x, ny, nx, 2);
            else
                change_state(y, x, ny, nx, chess_map[ny][nx]);
        }

        cnt++;
    }

    if(chk)
        cout << cnt;
    else
        cout << -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();
}
*/