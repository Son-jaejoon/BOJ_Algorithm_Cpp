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

/* 6588번 골드바흐의 추측
// 해설 : 에라토스테네스의 체, 시간초과를 막자.. 
// url : https://www.acmicpc.net/problem/6588

bool goldbach[1000000];

void Goldbach_setting()
{
    for(int i = 2 ; i*i <= 1000000 ; i++)
    {
        if(goldbach[i] == false)
        {
            for(int j = i*i ; j <= 1000000 ; j += i)
            {
                goldbach[j] = true;
            }
        }
    }
}

void input()
{
    int input;
    bool suc = false;

    Goldbach_setting();

    while(1)
    {
        suc = false;
        cin >> input;

        if(input == 0)
            break;

        for(int i = 3 ; i <= input / 2 ; i += 2)
        {
            if(goldbach[i] || goldbach[input - i])
                continue;
            
            cout << input << " = " << i << " + " << input - i << endl;
            suc = true;
            break;
        }

        if(!suc)
            printf("Goldbach's conjecture is wrong.\n");
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