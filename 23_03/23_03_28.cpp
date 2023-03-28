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

/* 2477번 참외밭
// 해설 : 수학, 구현
// url : https://www.acmicpc.net/problem/2477https://www.acmicpc.net/problem/2477

int K;

vector<pair<int, int>> v;

int max_height, max_height_idx, max_base, max_base_idx;
int min_height = 987654321;
int min_base = 987654321;

void input()
{
    cin >> K;

    int dir = 0;
    int dist = 0;

    for(int i = 0 ; i < 6 ; i++)
    {
        cin >> dir >> dist;

        v.emplace_back(make_pair(dir, dist));

        if(max_base < dist && dir < 3)
        {
            max_base = dist;
            max_base_idx = i;
        }
        else if(max_height < dist && dir > 2)
        {
            max_height = dist;
            max_height_idx = i;
        }
    }
}

void solution()
{
    min_base = abs(v[((max_height_idx - 1 < 0) ? 5 : max_height_idx - 1)].second - v[((max_height_idx + 1 > 5) ? 0 : max_height_idx + 1)].second);
    min_height = abs(v[((max_base_idx - 1 < 0) ? 5 : max_base_idx - 1)].second - v[((max_base_idx + 1 > 5) ? 0 : max_base_idx + 1)].second);
    
    int area = (max_height * max_base) - (min_height * min_base);
    int answer = area * K;

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