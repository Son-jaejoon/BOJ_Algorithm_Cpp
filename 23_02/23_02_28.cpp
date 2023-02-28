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

/* 1927번 최소 힙
// 해설 : 우선순위 큐
// url : https://www.acmicpc.net/problem/1927

priority_queue<long , vector<long>, greater<long>> pq;

void input()
{
    int N;
    cin >> N;

    while(N--)
    {
        long num;

        cin >> num;

        if(num == 0)
        {
            if(pq.empty())
                cout << "0" <<endl;
            else
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
        else
        {
            pq.emplace(num);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    input();
}
*/