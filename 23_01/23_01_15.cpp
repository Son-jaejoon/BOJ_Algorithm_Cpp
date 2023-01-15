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

/* 2310번 어드벤처 게임
// 해설 : dfs, 구현
// 무한 반복이 발생할 줄 알았지만, "소지금이 일정 양이하로 떨어지지 않는다."라는 조건으로 인해 발생하지 않음.
// url : https://www.acmicpc.net/problem/2310

int N;

vector<pair<char, int>> room_name;
bool chk = false;

void solution(vector<int>* connect, vector<bool> &visited, int curr_idx, int money)
{
    if(chk)
        return;

    char room = room_name[curr_idx].first;
    int cost = room_name[curr_idx].second;
    
    if(room == 'L')
    {
        if(money < cost)
            money = cost;
    }
    else
    {
        if(money < cost)
            return;
        else
            money -= cost;
    }

    if(curr_idx == N)
    {
        chk = true;
        return;
    }

    for(int i = 0 ; i < connect[curr_idx].size() ; i++)
    {
        int next_idx = connect[curr_idx][i];

        if(visited[next_idx])
            continue;
        
        visited[next_idx] = true;
        solution(connect, visited, next_idx, money);
        visited[next_idx] = false;
    }
}

void input()
{
    while(1)
    {
        cin >> N;

        if(N == 0)
            break;

        chk = false;        
        room_name.clear();
        room_name.emplace_back(make_pair('E', 0));
        vector<int> connect[N + 1];
        connect[0].emplace_back(1);

        for(int i = 1 ; i <= N ; i++)
        {
            char ch;
            cin >> ch;

            int cost;
            cin >> cost;
            
            room_name.emplace_back(make_pair(ch, cost));

            int room;

            while(1)
            {
                cin >> room;
                
                if(room == 0)
                    break;
                
                connect[i].emplace_back(room);
            }
        }

        vector<bool> visited;
        visited.assign(N + 1, false);
        visited[0] = 0;

        solution(connect, visited, 0, 0);

        if(chk)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
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