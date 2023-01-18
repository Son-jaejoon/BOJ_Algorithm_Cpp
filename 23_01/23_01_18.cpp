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

/* 16918번 봄버맨
// 해설 : 시뮬레이션
// url : https://www.acmicpc.net/problem/16918

int R, C, N;
vector<vector<int>> v;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> R >> C >> N;
    N--;
    v.assign(R, vector<int>(C, 0));

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            char ch;
            cin >> ch;

            if (ch == '.')
                v[i][j] = 0;
            else
                v[i][j] = 1;
        }
    }
}

void print_answer()
{
    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            if(v[i][j] == 0)
                cout << ".";
            else
                cout << "O";
        }
        cout << endl;
    }
}

void solution()
{
    vector<pair<int, int>> bomb;

    int cnt = 1;
    
    while (N--)
    {
        bomb.clear();

        if (cnt % 2 == 1)
        {
            for (int i = 0; i < R; i++)
            {
                for (int j = 0; j < C; j++)
                {
                    v[i][j]++;
                }
            }

            cnt++;
            continue;
        }

        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                if(v[i][j])
                    v[i][j]++;

                if (v[i][j] >= 3)
                    bomb.emplace_back(make_pair(i, j));
            }
        }

        for (int i = 0; i < bomb.size(); i++)
        {
            int y = bomb[i].first;
            int x = bomb[i].second;

            v[y][x] = 0;

            for (int j = 0; j < 4; j++)
            {
                int ny = y + dy[j];
                int nx = x + dx[j];

                if (ny < 0 || nx < 0 || ny >= R || nx >= C)
                    continue;

                v[ny][nx] = 0;    
            }
        }

        cnt++;
    }

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