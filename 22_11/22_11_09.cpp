#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 1019번 책 페이지
// 해설 : 수학, 브루트포스로 계산 시 TLE가 걸리므로 수학적으로 계산하는 방법을 찾아야했음.
// 참고 : https://www.slideshare.net/Baekjoon/baekjoon-online-judge-1019?qid=9aa7818e-779e-499a-9c13-d2a5ac2ef8af&v=&b=&from_search=1

int N;
int MOD = 1000000000;
long long save[10];

void add(long long n, long long ten)
{
    while(n > 0)
    {
        save[n % 10] += ten;
        n /= 10;
    }
}

void calc(long long A, long long B, long long ten)
{
    while(A % 10 != 0 && A <= B)
    {
        add(A, ten);
        A++;
    }

    if(A > B)
        return;
    
    while(B % 10 != 9 && B >= A)
    {
        add(B, ten);
        B--;
    }

    long long cnt = (B / 10 - A / 10 + 1);

    for(int i = 0 ; i < 10 ; i++)
    {
        save[i] += cnt*ten;
    }

    calc(A / 10, B / 10, ten * 10);
}

void solution()
{
    calc(1, N, 1);

    for(int i = 0 ; i < 10 ; i++)
    {
        cout << save[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    solution();
}
*/