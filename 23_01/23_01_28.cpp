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

/* 18428번 감시 피하기
// 해설 : dfs
// url : https://www.acmicpc.net/problem/18428

int N;
bool answer = false;
vector<vector<bool>> board;
vector<vector<bool>> barricade;
vector<pair<int, int>> student;
vector<pair<int, int>> teacher;
vector<pair<int, int>> empty_place;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void input()
{
    cin >> N;

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            char ch;
            cin >> ch;

            if(ch == 'S')
                student.emplace_back(make_pair(i, j));
            else if(ch == 'T')
                teacher.emplace_back(make_pair(i, j));
            else 
                empty_place.emplace_back(make_pair(i, j));
        }
    }
}

void chk()
{
    for(auto tch : teacher)
    {
        for(int i = 0 ; i < 4 ; i++)
        {
            int y = tch.first;
            int x = tch.second;

            board[y][x] = true;

            while(1)
            {
                y += dy[i];
                x += dx[i];

                if(y < 0 || x < 0 || y >= N || x >= N)
                    break;
                
                if(barricade[y][x])
                    break;

                board[y][x] = true;
            }
        }
    }
}

void dfs(int idx, int cnt)
{
    if(answer)
        return;
    
    if(cnt == 3)
    {
        board.assign(N, vector<bool>(N, false));

        chk();

        for(auto stu : student)
        {
            int y = stu.first;
            int x = stu.second;

            if(board[y][x])
                return;
        }

        answer = true;
        return;
    }

    for(int i = idx ; i < empty_place.size() ; i++)
    {
        int y = empty_place[i].first;
        int x = empty_place[i].second;

        barricade[y][x] = true;
        dfs(i + 1, cnt + 1);
        barricade[y][x] = false;
    }
}

void solution()
{
    barricade.assign(N, vector<bool>(N, false));
    dfs(0, 0);

    if(answer)
        cout << "YES";
    else
        cout << "NO";
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