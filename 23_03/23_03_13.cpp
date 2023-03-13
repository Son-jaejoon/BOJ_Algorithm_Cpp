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

/* 9020번 골드바흐의 추측
// 해설 : 에라토스테네스의 체
// url : https://www.acmicpc.net/problem/9020

vector<int> save(10001, -1);

void solution(int num)
{
    for(int i = num / 2 ; i >= 0 ; i--)
    {
        int chk = true;

        if(save[i] != -1)
        {
            if(save[i] == 0)
                continue;
        }
        else
        {
            for(int j = 2 ; j * j <= i ; j++)
            {
                if(i % j == 0)
                {
                    save[i] = 0;
                    chk = false;
                    break;
                }
            }
        }

        if(!chk)
            continue;
        
        save[i] = 1;
        chk = true;
        int other_num = num - i;

        if(save[other_num] != -1)
        {
            if(save[other_num] == 0)
                continue;
        }
        else
        {   
            for(int j = 2 ; j * j <= other_num ; j++)
            {
                if(other_num % j == 0)
                {
                    save[other_num] = 0;
                    chk = false;
                    break;
                }
            }
        }

        if(!chk)
            continue;
        
        save[other_num] = 1;
        cout << i << " " << other_num << endl;
        break;
    }
}

void input()
{
    int T;
    cin >> T;

    while(T--)
    {
        int num;
        cin >> num;

        solution(num);
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