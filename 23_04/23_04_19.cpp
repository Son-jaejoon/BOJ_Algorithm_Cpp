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

/* 12891번 DNA 비밀번호
// 해설 : 슬라이딩 윈도우(투 포인터)
// url : https://www.acmicpc.net/problem/12891

int S, P;
string DNA;
int need_password[4];
map<char, int> mp;

void input()
{
    cin >> S >> P >> DNA;

    for(int i = 0 ; i < 4 ; i++)
    {
        cin >> need_password[i];
    }
}

bool chk()
{
    return (mp['A'] >= need_password[0] && mp['C'] >= need_password[1] && mp['G'] >= need_password[2] && mp['T'] >= need_password[3]);
}

void solution()
{
    int answer = 0;

    int lo = 0;
    int hi = P - 1;

    mp['A'] = 0;
    mp['C'] = 0;
    mp['G'] = 0;
    mp['T'] = 0;

    for(int i = lo ; i <= P - 1 ; i++)
    {
        mp[DNA[i]]++;
    }

    while(hi < S)
    {
        if(chk())
            answer++;

        mp[DNA[lo++]]--;
        mp[DNA[++hi]]++;
    }

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