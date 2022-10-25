#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 12851번 숨바꼭질 2
// 해설 : 왜 틀린걸까? +  visited를 pop 한 다음 바로 확인하고 도착지를 false로 해야 중복으로 셀 수 있다.
// 참고 : https://hwan-shell.tistory.com/284

int N, K;
int ans_time = 987654321;
int ans_cnt = 987654321;

int dx[] = {-1, 1, 2};
vector<bool> visited;

struct ct
{
    int current;
    int taken_time;
};

ct create(int current, int taken_time)
{
    ct n_ct;
    n_ct.current = current;
    n_ct.taken_time = taken_time;

    return n_ct;
}

bool chk(int current)
{
    if(N == 0)
    {
        if(current > K + 1)
            return false;
        else if(current < N)
            return false;
        
        return true;
    }
    else if(N < K)
    {
        if(current > K + 1)
            return false;
        else if(current < N - 1)
            return false;
        
        return true;
    }
    else if(N > K)
    {
        if(current > N)
            return false;
        else if(current < K)
            return false;
        
        return true;
    }

    return true;
}

void solution()
{
    queue<ct> q;
    q.emplace(create(N, 0));

    while(!q.empty())
    {
        int current = q.front().current;
        int taken_time = q.front().taken_time;
        q.pop();

        visited[current] = true;
        visited[K] = false;

        if(current == K)
        {
            if(taken_time < ans_time)
            {
                ans_time = taken_time;

                ans_cnt = 1;
            }
            else if(taken_time == ans_time)
            {
                ans_cnt++;
            }

            continue;
        }

        for(int i = 0 ; i < 3 ; i++)
        {
            int n_current = current + dx[i];
            int n_taken_time = taken_time + 1;

            if(i == 2)
                n_current = current*dx[i];

            if(!chk(n_current))
                continue;
            
            if(visited[n_current])
                continue;

            if(n_taken_time > 100000)
                continue;

            q.emplace(create(n_current, n_taken_time));
        }
    }

    cout << ans_time << endl << ans_cnt;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;
    visited.assign(max(N, K) + 2, false);

    solution();
}
*/