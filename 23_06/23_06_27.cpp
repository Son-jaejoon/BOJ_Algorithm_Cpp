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

/* 4307번 개미
// 해설 : 구현
// url : https://www.acmicpc.net/problem/4307

int L, N;
vector<int> locations;

void solution();

void input()
{
    int T;
    cin >> T;

    while(T--)
    {
        cin >> L >> N;
        locations.assign(N, 0);

        for(int i = 0 ; i < N ; i++)
        {
            cin >> locations[i];
        }
        sort(locations.begin(), locations.end());
        solution();
    }
}

void solution()
{
    int mid = L / 2, min_answer = -1, max_answer = -1;

    for(auto curr_location : locations)
    {
        int min_length, max_length;

        if(curr_location < mid)
        {
            min_length = curr_location;
            max_length = L - curr_location;
        }    
        else
        {
            min_length = L - curr_location;
            max_length = curr_location;
        }

        min_answer = max(min_answer, min_length);
        max_answer = max(max_answer, max_length);
    }

    cout << min_answer << " " << max_answer << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/