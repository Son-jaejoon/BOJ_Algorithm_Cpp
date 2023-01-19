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

/* 1244번 스위치 켜고 끄기
// 해설 : 시뮬레이션, 구현, 실수하기 쉬움
// url : https://www.acmicpc.net/problem/1244

vector<bool> v;
vector<pair<int, int>> student;

void input()
{
    int N;
    cin >> N;
    v.assign(N + 1, false);

    for(int i = 1 ; i <= N ; i++)
    {
        int num;
        cin >> num;
        if(num)
            v[i] = true;
    }

    int t;
    cin >> t;

    for(int i = 0 ; i < t ; i++)
    {
        int a, b;
        cin >> a >> b;
        student.emplace_back(make_pair(a, b));
    }
}

void solution()
{
    for(int i = 0 ; i < student.size() ; i++)
    {
        int gender = student[i].first;
        int idx = student[i].second;

        if(gender == 1)
        {
            for(int j = idx ; j < v.size() ; j += idx)
            {
                v[j] = !v[j];
            }
        }
        else
        {
            v[idx] = !v[idx];
            int cnt = 1;

            while(1)
            {
                if(idx - cnt <= 0 || idx + cnt >= v.size())
                    break;
                
                if(v[idx - cnt] != v[idx + cnt])
                    break;
                
                v[idx - cnt] = !v[idx - cnt];
                v[idx + cnt] = !v[idx + cnt];

                cnt++;
            }
        }
    }
}

void print_answer()
{
    for(int i = 1 ; i < v.size() ; i++)
    {
        if(i != 1 && i % 20 == 1)
            cout << endl;
        
        if(v[i])
            cout << "1 ";
        else
            cout << "0 ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();
    print_answer();
}
*/