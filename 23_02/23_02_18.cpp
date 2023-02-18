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

/* 14503번 로봇 청소기
// 해설 : 구현, 시뮬레이션
// url : https://www.acmicpc.net/problem/14503

int N, M;
int curr_y, curr_x, curr_dir;

vector<vector<int>> room;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void input()
{
    cin >> N >> M;
    cin >> curr_y >> curr_x >> curr_dir;

    room.assign(N, vector<int>(M, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            cin >> room[i][j];
        }
    }

}

void solution()
{
    int answer = 0;

    while(1)
    {
        bool goto_clean = false;

        if(room[curr_y][curr_x] == 0)
        {
            answer++;
            room[curr_y][curr_x] = -1;
        }

        for(int i = 1 ; i <= 4 ; i++)
        {
            int dir = curr_dir - i;
            if(dir < 0)
                dir += 4;

            int ny = curr_y + dy[dir];
            int nx = curr_x + dx[dir];

            if(ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;
            
            if(room[ny][nx] == 0)
            {
                curr_y = ny;
                curr_x = nx;
                curr_dir = dir;
                goto_clean = true;
                break;
            }
        }

        if(goto_clean)
            continue;
        
        int ny = curr_y + dy[(curr_dir + 2)%4];
        int nx = curr_x + dx[(curr_dir + 2)%4];

        if(ny < 0 || nx < 0 || ny >= N || nx >= M)
            break;
        else if(room[ny][nx] == 1)
            break;
        else
        {
            curr_y = ny;
            curr_x = nx;
        }
    }

    cout << answer;
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