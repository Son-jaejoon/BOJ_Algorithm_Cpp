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

/* 16198번 에너지 모으기
// 해설 : DFS
// url : https://www.acmicpc.net/problem/16198

int N, answer;
vector<int> marble;

void input()
{
    cin >> N;
    marble.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> marble[i];
    }
}

void calculate(vector<int> energy, int &&sum)
{
    if(energy.size() == 2)
    {
        answer = max(answer, sum);
        return;
    }

    for(int i = 1 ; i < energy.size() - 1 ; i++)
    {
        int curr_power = energy[i];
        int get_power = energy[i - 1] * energy[i + 1];
        energy.erase(energy.begin() + i);
        calculate(energy, sum + get_power);
        energy.insert(energy.begin() + i, curr_power);
    }
}

void solution()
{
    calculate(marble, 0);    
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