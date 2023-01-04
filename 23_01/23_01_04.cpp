/* 9019¹ø DSLR
// ÇØ¼³ : BFS
// url : https://www.acmicpc.net/problem/9019

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

void solution(int num1, int num2)
{
    bool visited[10000] = {false, };
    visited[num1] = true;

    queue<pair<int, string>> q;
    q.emplace(make_pair(num1, ""));

    while(!q.empty())
    {
        int num = q.front().first;
        string st = q.front().second;
        q.pop();

        if(num == num2)
        {
            cout << st << endl;
            break;
        }

        //D
        int d = (num*2) % 10000;
        
        if(!visited[d])
        {
            visited[d] = true;
            q.emplace(make_pair(d, st + "D"));
        }

        int s = num - 1 < 0 ? 9999 : num - 1;
        
        if(!visited[s])
        {
            visited[s] = true;
            q.emplace(make_pair(s, st + "S"));
        }

        int l = (num % 1000) * 10 + (num / 1000);

        if(!visited[l])
        {
            visited[l] = true;
            q.emplace(make_pair(l, st + "L"));
        }

        int r = (num / 10) + (num % 10) * 1000;

        if(!visited[r])
        {
            visited[r] = true;
            q.emplace(make_pair(r, st + "R"));
        }
    }

}

void input()
{
    int T;
    cin >> T;

    while(T--)
    {
        int num1, num2;
        cin >> num1 >> num2;

        solution(num1, num2);
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