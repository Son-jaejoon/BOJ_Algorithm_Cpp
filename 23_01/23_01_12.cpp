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

/* 2667번 단지번호붙이기
// 해설 : BFS
// url : https://www.acmicpc.net/problem/2667

int N;
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

vector<vector<int>> house_map;
vector<pair<int, int>> house;
vector<vector<bool>> visited;

void input()
{
    cin >> N;
    house_map.assign(N, vector<int>(N, 0));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            char ch;
            cin >> ch;

            if(ch == '1')
            {
                house_map[i][j] = 1;
                house.emplace_back(make_pair(i, j));
            }
        }
    }
}

int house_connect(int first_y, int first_x)
{
    int result = 1;

    queue<pair<int, int>> q;
    q.emplace(make_pair(first_y, first_x));

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= N || nx >= N)
                continue;
            
            if(house_map[ny][nx] == 0)
                continue;
            
            if(visited[ny][nx])
                continue;
            
            visited[ny][nx] = true;
            result++;

            q.emplace(make_pair(ny, nx));
        } 
    }

    return result;
}

void solution()
{
    vector<int> answer;

    visited.assign(N, vector<bool>(N, false));

    for(int i = 0 ; i < house.size() ; i++)
    {
        int y = house[i].first;
        int x = house[i].second;

        if(visited[y][x])
            continue;
        
        visited[y][x] = true;
        answer.emplace_back(house_connect(y, x));
    }

    sort(answer.begin(), answer.end());

    cout << answer.size() << endl;
    for(auto num : answer)
    {
        cout << num << endl;
    }
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