#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#define endl "\n"

using namespace std;

/* 16936번 나3곱2
// 해설 : 하나씩 맨 앞으로 한 다음 곱해서 같은 경우 생기면 출력 후 프로그램 종료

int N;
vector<long long> B;
vector<long long> A;
bool visited[101];

void solution(int idx)
{
    if(idx == N)
    {
        for(int i = 0 ; i < N ; i++)
        {
            if(i != N - 1)
                cout << A[i] << " ";
            else
                cout << A[i];
        }
        exit(0);
    }
    
    for(int i = 0 ; i < N ; i++)
    {
        if(!visited[i])
        {
            if(A[idx - 1] * 2 == B[i])
            {
                visited[i] = true;
                A[idx] = A[idx - 1] * 2;
                solution(idx + 1);
                visited[i] = false;
            }

            if(A[idx - 1]%3 == 0 && A[idx - 1]/3 == B[i])
            {
                visited[i] = true;
                A[idx] = A[idx - 1]/3;
                solution(idx + 1);
                visited[i] = false;
            }
        }
    }
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    A.assign(N, 0);
    B.assign(N, 0);
    
    for(int i = 0 ; i < N ; i++)
    {
        long long tmp;
        cin >> tmp;
        B[i] = tmp;
    }

    for(int i = 0 ; i < N ; i++)
    {
        A[0] = B[i];
        visited[i] = true;
        solution(1);
        visited[i] = false;
    }
}
*/

/* 17089번 세 친구
// 해설 : 3명을 구하고 함수에 넣어서 최소 친구 수 출력, if문으로 시간 복잡도 줄여야함.

int N, M;
vector<vector<int>> friends;

struct abc
{
    int A;
    int B;
    int C;
};

abc create(int a, int b, int c)
{
    abc tmp_abc;
    tmp_abc.A = a;
    tmp_abc.B = b;
    tmp_abc.C = c;

    return tmp_abc;
}

vector<abc> ABC;
int ans = 987654321;

void solution(int a, int b, int c)
{
    int A_cnt = -2;
    int B_cnt = -2;
    int C_cnt = -2;

    for(int i = 1 ; i <= N ; i++)
    {
        if(friends[a][i] == 1)
            A_cnt++;
    }

    for(int i = 1 ; i <= N ; i++)
    {
        if(friends[b][i] == 1)
            A_cnt++;
    }

    for(int i = 1 ; i <= N ; i++)
    {
        if(friends[c][i] == 1)
            A_cnt++;
    }

    int sum = A_cnt + B_cnt + C_cnt;
    ans = min(ans, sum);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    friends.assign(N + 1, vector<int>(N + 1, 0));
    for(int i = 0 ; i < M ; i++)
    {
        int A, B;
        cin >> A >> B;

        friends[A][B] = 1;
        friends[B][A] = 1;
    }

    for(int i = 1 ; i <= N - 2 ; i++)
    {
        for(int j = i + 1 ; j <= N - 1 ; j++)
        {
            if(friends[i][j] == 0)
                continue;
            
            for(int k = j + 1 ; k <= N ; k++)
            {
                if(friends[i][k] == 1 && friends[j][k] == 1)
                {
                    ABC.emplace_back(create(i, j, k));
                }
            }
        }
    }

    if(ABC.empty())
        cout << -1;
    else
    {
        for(int i = 0 ; i < ABC.size() ; i++)
        {
            solution(ABC[i].A, ABC[i].B, ABC[i].C);
        }

        cout << ans;    
    }
}
*/