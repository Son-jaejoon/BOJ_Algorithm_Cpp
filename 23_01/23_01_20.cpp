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

/* 2138번 전구와 스위치
// 해설 : 그리디
// url : https://www.acmicpc.net/problem/2138

int answer = 987654321;
int N;

string curr, tmp, want;

void input()
{
    cin >> N >> curr >> want;
}

void switch_on(int idx)
{
    if(idx > 0)
        tmp[idx - 1] = (tmp[idx - 1] == '0') ? '1' : '0';

    tmp[idx] = (tmp[idx] == '0') ? '1' : '0';

    if(idx < N - 1)
        tmp[idx + 1] = (tmp[idx + 1] == '0') ? '1' : '0';
}

void chk(int idx)
{
    tmp = curr;
    int cnt = 0;

    if(idx == 0)
    {
        tmp[0] = (tmp[0] == '0') ? '1' : '0';
        tmp[1] = (tmp[1] == '0') ? '1' : '0';
        cnt++;
    }

    for(int i = 1 ; i < N ; i++)
    {
        if(tmp[i - 1] != want[i - 1])
        {
            switch_on(i);
            cnt++;
        }
    }
    
    if(tmp == want)
        answer = min(answer, cnt);
}

void solution()
{
    chk(0);
    chk(1);
       
    if(answer == 987654321)
        cout << "-1" << endl;
    else
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