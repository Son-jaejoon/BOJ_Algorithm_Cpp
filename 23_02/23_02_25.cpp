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

/* 1780번 종이의 개수
// 해설 : 재귀
// url : https://www.acmicpc.net/problem/1780

int N;
vector<vector<int>> v;
int answer[3];

void input()
{
    cin >> N;

    v.assign(N, vector<int>(N, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cin >> v[i][j];
        }
    }
}

void solution(int y, int x, int size)
{
    for(int i = y ; i < y + size ; i++)
    {
        for(int j = x ; j < x + size ; j++)
        {
            if(v[i][j] != v[y][x])
            {
                solution(y, x, size / 3);

                solution(y + size / 3, x, size / 3);
                solution(y + size * 2 / 3, x, size / 3);
                
                solution(y, x + size / 3 , size / 3);
                solution(y, x + size * 2 / 3, size / 3);

                solution(y + size / 3, x + size / 3, size / 3);
                solution(y + size / 3, x + size * 2 / 3, size / 3);

                solution(y + size * 2 / 3, x + size / 3, size / 3);
                solution(y + size * 2 / 3, x + size * 2 / 3, size / 3);
                return;
            }
        }
    }

    answer[v[y][x] + 1]++;
}

void print_answer()
{
    for(int i = 0 ; i < 3 ; i++)
    {
        cout << answer[i] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution(0, 0, N);
    print_answer();
}
*/