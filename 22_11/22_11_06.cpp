#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 2170번 선 긋기
// 해설 : 정렬 스위핑, 스위핑관련된 걸 처음 풀어봐서 이게 왜 스위핑이라고 하는진 모르겠다.

int N, ans;
vector<pair<int, int>> v;

void solution()
{
    sort(v.begin(), v.end());

    int curr_start = -1e9, curr_end = -1e9;

    for(int i = 0 ; i < N ; i++)
    {
        if(curr_end < v[i].first)
        {
            ans += curr_end - curr_start;
            curr_start = v[i].first;
            curr_end = v[i].second;
        }
        else if(curr_end < v[i].second)
        {
            curr_end = v[i].second;
        }
    }

    ans += curr_end - curr_start;

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    int s, e;
    for(int i = 0 ; i < N ; i++)
    {
        cin >> s >> e;

        v.emplace_back(make_pair(s, e));
    }

    solution();
}
*/

/* 13334번 철로
// 해설 : 벡터, 우선순위 큐, 스위핑, 우선순위 큐의 활용을 더 해봐야겠다..

int N, ans;
long long D;
vector<pair<long long, long long>> v;

bool cmp(pair<long long, long long> a, pair<long long, long long> b)
{
    if(a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

void solution()
{
    sort(v.begin(), v.end(), cmp);

    priority_queue<int> pq;

    for(int i = 0 ; i < v.size() ; i++)
    {
        int start = v[i].first;
        int end = v[i].second;

        if(end - start <= D)
            pq.push(-start);
        else
            continue;
        
        while(!pq.empty())
        {
            if(-pq.top() < end - D)
                pq.pop();
            else
            {
                ans = max(ans, (int)pq.size());
                break;
            }
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    
    long long hi, oi;

    for(int i = 0 ; i < N ; i++)
    {        
        cin >> hi >> oi;

        if(hi < oi)
            v.emplace_back(make_pair(hi, oi));
        else
            v.emplace_back(make_pair(oi, hi));
    }

    cin >> D;

    solution();
}
*/