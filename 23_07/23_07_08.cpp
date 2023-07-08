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

/* 2447¹ø º° Âï±â - 10
// ÇØ¼³ : Àç±Í, º° Âï±â Áß °¡Àå ¾î·Á¿ü´Ù.
// url : https://www.acmicpc.net/problem/2447

int N;

void input()
{
    cin >> N;
}

void draw_star(int y, int x, int n)
{
    if((y / n) % 3 == 1 && (x / n) % 3 == 1)
        cout << " ";
    else if(n / 3 == 0)
        cout << "*";
    else
        draw_star(y, x, n / 3);

}

void solution()
{
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            draw_star(i, j, N);
        }

        cout << endl;
    }
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