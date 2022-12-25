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

/* 18114번 블랙 프라이데이
// 해설 : 이분탐색, 완전 탐색
// url : https://www.acmicpc.net/problem/18114

int N;
long long C;
vector<long long> v;

void input()
{
    cin >> N >> C;
    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
}

void solution()
{
    // 무게가 같은 물건이 있다면
    if(find(v.begin(), v.end(), C) != v.end())
    {
        cout << "1";
        return;
    }

    int lo = 0;
    int hi = N - 1;
    
    while(lo != hi)
    {
        long long num = v[lo] + v[hi];
        
        if(num == C) // 선택한 2개의 물건이 C와 같다면
        {
            cout << "1";
            return;
        }
        else if(num > C) // 선택한 2개의 물건이 C보다 크다면 
        {
            hi--;
        }
        else
        {
            for(int i = lo + 1 ; v[i] <= C - num && i < hi; i++) // // 선택한 2개의 물건 + 1개의 물건이 hi와 다르고, 원하는 무게보다 작을떄
            {
                if(v[i] == C - num)
                {
                    cout << "1";
                    return;
                }
            }

            lo++;
        }
    } 
    
    cout << "0";
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