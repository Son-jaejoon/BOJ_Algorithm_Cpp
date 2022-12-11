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

/* 2568번 전깃줄 - 2
// 해설 : LIS, 이진 탐색

int N, answer;
vector<pair<int, int>> v;
vector<bool> visited;

void input()
{
    cin >> N;

    for(int i = 0 ; i < N ; i++)
    {
        int first, second;

        cin >> first >> second;
        v.emplace_back(make_pair(first, second));
    }

    sort(v.begin(), v.end());
}

int binary_search(vector<pair<int, int>> save, int k)
{
    int first = 0;
    int last = save.size() - 1;

    while(first < last)
    {
        int mid = (first + last) / 2;

        if(save[mid].second < k)
            first = mid + 1;
        else
            last = mid;
    }

    return last;
}

void print_answer()
{
    cout << answer << endl;
    
    for(int i = 0 ; i < N ; i++)
    {
        if(!visited[i])
            cout << v[i].first << endl;
    }
}

void solution()
{
    vector<pair<int, int>> res;
    vector<int> rev(N, 0);

    res.emplace_back(v[0]);
    rev[0] = 1;

    visited.assign(N, false);

    for(int i = 1 ; i < v.size() ; i++)
    {
        if(res.back().second < v[i].second)
        {
            res.emplace_back(v[i]);
            rev[i] = res.size();
        }
        else
        {
            int idx = binary_search(res, v[i].second);
            res[idx] = v[i];
            rev[i] = idx + 1;
        }
    }

    int s = res.size();
    answer = N - s;

    for(int i = N - 1 ; i >= 0 && s ; i--)
    {
        if(s == rev[i])
        {
            visited[i] = true;
            s--;
        }
    }

    print_answer();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    input();
    solution();
}
*/