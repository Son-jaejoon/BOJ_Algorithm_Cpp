#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#define endl "\n"

using namespace std;

/* 2448¹ø º° Âï±â - 11
// ÇØ¼³ : Àç±Í, ±¸Çö

char t[3072][6144];

int N;

void star(int N, int x, int y)
{
    if (N == 3)
    {
        t[y][x] = '*';

        t[y + 1][x - 1] = '*';
        t[y + 1][x + 1] = '*';

        t[y + 2][x - 2] = '*';
        t[y + 2][x - 1] = '*';
        t[y + 2][x] = '*';
        t[y + 2][x + 1] = '*';
        t[y + 2][x + 2] = '*';
    }
    else
    {
        star(N / 2, x, y);
        star(N / 2, x - N / 2, y + N / 2);
        star(N / 2, x - N / 2 + N, y + N / 2);
    }
}

void solution()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 2 * N - 1; j++)
        {
            t[i][j] = ' ';
        }
    }

    star(N, N - 1, 0);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 2 * N - 1; j++)
        {
            cout << t[i][j];
        }

        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    solution();
}
*/