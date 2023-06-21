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

/* 28088번 응애(EASY)
// 해설 : 구현
// url : https://www.acmicpc.net/problem/28088

int N, M, K;
vector<int> v;

void input()
{
    cin >> N >> M >> K;
    
    v.assign(M, 0);

    for(int i = 0 ; i < M ; i++)
    {
        cin >> v[i];
    }
}

void solution()
{
    vector<int> people(N, 0);

    while(K--)
    {
        people.assign(N, 0);

        for(int i = 0 ; i < v.size() ; i++)
        {
            int curr_idx = v[i];

            int left_idx = curr_idx - 1 < 0 ? N - 1 : curr_idx - 1;
            int right_idx = curr_idx + 1 >= N ? 0 : curr_idx + 1;

            people[left_idx]++;
            people[right_idx]++;    
        }

        v.clear();

        for(int i = 0 ; i < N ; i++)
        {
            if(people[i] == 1)
                v.emplace_back(i);
        }
    }

    cout << v.size();
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