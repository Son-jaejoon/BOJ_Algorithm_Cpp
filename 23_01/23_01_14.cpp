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

/* 14466번 소가 길을 건너간 이유 6
// 해설 : BFS, SET, 구현
// url : https://www.acmicpc.net/problem/14466

int N, K, R;
vector<pair<int, int>> cow;
set<pair<int, int>> st[101][101];

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> N >> K >> R;

    for(int i = 0 ; i < R ; i++)
    {
        int r_1, c_1, r_2, c_2;

        cin >> r_1 >> c_1 >> r_2 >> c_2;
        st[r_1][c_1].insert(make_pair(r_2, c_2));
        st[r_2][c_2].insert(make_pair(r_1, c_1));
    }

    for(int i = 0 ; i < K ; i++)
    {
        int y, x;

        cin >> y >> x;
        cow.emplace_back(make_pair(y, x));
    }
}

int can_meet(int first_cow_y, int first_cow_x, int second_cow_y, int second_cow_x)
{
    vector<vector<bool>> visited;
    visited.assign(N + 1, vector<bool>(N + 1, false));

    queue<pair<int, int>> q;
    q.emplace(make_pair(first_cow_y, first_cow_x));
    visited[first_cow_y][first_cow_x] = true;

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        if(y == second_cow_y && x == second_cow_x)
            return 0;
        
        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 1 || nx < 1 || ny > N || nx > N)
                continue;
            
            if(visited[ny][nx])
                continue;

            if(st[y][x].count(make_pair(ny, nx)))
                continue;
            
            visited[ny][nx] = true;
            q.emplace(make_pair(ny, nx));
        }
    }

    return 1;
}

void solution()
{
    int answer = 0;

    for(int i = 0 ; i < cow.size(); i++)
    {
        int first_cow_y = cow[i].first;
        int first_cow_x = cow[i].second;

        for(int j = i + 1 ; j < cow.size() ; j++)
        {
            int second_cow_y = cow[j].first;
            int second_cow_x = cow[j].second;

            answer += can_meet(first_cow_y, first_cow_x, second_cow_y, second_cow_x);
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