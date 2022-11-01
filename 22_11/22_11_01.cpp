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

/* 1799번 비숍 1번 풀이
// 해설 : for dfs로 풀었더니 시간초과가 났다. 더 효율적인 방식을 고민해야한다.
int N, ans;
vector<vector<int>> chess;

vector<vector<int>> bishop_move(vector<vector<int>> bishop, int y, int x)
{
    bishop[y][x] = 2;

    int idx = 1;
    for(int i = y + 1 ; i < N ; i++)
    {
        if(x - idx >= 0)
            bishop[i][x - idx] = 0;
        
        if(x + idx < N)
            bishop[i][x + idx] = 0;
        
        idx++;
    }

    idx = 1;

    for(int i = y - 1 ; i >= 0 ; i--)
    {
        if(x - idx >= 0)
            bishop[i][x - idx] = 0;
        
        if(x + idx < N)
            bishop[i][x + idx] = 0;

        idx++;
    }

    return bishop;
}

vector<vector<int>> bishop_undo(vector<vector<int>> bishop, int y, int x)
{
    bishop[y][x] = 1;

    int idx = 1;
    for(int i = y + 1 ; i < N ; i++)
    {
        if(x - idx >= 0)
        {
            if(chess[i][x - idx] == 0)
                bishop[i][x - idx] = 0;
            else
                bishop[i][x - idx] = 1;
        }
        
        if(x + idx < N)
        {
            if(chess[i][x - idx] == 0)
                bishop[i][x + idx] = 0;
            else
                bishop[i][x + idx] = 1;
        }
        
        idx++;
    }

    idx = 1;

    for(int i = y - 1 ; i >= 0 ; i--)
    {
        if(x - idx >= 0)
        {
            if(chess[i][x - idx] == 0)
                bishop[i][x - idx] = 0;
            else
                bishop[i][x - idx] = 1;
        }
        
        if(x + idx < N)
        {
            if(chess[i][x - idx] == 0)
                bishop[i][x + idx] = 0;
            else
                bishop[i][x + idx] = 1;
        }
        
        idx++;
    }

    return bishop;
}

void solution(vector<vector<int>> bishop, int y, int x)
{
    for(int i = y ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            if(chess[i][j] == 0)
                continue;
            
            if(bishop[i][j] == 0)
                continue;
            
            if(bishop[i][j] == 1)
            {
                bishop = bishop_move(bishop, i, j);
                solution(bishop, i, j);
                bishop = bishop_undo(bishop, i, j);
            }
        }
    }

    int cnt = 0;

    for(int i = 0 ; i < N ; i++)
    {
        cnt += count(bishop[i].begin(), bishop[i].end(), 2);
    }

    ans = max(ans, cnt);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    vector<vector<int>> bishop;

    chess.assign(N, vector<int>(N, 0));
    bishop.assign(N, vector<int>(N, 0));
    
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cin >> chess[i][j];

            if(chess[i][j] == 1)
            {
                bishop[i][j] = 1;
            }
        }
    }

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            if(chess[i][j] == 1)
            {
                bishop = bishop_move(bishop, i, j);
                solution(bishop, i, j);
                bishop = bishop_undo(bishop, i, j);
            }
        }
    }

    cout << ans;
}
*/

/* 1799번 비숍 2번 풀이
// 해설 : 검 흰 두가지로 파트를 나누어 판별한다. ↗ ↙ (열 - 행), ↖↘(열 + 행) 을 이용해서
// 효율 생각

int N;
int ans[2];
vector<vector<int>> chess;
vector<int> l;
vector<int> r;

void solution(int y, int x, int cnt, int color)
{
    if(x >= N)
    {
        y++;
        
        if(x%2 == 0)
            x = 1;
        else
            x = 0;
    }

    if(y >= N)
    {
        ans[color] = max(ans[color], cnt);
        return;
    }

    if(chess[y][x] && !l[x - y + N - 1] && !r[x + y])
    {
        l[x - y + N - 1] = r[x + y] = 1;
        solution(y, x + 2, cnt + 1, color);
        l[x - y + N - 1] = r[x + y] = 0;
    }

    solution(y, x + 2, cnt, color);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    chess.assign(N, vector<int>(N, 0));
    l.assign(N + N, 0);
    r.assign(N + N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cin >> chess[i][j];
        }
    }

    solution(0, 0, 0, 0);
    solution(0, 1, 0, 1);

    cout << ans[0] + ans[1];
}
*/