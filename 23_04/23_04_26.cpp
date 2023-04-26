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

/* 15965번 K번째 소수
// 해설 : 에라토스테네스의 체
// url : https://www.acmicpc.net/problem/15965

int K;
vector<bool> prime_number;

void input()
{
    cin >> K;
}

void setting()
{
    prime_number.assign(10000000, false);

    for(int i = 2 ; i < sqrt(prime_number.size()) ; i++)
    {
        if(prime_number[i])
            continue;

        for(int j = i + i ; j <= prime_number.size() ; j += i)
        {
            prime_number[j] = true;
        }
    }
}

void solution()
{
    setting();

    int cnt = 0;

    for(int i = 2 ; i < prime_number.size() ; i++)
    {
        if(!prime_number[i])
            cnt++;

        if(cnt == K)
        {
            cout << i;
            break;
        }
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