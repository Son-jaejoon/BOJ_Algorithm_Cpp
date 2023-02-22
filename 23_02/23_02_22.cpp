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

/* 17219번 비밀번호 찾기
// 해설 : map
// url : https://www.acmicpc.net/problem/17219

int N, M;
vector<string> find_password;
map<string, string> save;

void input()
{
    cin >> N >> M;

    for(int i = 0 ; i < N ; i++)
    {
        string url, password;

        cin >> url >> password;
        save.insert({url, password});
    }

    find_password.assign(M, "");

    for(int i = 0 ; i < M ; i++)
    {
        cin >> find_password[i];
    }
}

void solution()
{
    for(int i = 0 ; i < M ; i++)
    {
        cout << save[find_password[i]] << endl;
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