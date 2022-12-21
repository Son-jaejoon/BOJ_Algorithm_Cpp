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

/* 2696번 중앙값 구하기
// 해설 : 우선순위 큐를 이용한 최소힙, 최대힙

vector<int> answer;

void print_answer()
{
    cout << answer.size() << endl;

    for(int i = 0 ; i < answer.size() ; i++)
    {
        if(i % 10 == 0 && i != 0)
            cout << endl;
        
        cout << answer[i] << " ";
    }

    cout << endl;
}

void input()
{
    int T;
    cin >> T;

    while(T--)
    {
        int M, num, mid;

        priority_queue<int> max_pq;
        priority_queue<int, vector<int>, greater<int>> min_pq;
        answer.clear();

        cin >> M;
        cin >> num;

        mid = num;

        answer.emplace_back(mid);
        
        for(int i = 2 ; i <= M ; i++)
        {
            cin >> num;

            if(num < mid)
                max_pq.emplace(num);
            else
                min_pq.emplace(num);

            if(i % 2 == 1)
            {
                if(max_pq.size() < min_pq.size())
                    max_pq.emplace(mid);
                else
                    min_pq.emplace(mid);

                if(max_pq.size() > min_pq.size())
                {
                    mid = max_pq.top();
                    max_pq.pop();
                }
                else
                {
                    mid = min_pq.top();
                    min_pq.pop();
                }

                answer.emplace_back(mid);
            }
        }
        print_answer();
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