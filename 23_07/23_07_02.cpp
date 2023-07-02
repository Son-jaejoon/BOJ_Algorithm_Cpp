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

/* 20529번 가장 가까운 세 사람의 심리적 거리
// 해설 : 브루트포스, 비둘기집 원리
// url : https://www.acmicpc.net/problem/20529

int N;
vector<string> friends;

void solution();

void input()
{
    int T;
    cin >> T;

    while(T--)
    {
        cin >> N;

        friends.assign(N, "");

        for(int i = 0 ; i < N ; i++)
        {
            cin >> friends[i];
        }

        if(N > 32)
        {
            cout << "0" << endl;
            continue;
        }

        solution();
    }
}

int calculate_distance(const string &a, const string &b)
{
    int distance = 0;

    for(int i = 0 ; i < 4 ; i++)
    {
        if(a[i] != b[i])
            distance += 1;
    }

    return distance;
}

void solution()
{
    int answer = 100;

    for(int i = 0 ; i < N - 2 ; i++)
    {
        for(int j = i + 1 ; j < N - 1 ; j++)
        {
            for(int k = j + 1 ; k < N ; k++)
            {
                answer = min(answer, calculate_distance(friends[i], friends[j]) + calculate_distance(friends[j], friends[k]) + calculate_distance(friends[k], friends[i]));
            }
        }
    }

    cout << answer << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/