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

/* 1014번 컨닝
// 해설 : DP, 비트마스킹, DFS
// 참고 : https://suri78.tistory.com/282
// url : https://www.acmicpc.net/problem/1014

int N, M;
int bitMask[10][1 << 10];
char board[10][10];
int dfsArray[10];
vector<string> lines;

void setting()
{
    memset(bitMask, -1, sizeof(bitMask));
    memset(board, 0, sizeof(board));
    memset(dfsArray, 0, sizeof(dfsArray));
    lines.clear();
}

void dfs(int idx)
{
    if(idx == M)
    {
        string st;

        for(int a : dfsArray)
        {
            st += to_string(a);
        }

        lines.emplace_back(st);
        return;
    }

    dfsArray[idx] = 0;
    dfs(idx + 1);

    if(0 < idx && dfsArray[idx - 1] != 0)
        return;
    
    dfsArray[idx] = 1;
    dfs(idx + 1);
}

int dp(int lineNum, int prev_bit)
{
    if(lineNum == N)
        return 0;
    
    if(-1 < bitMask[lineNum][prev_bit])
        return bitMask[lineNum][prev_bit];

    int result = 0;

    for(auto line : lines)
    {
        int bits = 0;
        int cnt = 0;

        for(int i = 0 ; i < M ; i++)
        {
            if('0' == line[i])
                continue;
            
            if('x' == board[lineNum][i])
                continue;
            
            if(0 < i && prev_bit & (1 << (i - 1)))
                continue;
            
            if(i < M && prev_bit & (1 << (i + 1)))
                continue;
            
            cnt++;
            bits |= (1 << i);
        }

        result = max(result, dp(lineNum + 1, bits) + cnt);
    }

    bitMask[lineNum][prev_bit] = result;
    return result;
}

void solution()
{
    dfs(0);
    int answer = dp(0, 0);
    cout << answer << endl;
}

void input()
{
    int t;
    cin >> t;

    while(t--)
    {
        setting();
        cin >> N >> M;

        for(int i = 0 ; i < N ; i++)
        {
            for(int j = 0 ; j < M ; j++)
                cin >> board[i][j];
        }

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