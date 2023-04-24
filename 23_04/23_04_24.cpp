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

/* 5212번 지구 온난화
// 해설 : 구현
// url : https://www.acmicpc.net/problem/5212

int R, C;
int start_y, end_y, start_x, end_x;
vector<vector<char>> island, answer;

int dy[] = {1, -1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> R >> C;
    island.assign(R, vector<char>(C, 0));

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> island[i][j];
        }
    }
}

void find_location()
{
    for (int i = 0; i < R; i++)
    {
        if (find(answer[i].begin(), answer[i].end(), 'X') != answer[i].end())
        {
            start_y = i;
            break;
        }    
    }

    for(int i = R - 1 ; i >= 0 ; i--)
    {
        if (find(answer[i].begin(), answer[i].end(), 'X') != answer[i].end())
        {
            end_y = i;
            break;
        }    
    }

    for(int i = 0 ; i < C ; i++)
    {
        bool flag = false;

        for(int j = 0 ; j < R ; j++)
        {
            if(answer[j][i] == 'X')
            {
                start_x = i;
                flag = true;
                break;
            }
        }

        if(flag)
            break;
    }

    for(int i = C - 1 ; i >= 0 ; i--)
    {
        bool flag = false;

        for(int j = R - 1 ; j >= 0 ; j--)
        {
            if(answer[j][i] == 'X')
            {
                end_x = i;
                flag = true;
                break;
            }
        }

        if(flag)
            break;
    }
}

void print_answer()
{
    for(int i = start_y ; i <= end_y ; i++)
    {
        for(int j = start_x ; j <= end_x ; j++)
        {
            cout << answer[i][j];
        }

        cout << endl;
    }
}

void solution()
{
    answer.assign(island.begin(), island.end());

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (island[i][j] == '.')
                continue;

            int cnt = 0;

            for (int dir = 0; dir < 4; dir++)
            {
                int ny = i + dy[dir];
                int nx = j + dx[dir];

                if (ny < 0 || nx < 0 || ny >= R || nx >= C)
                {
                    cnt++;
                    continue;
                }

                if (island[ny][nx] == 'X')
                    continue;

                cnt++;
            }

            if (cnt >= 3)
            {
                answer[i][j] = '.';
            }
        }
    }

    find_location();
    print_answer();
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