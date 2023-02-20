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

/* 20055번 컨베이어 벨트 위의 로봇
// 해설 : 구현
// url : https://www.acmicpc.net/problem/20055

int N, K;

deque<int> durability;
deque<bool> conveyer;

void input()
{
    cin >> N >> K;

    for(int i = 0 ; i < N * 2 ; i++)
    {
        int num;
        cin >> num;

        durability.emplace_back(num);
        conveyer.emplace_back(false);
    }
}

void rotate()
{
    conveyer.emplace_front(conveyer.back());
    conveyer.pop_back();

    durability.emplace_front(durability.back());
    durability.pop_back();

    conveyer[N - 1] = false;
}

void move()
{
    for(int i = N - 2 ; i >= 0 ; i--)
    {
        if(!conveyer[i] || conveyer[i + 1] || durability[i + 1] <= 0)
            continue;

        conveyer[i] = false;
        conveyer[i + 1] = true;
        durability[i + 1]--;
    }

    conveyer[N - 1] = false;
}

void robot_in()
{
    if(conveyer[0] || durability[0] <= 0)
        return;
    
    conveyer[0] = true;
    durability[0]--;
}

int check()
{
    int cnt = 0;

    for(int i = 0 ; i < N * 2 ; i++)
    {
        if(durability[i] == 0)
            cnt++;
    }

    return cnt;
}

void solution()
{
    int answer = 1;

    while(1)
    {
        rotate();
        move();
        robot_in();

        if(check() >= K)
        {
            break;
        }

        answer++;
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