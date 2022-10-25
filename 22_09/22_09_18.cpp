#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 1695번 팰린드롬 만들기
// 해설 : DP인데 재귀로 만들어서 뭔가 어려움.
// 참고 : https://tinyurl.com/2htfhxq6

int N;
vector<int> arr;
vector<vector<int>> dp;

int solution(int s, int e)
{
    if(s >= e)
        return 0;
    
    if(dp[s][e] != -1)
        return dp[s][e];
    
    int cnt = 0;
    
    if(arr[s] == arr[e])
        cnt = solution(s + 1, e - 1);
    else
        cnt = min(solution(s, e - 1) + 1, solution(s + 1, e) + 1);
    
    return dp[s][e] = cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    
    arr.assign(N, 0);
    dp.assign(N, vector<int>(N, -1));

    for(int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }

    cout << solution(0, N - 1);
}
*/

/* 10942번 팰린드롬?
// 해설 : 팰린드롬의 범위를 생각해서 하나씩 하는것이 DP -> 처음에 1,2를 확인하는게 중요함.
//참고 : https://j3sung.tistory.com/107

int N, M;

vector<int> arr;
queue<pair<int, int>> question;
vector<vector<int>> chk;

void solution()
{
    for(int i = 1 ; i <= N ; i++)
    {
        chk[i][i] = 1;
        if(arr[i] == arr[i-1])
            chk[i - 1][i] = 1;
    }

    for(int i = 2 ; i < N ; i++) // 크기
    {
        for(int j = 1 ; j <= N - i ; j++) // 시작
        {
            int k = i + j; // 끝

            if(arr[j] == arr[k] && chk[j + 1][k - 1] == 1) // 양 끝이 같고, 사이가 팰린드롬이면
                chk[j][k] = 1;
        }
    }

    while(!question.empty())
    {
        int s = question.front().first;
        int e = question.front().second;
        question.pop();

        cout << chk[s][e] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    arr.assign(N + 1, 0);
    chk.assign(N + 1, vector<int>(N + 1, 0));

    for(int i = 1 ; i <= N ; i++)
    {
        cin >> arr[i];
    }

    cin >> M;

    for(int i = 0 ; i < M ; i++)
    {
        int s, e;
        cin >> s >> e;
        question.emplace(make_pair(s, e));
    }

    solution();
}
*/