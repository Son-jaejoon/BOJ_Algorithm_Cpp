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

/* 11729번 하노이 탑 이동 순서
// 해설 : 재귀, N - 1 옮기기
// url : https://www.acmicpc.net/problem/11729

int N;

void input()
{
    cin >> N;
}

void hanoi(int from, int mid, int end, int n)
{
    if(n == 1)
        cout << from << " " << end << endl;
    else
    {
        hanoi(from, end, mid, n - 1);
        cout << from << " " << end << endl;
        hanoi(mid, from, end, n - 1);
    }
}

void solution()
{
    cout << (int)pow(2, N) - 1 << endl;

    hanoi(1, 2, 3, N);
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