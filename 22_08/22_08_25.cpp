#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#define endl "\n"

using namespace std;

/* 17088번 등차수열 변환
// 해설 : 왜 안될까?

long long N;
int ans = 987654321;

vector<long long> A;
vector<long long> B;

void solution(int idx, int cnt)
{
    long long diff = A[2] - A[1];
    
    if(idx <= 2)
    {
        A[idx] = B[idx];
        solution(idx + 1, cnt);

        A[idx] = B[idx] + 1;
        solution(idx + 1, cnt + 1);

        A[idx] = B[idx] - 1;
        solution(idx + 1, cnt + 1);

        A[idx] = B[idx];
    }
    else if(idx >= 3 && idx <= N)
    {
        if(diff == A[idx] - A[idx - 1])
            solution(idx + 1, cnt);
        else
        {
            if(B[idx] - 1 - A[idx - 1] == diff)
            {
                A[idx] = B[idx] - 1;
                solution(idx + 1, cnt + 1);
            }
            else if(B[idx] + 1 - A[idx - 1]== diff)
            {
                A[idx] = B[idx] + 1;
                solution(idx + 1, cnt + 1);
            }
        }

        A[idx] = B[idx];
    }
    else if(idx == N + 1)
    {
        if(diff == A[N] - A[N - 1])
        {
            if(cnt == 0)
            {
                cout << 0;
                exit(0);
            }
            else
            {
                ans = min(ans, cnt);
            }
        }

        A[N] = B[N];
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    B.assign(N + 1, 0);
    A.assign(N + 1, 0);

    for (int i = 1; i <= N; i++)
    {
        cin >> B[i];
        A[i] = B[i];
    }

    if (N == 2)
    {
        if (B[1] == B[2])
        {
            cout << 0;
            exit(0);
        }
        else if (B[1] + 1 == B[2] || B[1] - 1 == B[2] || B[1] == B[2] + 1 || B[1] == B[2] - 1)
        {
            cout << 1;
            exit(0);
        }
        else if (B[1] + 1 == B[2] - 1 || B[1] + 1 == B[2] + 1 ||
                 B[1] - 1 == B[2] + 1 || B[1] - 1 == B[2] - 1 ||
                 B[1] - 1 == B[2] + 1 || B[1] + 1 == B[2] + 1 ||
                 B[1] - 1 == B[2] - 1 || B[1] + 1 == B[2] - 1)
        {
            cout << 2;
            exit(0);
        }
        else
        {
            cout << -1;
            exit(0);
        }
    }
    solution(1, 0);

    if (ans == 987654321)
        cout << -1;
    else
        cout << ans;
}
*/

/* 16938번 캠프 준비
// 해설 : N과 M의 응용, 벡터의 최대 최소 값을 찾아서 구하는 것이 핵심

int N, ans;
long long L, R, X;

vector<long long> arr;
vector<long long> difficulty;
bool visited[15];

void solution(int idx, int cnt)
{
    if(cnt >= 2)
    {
        long long min_exam = *min_element(arr.begin(), arr.begin() + cnt);
        long long max_exam = *max_element(arr.begin(), arr.begin() + cnt);

        if(max_exam - min_exam >= X)
        {
            long long sum = 0;

            for(int i = 0 ; i < cnt ; i++)
            {
                sum += arr[i];
            }

            if(sum >= L && sum <= R)
            {
                ans++;
            }
        }
    }

    if(cnt == N)
        return;

    for(int i = idx ; i <= N ; i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            arr[cnt] = difficulty[i];
            solution(i + 1, cnt + 1);
            visited[i] = false;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> L >> R >> X;

    difficulty.assign(N + 1, 0);
    arr.assign(N, 0);

    for(int i = 1 ; i <= N ; i++)
    {
        cin >> difficulty[i];
    }

    solution(1, 0);

    cout << ans;
}
*/