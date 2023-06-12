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
#define prime_length 1300000

using namespace std;

/* 3896번 소수 사이 수열
// 해설 : 에라토스테네스의 체, 이분탐색
// url : https://www.acmicpc.net/problem/3896

bool prime[prime_length];
vector<int> prime_num;

void setting()
{
    for(int i = 2 ; i < prime_length ; i++)
    {
        if(prime[i])
            continue;

        prime_num.emplace_back(i);

        for(int j = i + i ; j < prime_length ; j += i)
        {
            prime[j] = true;
        }
    }
}

void input()
{
    int T;
    cin >> T;

    int num;

    while(T--)
    {
        cin >> num;
        
        if(!prime[num])
        {
            cout << "0" << endl;
            continue;
        }

        int idx = lower_bound(prime_num.begin(), prime_num.end(), num) - prime_num.begin();

        cout << prime_num[idx] - prime_num[idx - 1] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    setting();
    input();
}
*/