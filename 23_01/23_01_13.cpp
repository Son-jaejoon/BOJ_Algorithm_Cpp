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

/* 5525번 IOIOI
// 해설 : 구현
// url : https://www.acmicpc.net/problem/5525

int N, M;
string st;

void input()
{
    cin >> N >> M >> st;
}

void solution()
{
    int answer = 0;
    int k = 0;

    for(int i = 0 ; i < M ; i++)
    {
        k = 0;

        if(st[i] == 'O')
            continue;
        else
        {
            while(st[i + 1] == 'O' && st[i + 2] == 'I')
            {
                k++;

                if(k == N)
                {
                    k--;
                    answer++;
                }

                i += 2;
            }
        }
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