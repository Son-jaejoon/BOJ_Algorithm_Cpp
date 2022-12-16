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

/* 5430번 AC
// 해설 : vector 대신 Deque를 쓰면 쉽게 해결(시간 문제)

void solution(string p, deque<int> dq)
{
    int num = 0;

    for(int i = 0 ; i < p.size() ; i++)
    {
        if(p[i] == 'R')
        {
            num++;
        }
        else
        {
            if(num % 2)
                dq.pop_back();
            else 
                dq.pop_front();
        }
    }

    cout << "[";

    if(num != 0 && num % 2 == 1)
    {
        for(int i = dq.size() - 1 ; i >= 0 ; i--)
        {
            if(i == 0)
            {
                cout << dq[i];
                break;
            }

            cout << dq[i] << ",";
        }   
    }
    else
    {
        for(int i = 0 ; i < dq.size() ; i++)
        {
            if(i == dq.size() - 1)
            {
                cout << dq[i];
                break;
            }

            cout << dq[i] << ",";
        }
    }

    cout << "]" << endl;
}

void input()
{
    int T;
    cin >> T;

    while(T--)
    {
        string p, arr;
        cin >> p;

        int n;
        
        deque<int> dq;

        cin >> n >> arr;

        if(count(p.begin(), p.end(), 'D') > n)
        {
            cout << "error" << endl;
            continue;
        }

        string num = "";

        for(int i = 1 ; i < arr.size() - 1 ; i++)
        {
            if('0' <= arr[i] && arr[i] <= '9')
                num += arr[i];
            else if(arr[i] == ',')
            {
                dq.emplace_back(stoi(num));
                num = "";
            }
        }

        if(dq.size() != n)
            dq.emplace_back(stoi(num));
        
        solution(p, dq);
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