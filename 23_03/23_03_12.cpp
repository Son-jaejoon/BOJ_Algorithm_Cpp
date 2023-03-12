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

/* 4948번 베르트랑 공준
// 해설 : 소수 판정, 에라토스테네스의 체
// url : https://www.acmicpc.net/problem/4948

vector<int> prime_num;

void setting()
{
    prime_num.assign(123456*2 + 1, 0);

    for(int i = 2 ; i <= prime_num.size() ; i++)
    {
        bool chk = true;

        for(int j = 2 ; j * j <= i ; j++)
        {
            if(i % j == 0)
            {
                chk = false;
                break;
            }
        }

        if(chk)
            prime_num[i] = prime_num[i - 1] + 1;
        else
            prime_num[i] = prime_num[i - 1];
    }
}

void input()
{
    setting();

    while(1)
    {
        int num;
        cin >> num;
        
        if(num == 0)
            break;
        
        int answer = prime_num[num * 2] - prime_num[num];
        cout << answer << endl;
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