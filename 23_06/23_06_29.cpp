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

/* 1342번 행운의 문자열
// 해설 : 조합
// url : https://www.acmicpc.net/problem/1342

vector<char> v;

void input()
{
    string st;
    cin >> st;

    for(int i = 0 ; i < st.size() ; i++)
        v.emplace_back(st[i]);
}

void solution()
{
    sort(v.begin(), v.end());

    int answer = 0;
    bool chk = true;

    do
    {
        chk = true;

        for(int i = 0 ; i < v.size() - 1 ; i++)
        {
            if(v[i] == v[i + 1])
            {
                chk = false;
                break;
            }
        }

        if(chk)
            answer++;
    }
    while(next_permutation(v.begin(), v.end()));

    cout << answer;
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