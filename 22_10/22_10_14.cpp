#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 17387번 선분 교차2
// 해설 : CCW(각도)를 이용한 선분 교차 체크
// 참고 : https://imucoding.tistory.com/1060, https://gaussian37.github.io/math-algorithm-line_intersection/

int x1, x2, x3, x4,
    y1, y2, y3, y4;


int ccw(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int num = x1*y2 + x2*y3 + x3*y1;
    num = num - y1*x2 - y2*x3 - y3*x1;

    if(num > 0)
        return 1;
    else if(num < 0)
        return -1;
    else
        return 0;
}

void solution()
{
    int left = ccw(x1, y1, x2, y2, x3, y3);
    int right = ccw(x1, y1, x2, y2, x4, y4);

    if(left != right)
    {
        cout << 1;
        return;
    }
    else
    {
        int left_1 = ccw(x1, y1, x2, y2, x3, y3);
        int right_1 = ccw(x1,y1, x2, y2, x4, y4);
        int result_1 = left_1 * right_1;

        int left_2 = ccw(x3, y3, x4, y4, x1, y1);
        int right_2 = ccw(x3, y3, x4, y4, x2, y2);
        int result_2 = left_2 * right_2;

        if((result_1 == 0 && result_2 != 0) || (result_1 != 0 && result_2 == 0))
        {
            cout << 1;
            return;
        }
        else
        {
            if(x1 == x2 == x3 == x4)
            {
                if(y1 > y2)
                {
                    if(y4 > y3)
                    {
                        if(y3 > y1 && y4 > y2)
                        {
                            cout << 1;
                            return;
                        }
                    }
                    else
                    {
                        if(y4 > y1 && y3 > y2)
                        {
                            cout << 1;
                            return;
                        }
                    }
                }
                else
                {
                    if(y4 > y3)
                    {
                        if(y3 > y2 && y4 > y1)
                        {
                            cout << 1;
                            return;
                        }
                    }
                    else
                    {
                        if(y4 > y2 && y3 > y1)
                        {
                            cout << 1;
                            return;
                        }
                    }
                }
            }
            else if(y1 == y2 == y3 == y4)
            {
                if(x1 > x2)
                {
                    if(x4 > x3)
                    {
                        if(x3 > x1 && x4 > x2)
                        {
                            cout << 1;
                            return;
                        }
                    }
                    else
                    {
                        if(x4 > x1 && x3 > x2)
                        {
                            cout << 1;
                            return;
                        }
                    }
                }
                else
                {
                    if(x4 > x3)
                    {
                        if(x3 > x2 && x4 > x1)
                        {
                            cout << 1;
                            return;
                        }
                    }
                    else
                    {
                        if(x4 > x2 && x3 > x1)
                        {
                            cout << 1;
                            return;
                        }
                    }
                }
            }
        }
    }

    cout << 0;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    solution();
}
*/

/* 12100번 2048(Easy)
// 해설 : DFS를 할때는 전달인자로 하면 하나만 구현 하면 됨.
// 참고 : https://donggoolosori.github.io/2020/11/06/boj-12100/

int N, ans;
vector<vector<int>> graph;

vector<vector<int>> up(vector<vector<int>> graph)
{
    vector<vector<bool>> chk(N, vector<bool>(N, false));

    for(int i = 1 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            if()
            int curr_y = i;
            int next_y = i - 1;
            
            while(next_y >= 0)
            {
                int curr_num = graph[curr_y][j];
                int next_num = graph[next_y][j];
                if(next_num == 0)
                {
                    graph[next_y][j] = curr_num;
                    graph[curr_y][j] = 0;
                    next_y -= 1;
                    curr_y -= 1;
                    continue;
                }
                else if(next_num == curr_num)
                {
                    graph[next_y][j] = next_num*2;
                    graph[curr_y][j] = 0;
                    break;
                }
            }
        }
    }
}

void down()
{

}

void left()
{

}

void right()
{

}

void solution(int cnt, vector<vector<int>> board)
{
    if(cnt == 5)
    {
        int max_num = 0;
        for(int i = 0 ; i < N ; i++)
        {
            int num = *max_element(board[i].begin(), board[i].end());
            max_num = max(max_num, num);
        }
        ans = max(ans, max_num);
        return;
    }

    for(int i = 0 ; i < 4 ; i++)
    {
        if(i == 0)
        {
            solution(cnt + 1, up(board));
        }
        else if(i == 1)
        {
            solution(cnt + 1, down(board));
        }
        else if(i == 2)
        {
            solution(cnt + 1, left(board));
        }
        else
        {
            solution(cnt + 1, right(board));
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    graph.assign(N, vector<int>(N, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cin >> graph[i][j];
        }
    }
    up();
    cout << endl;
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    //solution(0);
}
*/