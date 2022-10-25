#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 17070번 파이프 옮기기 1
// 해설 : 왜 안될까?
// 참고 : https://eocoding.tistory.com/61

vector<vector<int>> house;
int N, ans;

// direction : 1 - 가로
int right_y[] = {0, 1};
int right_x[] = {2, 2};

// direction : 2 - 세로
int down_y[] = {2, 2};
int down_x[] = {0, 1};

// direction : 3 - 대각선
int bottom_right_y[] = {1, 2, 2};
int bottom_right_x[] = {2, 1, 2};

struct train
{
    int begin_y;
    int begin_x;
    int end_y;
    int end_x;
    int direction;
};

train create(int a_y, int a_x, int b_y, int b_x, int n_direction)
{
    train n_train;
    n_train.begin_y = a_y;
    n_train.begin_x = a_x;
    n_train.end_y = b_y;
    n_train.end_x = b_x;
    n_train.direction = n_direction;

    return n_train;
}

void solution()
{
    queue<train> q;
    q.emplace(create(1, 1, 1, 2, 1));

    while(!q.empty())
    {
        int begin_y = q.front().begin_y;
        int begin_x = q.front().begin_x;
        int end_y = q.front().end_y;
        int end_x = q.front().end_x;
        int dir = q.front().direction;
        q.pop();

        if(dir == 1)
        {
            for(int i = 0 ; i < 2 ; i++)
            {
                int ny = begin_y + right_y[i];
                int nx = begin_x + right_x[i];
                
                if(ny > N || nx > N)
                    continue;
                else if(house[ny][nx] == 1)
                    continue;
                
                if(ny == N && nx == N)
                {
                    ans++;
                    continue;
                }

                if(i == 0)
                {
                    q.emplace(create(end_y, end_x, ny, nx, 1));
                }  
                else if(i == 1)
                {
                    if(house[ny - 1][nx] == 1 || house[ny][nx - 1] == 1)
                        continue;

                    q.emplace(create(end_y, end_x, ny, nx, 3));
                }
            }
        }
        else if(dir == 2)
        {
            for(int i = 0 ; i < 2 ; i++)
            {
                int ny = begin_y + down_y[i];
                int nx = begin_x + down_x[i];

                if(ny > N || nx > N)
                    continue;
                else if(house[ny][nx] == 1)
                    continue;
                
                if(ny == N && nx == N)
                {
                    ans++;
                    continue;
                }

                if(i == 0)
                {
                    q.emplace(create(end_y, end_x, ny, nx, 2));
                }  
                else if(i == 1)
                {
                    if(house[ny - 1][nx] == 1 || house[ny][nx - 1] == 1)
                        continue;
                    
                    q.emplace(create(end_y, end_x, ny, nx, 3));
                }
            }
        }
        else
        {
            for(int i = 0 ; i < 3 ; i++)
            {
                int ny = begin_y + bottom_right_y[i];
                int nx = begin_x + bottom_right_x[i];

                if(ny > N || nx > N)
                    continue;
                else if(house[ny][nx] == 1)
                    continue;
                
                if(ny == N && nx == N)
                {
                    ans++;
                    continue;
                }

                if(i == 0)
                {
                    q.emplace(create(end_y, end_x, ny, nx, 1));
                }  
                else if(i == 1)
                {
                    q.emplace(create(end_y, end_x, ny, nx, 2));
                }
                else if(i == 2)
                {
                    if(house[ny - 1][nx] == 1 || house[ny][nx - 1] == 1)
                        continue;
                    
                    q.emplace(create(end_y, end_x, ny, nx, 3));
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    house.assign(N + 1, vector<int>(N + 1, 0));

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= N ; j++)
        {
            cin >> house[i][j];
        }
    }
    ans = 0;
    solution();
    cout << ans;
}
*/

/* 16987번 계란으로 계란치기
// 해설 : 하나씩 치자

vector<vector<int>> arr;
int N, ans;

void solution(int cnt)
{
    if(cnt == N)
    {
        int break_cnt = 0;

        for(int i = 0 ; i < N ; i++)
        {
            if(arr[i][0] <= 0)
                break_cnt++;
        }

        ans = max(ans, break_cnt);
        
        return;
    }
    
    int i = cnt;

    if(arr[i][0] <= 0)
        return solution(cnt + 1);

    bool egg_breaking = false;

    for(int j = 0 ; j < N ; j++)
    {
        if(j == i)
            continue;
        
        if(arr[j][0] > 0)
        {
            egg_breaking = true;

            arr[j][0] -= arr[i][1];
            arr[i][0] -= arr[j][1];

            solution(cnt + 1);

            arr[j][0] += arr[i][1];
            arr[i][0] += arr[j][1];
        }
    }

    if(!egg_breaking)
        return solution(cnt + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    arr.assign(N, vector<int>(2, 0));

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }

    solution(0);
    cout << ans;
}
*/