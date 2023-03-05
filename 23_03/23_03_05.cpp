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

/* 1764번 듣보잡
// 해설 : set
// url : https://www.acmicpc.net/problem/1764

void input()
{
    int N, M;
    cin >> N >> M;

    set<string> not_hear;
    set<string> not_see_hear;

    for(int i = 0 ; i < N ; i++)
    {
        string st;
        cin >> st;
        not_hear.insert(st);
    }

    for(int i = 0 ; i < M ; i++)
    {
        string st;
        cin >> st;

        if(not_hear.find(st) != not_hear.end())
        {
            not_see_hear.insert(st);
        }
    }

    cout << not_see_hear.size() << endl;
    for(auto answer : not_see_hear)
        cout << answer << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/