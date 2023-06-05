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

/* 10166번 관중석
// 해설 : 구현, 관중석을 자릿수로 나눴을 때 나오는 각도(기약분수)를 저장하기
// url : https://www.acmicpc.net/problem/10166

int D1, D2, answer;
bool chk[2001][2001];

void input()
{
    cin >> D1 >> D2;
}

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    
    return gcd(b, a%b);
}

void solution()
{
    for(int i = D1 ; i <= D2 ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            int t = gcd(i, j);
            
            if(chk[j/t][i/t])
                continue;
            
            chk[j/t][i/t] = true;
            answer++;
        }
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