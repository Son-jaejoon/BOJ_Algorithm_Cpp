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

/* 2630번 색종이 만들기
// 해설 : 재귀, 구현

int N;
pair<int, int> answer;
vector<vector<int>> v;

void input()
{
    cin >> N;
    v.assign(N, vector<int>(N, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cin >> v[i][j];
        }
    }
}

void solution(int y, int x, int size)
{
    int curr_num = v[y][x];

    for(int i = y ; i < y + size ; i++)
    {
        for(int j = x ; j < x + size ; j++)
        {
            if(curr_num != 2 && curr_num != v[i][j])
                curr_num = 2;
            
            if(curr_num == 2)
            {
                solution(y, x, size / 2);
                solution(y, x + size / 2, size / 2);
                solution(y + size / 2 , x, size / 2);
                solution(y + size / 2, x + size / 2 , size / 2);
                return;
            }
        }
    }

    if(curr_num == 0)
        answer.first++;
    else
        answer.second++;
}

void print_answer()
{
    cout << answer.first << endl << answer.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution(0, 0, N);
    print_answer();
}
*/