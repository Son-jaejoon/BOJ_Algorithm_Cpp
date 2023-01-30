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

/* 18808번 스티커 붙이기
// 해설 : 시뮬레이션, 회전 구현만 하면 쉽게 해결
// url : https://www.acmicpc.net/problem/18808

int N, M, K, r, c;
vector<vector<int>> note;
vector<vector<int>> sticker;

bool stitch(int y, int x)
{
    for(int i = 0 ; i < r; i++)
    {
        for(int j = 0 ; j < c ; j++)
        {
            if(note[y + i][x + j] == 1 && sticker[i][j] == 1)
                return false;
        }
    }

    for(int i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < c ; j++)
        {
            if(sticker[i][j] == 1)
                note[y + i][x + j] = 1;
        }
    }

    return true;
}

void rotate()
{
    int tmp[11][11];

    for(int i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < c ; j++)
        {
            tmp[i][j] = sticker[i][j];
        }
    }

    for(int i = 0 ; i < c ; i++)
    {
        for(int j = 0 ; j < r ; j++)
        {
            sticker[i][j] = tmp[r - 1 - j][i];
        }
    }

    swap(r, c);
}

void input()
{
    cin >> N >> M >> K;

    note.assign(N, vector<int>(M, 0));

    for(int l = 0 ; l < K ; l++)
    {
        cin >> r >> c;

        sticker.assign(max(r, c), vector<int>(max(r, c), 0));

        for(int i = 0 ; i < r ; i++)
        {
            for(int j = 0 ; j < c ; j++)
            {
                cin >> sticker[i][j];
            }
        }

        for(int dir = 0 ; dir < 4 ; dir++)
        {
            bool flag = false;

            for(int i = 0 ; i <= N-r ; i++)
            {
                if(flag)
                    break;
                
                for(int j = 0 ; j <= M-c ; j++)
                {
                    if(stitch(i, j))
                    {
                        flag = true;
                        break;
                    }
                }
            }

            if(flag)
                break;
            
            rotate();
        }
    }
}

void solution()
{
    int answer = 0;

    for (int i = 0; i < N; i++) 
    {
        answer += count(note[i].begin(), note[i].end(), 1);
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