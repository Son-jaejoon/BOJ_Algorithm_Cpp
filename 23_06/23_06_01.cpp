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

/* 2002번 추월
// 해설 : 해쉬 맵, 구현
// url : https://www.acmicpc.net/problem/2002

int N;
map<string, int> start_car;
vector<int> end_car;

void input()
{
    cin >> N;
    
    string str;
    end_car.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> str;
        start_car[str] = i;
    }

    int val;

    for(int i = 0 ; i < N ; i++)
    {
        cin >> str;
        val = start_car[str];
        end_car[i] = val;
    }
}

void solution()
{
    int answer = 0;

    for(int i = 0 ; i < N - 1 ; i++)
    {
        for(int j = i + 1 ; j < N ; j++)
        {
            if(end_car[i] > end_car[j])
            {
                answer++;
                break;
            }
        }
    }

    cout << answer;
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