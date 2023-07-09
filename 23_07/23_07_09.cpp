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

/* 1011번 Fly me to the Alpha Centauri
// 해설 : 수학
// url : https://www.acmicpc.net/problem/1011

void solution(const long long &x, const long long &y);

void input()
{
    int T;
    long long x, y;
    cin >> T;

    while(T--)
    {
        cin >> x >> y;
        solution(x, y);
    }
}

void solution(const long long &x, const long long &y)
{
    long long distance = y - x, answer = 0, N = 1;

    while(N*N < distance)
        N++;
    
    answer = 2*N - 1;
    answer += (long long)ceil((double)(distance - N*N) / (double)N);

    cout << answer << endl;
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/