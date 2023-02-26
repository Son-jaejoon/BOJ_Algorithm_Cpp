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

/* 1992¹ø ÄõµåÆ®¸®
// ÇØ¼³ : Àç±Í
// url : https://www.acmicpc.net/problem/1992

int N;
vector<vector<int>> v;

void input()
{
    cin >> N;
    v.assign(N, vector<int>(N, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            char ch;
            cin >> ch;

            v[i][j] = ch - '0';
        }
    }
}

void solution(int y, int x, int size)
{
    if(size == 1)
    {
        cout << v[y][x];
        return;
    }

    bool is_zero = true;
    bool is_one = true;

    for(int i = y ; i < y + size ; i++)
    {
        for(int j = x ; j < x + size ; j++)
        {
            if(v[i][j] == 0)
            {
                is_one = false;
            }
            else if(v[i][j] == 1)
            {
                is_zero = false;
            }

            if(is_one || is_zero)
                continue;
            
            break;
        }
    }

    if(is_zero)
        cout << "0";
    else if(is_one)
        cout << "1";
    else
    {
        cout << "(";

        solution(y, x, size / 2);
        solution(y, x + size / 2, size / 2);
        solution(y + size / 2, x, size / 2);
        solution(y + size / 2, x + size / 2, size / 2);

        cout << ")";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution(0, 0, N);
}
*/