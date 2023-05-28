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

/* 2841번 외계인의 기타 연주
// 해설 : 스택, 구현
// url : https://www.acmicpc.net/problem/2841

int N, P, answer;
stack<int> line[7];

void solution(const int &line_idx, const int &fret_idx)
{
    if(line[line_idx].empty())
    {
        line[line_idx].emplace(fret_idx);
        answer++;
    }
    else if(line[line_idx].top() < fret_idx)
    {
        line[line_idx].emplace(fret_idx);
        answer++;
    }
    else if(line[line_idx].top() > fret_idx)
    {
        while(line[line_idx].top() > fret_idx)
        {
            line[line_idx].pop();
            answer++;

            if(line[line_idx].empty())
            {
                line[line_idx].emplace(fret_idx);
                answer++;
                break;
            }
        }

        if(line[line_idx].top() < fret_idx)
        {
            line[line_idx].emplace(fret_idx);
            answer++;
        }
    }
}

void input()
{
    cin >> N >> P;

    int a, b;

    while(N--)
    {
        cin >> a >> b;
        solution(a, b);
    }
}

void print()
{
    cout << answer;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    print();
}
*/