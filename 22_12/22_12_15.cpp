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
#include <numeric>
#define endl "\n"

using namespace std;

/* 11286번 절댓값 힙
// 해설 : 우선순위 큐를 이용한 비교연산

int N;

struct cmp
{
    bool operator()(int a, int b)
    {
        if (abs(a) == abs(b))
            return a > b;
        else
            return abs(a) > abs(b);
    }
};

solution()
{
    cin >> N;

    priority_queue<int, vector<int>, cmp> pq;

    int num = 0;

    while (N--)
    {
        cin >> num;

        if (num == 0)
        {
            if (pq.empty())
                cout << '0' << endl;
            else
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
        else
            pq.emplace(num);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    solution();
}

*/