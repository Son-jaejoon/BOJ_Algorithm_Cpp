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

/* 1713번 후보 추천하기
// 해설 : 구현, 오랜만에 정렬이랑 map 쓰는 문제라 재밌었다.
// url : https://www.acmicpc.net/problem/1713

int N, T, order;
map<int, pair<int, int>> card;

bool cmp(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
{
    if(a.second.first == b.second.first)
        return a.second.second < b.second.second;
    
    return a.second.first < b.second.first;
}

void solution(int &idx)
{
    if (card.find(idx) != card.end())
    {
        card[idx].first += 1;
    }
    else
    {
        if (card.size() < N)
        {
            card.insert(make_pair(idx, make_pair(1, order)));
            order++;
        }
        else
        {
            vector<pair<int, pair<int, int>>> v(card.begin(), card.end());
            sort(v.begin(), v.end(), cmp);

            card.erase(v.front().first);
            card.insert(make_pair(idx, make_pair(1, order)));
            order++;
        }
    }
}

void input()
{
    cin >> N >> T;

    int idx;

    while (T--)
    {
        cin >> idx;
        solution(idx);
    }
}

void print()
{
    for(auto it : card)
    {
        cout << it.first << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    print();
}
*/