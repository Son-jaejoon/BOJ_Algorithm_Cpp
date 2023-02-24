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

/* 1074¹ø Z
// ÇØ¼³ : Àç±Í
// url : https://www.acmicpc.net/problem/1074

int N, r, c;
int answer;

void input()
{
    cin >> N >> r >> c;
}

void solution(int y, int x, int size)
{
    if(y == r && x == c)
    {
        cout << answer;
        return;
    }

    if(r < y + size && r >= y && c < x + size && c >= x)
    {
        solution(y, x, size / 2);
        solution(y, x + size / 2, size / 2);
        solution(y + size / 2, x, size / 2);
        solution(y + size / 2, x + size / 2, size / 2);
    }
    else
    {
        answer += size * size;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution(0, 0, (1 << N));
}
*/