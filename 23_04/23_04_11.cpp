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

/* 11501번 주식
// 해설 : 그리디
// url : https://www.acmicpc.net/problem/11501

int N;
vector<int> v;

void solution()
{
    long long answer = 0;

    for(int i = N - 1 ; i >= 0 ; i--)
    {
        int curr_num = v[i];

        for(int j = i - 1 ; j >= 0 ; j--)
        {
            i = j;

            if(v[j] > curr_num)
            {
                i++;
                break;
            }
            
            answer += (curr_num - v[j]);
        }
    }

    cout << answer << endl;
}

void input()
{
    int T;
    cin >> T;

    while(T--)
    {
        cin >> N;
        v.assign(N, 0);

        for(int i = 0 ; i < N ; i++)
        {
            cin >> v[i];
        }

        solution();
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