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

/* 1620번 나는야 포켓몬 마스터 이다솜
// 해설 : 해시 맵
// url : https://www.acmicpc.net/problem/1620

int N, M;
map<string, string> dictionary;

void input()
{
    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++)
    {
        string st;
        cin >> st;

        dictionary.insert(make_pair(st, to_string(i)));
        dictionary.insert(make_pair(to_string(i), st));
    }

    for(int i = 0 ; i < M ; i++)
    {
        string st;
        cin >> st;

        cout << dictionary[st] << endl;
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