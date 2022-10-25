#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 16957번 체스판 위의 공
// 해설 : y, x 좌표 -> y, x좌표를 저장시키는 것을 1차원 좌표로 변환해서 저장하는 것이 핵심(시간초과 해결)

int R, C;
vector<vector<int>> arr;
vector<int> ball;
vector<int> save;

int dy[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dx[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

void chk()
{
    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            int Min = 987654321;
            int arrival_y, arrival_x;

            for(int k = 0 ; k < 9 ; k++)
            {
                int ny = i + dy[k];
                int nx = j + dx[k];

                if(ny < 0 || nx < 0 || ny >= R || nx >= C)
                    continue;
                
                if(Min > arr[ny][nx])
                {
                    Min = arr[ny][nx];
                    arrival_y = ny;
                    arrival_x = nx;
                }
            }

            save[i*C + j] = arrival_y*C + arrival_x;
        }
    }
}


int ball_move(int idx)
{
    if(idx == save[idx])
        return idx;
    else
        return save[idx] = ball_move(save[idx]);
}

void solution()
{
    chk();

    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            int idx = i*C + j;
            int result = ball_move(idx);

            ball[result] += 1;
        }
    }

    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            cout << ball[i*C + j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R >> C;
    arr.assign(R, vector<int>(C, 0));
    ball.assign((R - 1)*C + C, 0);
    save.assign((R - 1)*C + C, 0);

    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            cin >> arr[i][j];
        }
    }

    solution();
}
*/

/* 12931번 두 배 더하기
// 해설 : A를 올리기 x B를 내리기 o
// 참고 : https://jaimemin.tistory.com/825

int N;
int ans = 0;

vector<int> B;

bool chk()
{
    for (int i = 0; i < N; i++)
    {
        if (B[i] != 0)
            return false;
    }

    return true;
}

bool divide_chk()
{
    for (int i = 0; i < N; i++)
    {
        if (B[i] % 2 != 0)
            return false;
    }

    return true;  
}

void divide_vector()
{
    for (int i = 0; i < N; i++)
    {
        B[i] = B[i] / 2;
    }

    return;
}

void solution()
{
    for (int i = 0; i < N; i++)
    {
        if(B[i] == 0)
            continue;
        
        if(B[i] % 2 > 0)
        {
            B[i] -= 1;
            ans += 1;
        }
    }

    if (chk())
    {
        cout << ans;
        exit(0);
    }

    if(divide_chk())
    {
        divide_vector();
        ans += 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    B.assign(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    while(1)
        solution();
}
*/