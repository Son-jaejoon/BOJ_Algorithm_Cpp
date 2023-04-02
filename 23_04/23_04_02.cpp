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

/* 2075번 N번째 큰 수
// 해설 : priorty_queue, 메모리 제한
// url : https://www.acmicpc.net/problem/2075

int N;
priority_queue<int, vector<int>, greater<int>> pq;

void input()
{
    cin >> N;

    for(int i = 0 ; i < N*N ; i++)
    {
        int num;
        cin >> num;

        pq.emplace(num);

        if(pq.size() > N)
            pq.pop();
    }
}

void solution()
{
    cout << pq.top();
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