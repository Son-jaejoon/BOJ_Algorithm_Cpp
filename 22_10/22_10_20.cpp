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

/* 13460번 구슬 탈출2
// 해설 : 상하좌우 + 빨강 파랑 구슬 어떻게 움직일까?
// 참고 : https://junbastick.tistory.com/37

int N, M, ans = 987654321;

void solution(vector<vector<int>> arr, int red_y, int red_x, int blue_y, int blue_x, int cnt)
{
    int tmp_red_y, tmp_red_x, tmp_blue_y, tmp_blue_x;
    int clear = 0;
    //위
    if(red_x == blue_x)
    {
        if(red_y < blue_y)
        {
            for(int i = red_y - 1 ; i >= 0 ; i--)
            {
                if(arr[i][j] == 0 || arr[i][j] == 2 || arr[i][j] == 3) //벽, RED, BLUE
                {
                    tmp_red_y = i + 1;
                    tmp_red_x = red_x;
                    break;
                }

                if(arr[i][j] == 4)
                {
                    clear++;
                    break;
                }

                tmp_red_y = i;
                tmp_red_x = red_x;            
            }

            for(int i = blue_y - 1 ; i >= 0 ; i--)
            {
                if(arr[i][j] == 0 || arr[i][j] == 2 || arr[i][j] == 3) //벽, RED, BLUE
                {
                    tmp_blue_y = i + 1;
                    tmp_blue_x = blue_x;
                    break;
                }

                if(arr[i][j] == 4)
                {
                    clear++;
                    break;
                }

                tmp_blue_y = i;
                tmp_blue_x = blue_x;
            }

            if(clear == 0)
            {
                arr[tmp_red_y][tmp_red_x] = 2;
                arr[tmp_blue_y][tmp_blue_x] = 3;
                arr[red_y][red_x] = 1;
                arr[blue_y][blue_x] = 1;
                solution(arr, tmp_red_y, tmp_red_x, tmp_blue_y, tmp_blue_x, cnt + 1);
            }
            else if(clear == 1)
            {
                ans = min(ans, cnt + 1);
            }
        }
        else
        {
            for(int i = blue_y - 1 ; i >= 0 ; i--)
            {
                if(arr[i][j] == 0 || arr[i][j] == 2 || arr[i][j] == 3) //벽, RED, BLUE
                {
                    tmp_blue_y = i + 1;
                    tmp_blue_x = blue_x;
                    break;
                }

                if(arr[i][j] == 4)
                {
                    clear++;
                    break;
                }

                tmp_blue_y = i;
                tmp_blue_x = blue_x;
            }

            for(int i = red_y - 1 ; i >= 0 ; i--)
            {
                if(arr[i][j] == 0 || arr[i][j] == 2 || arr[i][j] == 3) //벽, RED, BLUE
                {
                    tmp_red_y = i + 1;
                    tmp_red_x = red_x;
                    break;
                }

                if(arr[i][j] == 4)
                {
                    clear++;
                    break;
                }

                tmp_red_y = i;
                tmp_red_x = red_x;            
            }
            if(clear == 0)
            {
                solution(arr, tmp_red_y, tmp_red_x, tmp_blue_y, tmp_blue_x, cnt + 1);
            }
            else if(clear == 1)
            {
                ans = min(ans, cnt + 1);
            }
        }
    }
    else
    {

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>> arr;

    cin >> N >> M;
    arr.assign(N, vector<int>(M, 0));

    int red_y, red_x, blue_y, blue_x;

    for(int i = 0 ; i < N ; i++)
    {
        string st;
        cin >> st;

        for(int j = 0 ; j < M ; j++)
        {
            char ch = st[j];
            
            if(ch == '#')
            {
                arr[i][j] = 0;
            }
            else if(ch == '.')
            {
                arr[i][j] = 1;
            }
            else if(ch == 'R')
            {
                red_y = i;
                red_x = j;
                arr[i][j] = 2;
            }
            else if(ch == 'B')
            {
                blue_y = i;
                blue_x = x;
                arr[i][j] = 3;
            }
            else if(ch == 'O')
            {
                arr[i][j] = 4;
            }
        }
    }

    solution(arr, red_y, red_x, blue_y, blue_x, 0);
}
*/