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

/* 18870번 좌표 압축
// 해설 : 좌표 압축
// url : https://www.acmicpc.net/problem/18870

int N;

vector<pair<int, int>> v, answer;

void input()
{
    cin >> N;

    int num;

    for(int i = 0 ; i < N ; i++)
    {
        cin >> num;

        v.emplace_back(make_pair(num, i));
    }
}

void solution()
{
    sort(v.begin(), v.end());

    answer.emplace_back(make_pair(v.front().second, 0));

    int cnt = 0;

    for(int i = 1 ; i < N ; i++)
    {
        if(v[i - 1].first == v[i].first)
        {
            answer.emplace_back(make_pair(v[i].second, cnt));
        }
        else
        {
            answer.emplace_back(make_pair(v[i].second, ++cnt));
        }
    }

    sort(answer.begin(), answer.end());

    for(auto i : answer)
    {
        cout << i.second << " ";
    }
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