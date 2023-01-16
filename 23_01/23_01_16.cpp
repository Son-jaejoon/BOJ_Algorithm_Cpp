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

/* 2174번 로봇 시뮬레이션
// 해설 : 구현
// x, y 좌표가 반대로 되어있어서 헷갈린다..
// url : https://www.acmicpc.net/problem/2174

int A, B;
vector<vector<int>> box;
bool chk = false;

struct info
{
    int y, x, order;
};

info create(int y, int x, int order)
{
    info n_info;

    n_info.y = y;
    n_info.x = x;
    n_info.order = order;

    return n_info;
}

vector<info> robot;

bool crush(int curr_y, int curr_x, int idx)
{
    if (curr_y < 0 || curr_x < 0 || curr_y >= A || curr_x >= B)
    {
        cout << "Robot " << idx + 1 << " crashes into the wall";
        chk = true;
        return true;
    }
    else if(box[curr_y][curr_x] != -1)
    {
        cout << "Robot " << idx + 1 << " crashes into robot " << box[curr_y][curr_x] + 1;
        chk = true;
        return true;
    }

    return false;
}

void solution(int idx, int robot_order, int cnt)
{
    int curr_y = robot[idx].y;
    int curr_x = robot[idx].x;
    int order = robot[idx].order;

    if (robot_order == 'L')
    {
        cnt %= 4;

        while (cnt--)
        {
            order -= 1;

            if (order == -1)
                order = 3;
        }

        robot[idx].order = order;
        return;
    }
    else if (robot_order == 'R')
    {
        cnt %= 4;
        while (cnt--)
        {
            order += 1;

            if (order == 4)
                order = 0;
        }
        robot[idx].order = order;
        return;
    }
    else
    {
        box[curr_y][curr_x] = -1;

        while (cnt--)
        {
            if (order == 0)
            {
                curr_y -= 1;
            }
            else if (order == 1)
            {
                curr_x += 1;
            }
            else if(order == 2)
            {
                curr_y += 1;
            }
            else
            {
                curr_x -= 1;
            }

            if(crush(curr_y, curr_x, idx))
                return;
        }

        robot[idx].y = curr_y;
        robot[idx].x = curr_x;
        box[curr_y][curr_x] = idx;
    }
}

void input()
{
    cin >> B >> A;
    box.assign(A, vector<int>(B, -1));

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        int y, x, order;
        char tmp;

        cin >> x >> y >> tmp;
        y = abs(A - y);
        x -= 1; 
        if (tmp == 'N')
            order = 0;
        else if (tmp == 'E')
            order = 1;
        else if (tmp == 'S')
            order = 2;
        else
            order = 3;
        
        robot.emplace_back(create(y, x, order));
        box[y][x] = i;
    }

    for (int i = 0; i < M; i++)
    {
        int idx, cnt;
        char order;

        cin >> idx >> order >> cnt;

        if(!chk)
            solution(idx - 1, order, cnt);
    }

    if(!chk)
        cout << "OK";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/