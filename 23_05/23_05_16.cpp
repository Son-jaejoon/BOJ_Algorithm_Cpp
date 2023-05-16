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

/* 1914번 하노이 탑
// 해설 : 하노이, 큰 수 연산
// url : https://www.acmicpc.net/problem/1914

int N;

void input()
{
    cin >> N;
}

void hanoi(int from, int mid, int to, int remain)
{
    if(!remain)
        return;
    
    hanoi(from, to, mid, remain - 1);
    cout << from << " " << to << endl;
    hanoi(mid, from, to, remain - 1);
}

void solution()
{
    string answer = to_string(pow(2, N));
    int dot = answer.find('.');
    answer = answer.substr(0, dot);
    answer[answer.size() - 1] -= 1;

    cout << answer << endl;

    if(N <= 20)
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