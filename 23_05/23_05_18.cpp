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

/* 12101번 1, 2, 3 더하기 2
// 해설 : 브루트포스, DFS
// url : https://www.acmicpc.net/problem/12101

int N, K;
int arr[3] = { 1, 2, 3 };
map<string, int> m;

void input()
{
    cin >> N >> K;
}

void dfs(string s, int sum)
{
    for(int i = 0 ; i < 3 ; i++)
    {
        sum += arr[i];

        if(sum > N)
            continue;
        else if(sum == N)
            m[s + to_string(arr[i])]++;
        else
            dfs(s + to_string(arr[i]) + "+", sum);
        
        sum -= arr[i];
    }
}

void solution()
{
    dfs("", 0);

    if(K > m.size())
    {
        cout << "-1" << endl;
        return;
    }

    int i = 0;

    for(auto ans : m)
    {
        i++;

        if(i == K)
        {
            cout << ans.first << endl;
            break;
        }    
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