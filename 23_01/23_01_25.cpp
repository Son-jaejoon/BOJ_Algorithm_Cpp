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

/* 11964번 Fruit Feast
// 해설 : BFS
// url : https://www.acmicpc.net/problem/11964

int T, A, B;

void input()
{
	cin >> T >> A >> B;
}

void solution()
{
    int answer = 0;
    
    queue<pair<int, bool>> q;
    q.emplace(make_pair(0, true));
    
    vector<vector<int>> visited;
    visited.assign(T + 1, vector<int>(2, 1));
    visited[0][1] = 0;
    
    while(!q.empty())
    {
        int fullness = q.front().first;
        bool water = q.front().second;
        q.pop();
        
        if(answer < fullness)
            answer = fullness;
        
        if(fullness + A <= T && visited[fullness + A][water])
        {
            visited[fullness + A][water] = 0;
            q.emplace(make_pair(fullness + A, water));
        }
        
        if(fullness + B <= T && visited[fullness + B][water])
        {
            visited[fullness + B][water] = 0;
            q.emplace(make_pair(fullness + B, water));
        }
        
        if(water && visited[fullness / 2][false])
        {
            visited[fullness / 2][false] = 0;
            q.emplace(make_pair(fullness / 2, false));   
        }
    }
    
    cout << answer << endl;
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