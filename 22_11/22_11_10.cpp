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

/* 11689번 GCD(n, k) = 1
// 해설 : GCD가 1인 것은 n,k가 서로소여야한다. 이는 오일러 파이 함수를 이용해
// n의 소인수를 구한 후 오일러 곱 등식을 이용한다.
// TLE를 받아 더 생각해보니, 소인수를 구할 때 에라토스테네스 체를 생각해 i*i 이후 number의 값이 1이 아니면
// 오일러 곱 등식을 이용해 주어서 TLE를 해결할 수 있었다.

long long N;

void solution()
{
    long long number = N;
    long long ans = N;

    vector<long long> v;

    for(long long i = 2 ; i*i <= number ; i++)
    {
        if(number % i == 0)
        {
            while(number % i == 0)
            {
                number /= i;
            }

            ans = ans*(1 - 1./i);
        }
    }

    if(number != 1)
    {
        ans = ans*(1 - 1./number);
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> N;
    
    solution();
}
*/