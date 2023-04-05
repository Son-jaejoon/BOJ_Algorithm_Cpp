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

/* 1138번 한 줄로 서기
// 해설 : 구현
// url : https://www.acmicpc.net/problem/1138

int N;
vector<int> v;

void input()
{
    cin >> N;
    v.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }
}

void solution()
{
    vector<int> answer(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            if(v[i] == 0 && answer[j] == 0)
            {
                answer[j] = i + 1;
                break;
            }
            else if(answer[j] == 0)
            {
                v[i]--;
            }
        }
    }

    for(int idx : answer)
        cout << idx << " ";
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