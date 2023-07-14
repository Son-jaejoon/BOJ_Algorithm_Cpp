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

/* 9205번 맥주 마시면서 걸어가기
// 해설 : BFS
// url : 

int N;
vector<pair<int, int>> positions;

void solution();

void input()
{
    int T;
    cin >> T;

    while(T--)
    {
        cin >> N;
        positions.assign(N + 2, make_pair(0, 0));

        for(int i = 0 ; i < N + 2 ; i++)
        {
            cin >> positions[i].first >> positions[i].second;
        }

        solution();
    }
}

void solution()
{
    vector<bool> visited(N + 2, false);
    queue<int> q;
    q.emplace(0);
    visited[0] = true;

    while(!q.empty())
    {
        int y = positions[q.front()].first;
        int x = positions[q.front()].second;
        q.pop();

        if(visited.back())
            break;
        
        for(int i = 0 ; i < positions.size() ; i++)
        {
            if(visited[i])
                continue;
            
            int next_y = positions[i].first;
            int next_x = positions[i].second;

            if(abs(next_y - y) + abs(next_x - x) > 1000)
                continue;
            
            visited[i] = true;
            q.emplace(i);
        }
    }

    if(visited.back())
        cout << "happy" << endl;
    else
        cout << "sad" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/