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

/* 7562번 나이트의 이동
// 해설 : BFS
// url : https://www.acmicpc.net/problem/7562

int l, night_y, night_x, arrive_y, arrive_x;
vector<vector<bool>> visited;

int dy[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dx[] = {-1, 1, -2, 2, -2, 2, -1, 1};

struct info
{
    int y, x, cnt;
};

info create(int y, int x, int cnt)
{
    info n_info;
    n_info.y = y;
    n_info.x = x;
    n_info.cnt = cnt;

    return n_info;
}

void solution()
{
    int answer = 987654321;

    queue<info> q;
    q.emplace(create(night_y, night_x, 0));
    visited[night_y][night_x] = true;

    while(!q.empty())
    {
        int y = q.front().y;
        int x = q.front().x;
        int cnt = q.front().cnt;
        q.pop();

        if(y == arrive_y && x == arrive_x)
        {
            answer = min(answer, cnt);
            continue;
        }

        for(int dir = 0 ; dir < 8 ; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if(ny < 0 || nx < 0 || ny >= l || nx >= l)
                continue;
            
            if(visited[ny][nx])
                continue;
            
            visited[ny][nx] = true;
            q.emplace(create(ny, nx, cnt + 1));
        }
    }
    
    cout << answer << endl;
}

void input()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        cin >> l;
        visited.assign(l, vector<bool>(l, false));

        cin >> night_y >> night_x;
        cin >> arrive_y >> arrive_x;

        solution();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/