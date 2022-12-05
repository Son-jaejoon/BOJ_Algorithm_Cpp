#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#define endl "\n"

using namespace std;

/* 13141번 Ignition
// 해설 : 플로이드 워셜, 모든 경로 계산 시 플로이드 워셜이 편하다.
// 모든 간선이 타야하는 게 핵심

struct info
{
    int S, E, L;
};

info create(int S, int E, int L)
{
    info n_info;

    n_info.S = S;
    n_info.E = E;
    n_info.L = L;

    return n_info;
}

int N, M;
double answer = 987654321;

vector<info> road;
vector<vector<int>> dist;
vector<int> fire;

void input();
void solution();
void floyd_warshall();
void ignition();
void print_answer();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();
}

void input()
{
    cin >> N >> M;

    dist.assign(N + 1, vector<int>(N + 1, 987654321));

    for(int i = 1 ; i <= N ; i++)
    {
        dist[i][i] = 0;
    }

    for(int i = 0 ; i < M ; i++)
    {
        int S, E, L;

        cin >> S >> E >> L;

        road.emplace_back(create(S, E ,L));

        dist[S][E] = min(dist[S][E], L);
        dist[E][S] = min(dist[E][S], L);
    }
}

void solution()
{
    floyd_warshall();
    ignition();
    print_answer();
}

void floyd_warshall()
{
    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= N ; j++)
        {
            for(int k = 1 ; k <= N ; k++)
            {
                if(dist[j][k] > dist[j][i] + dist[i][k])
                    dist[j][k] = dist[j][i] + dist[i][k];
            }
        }
    }
}

void ignition()
{
    for(int i = 1 ; i <= N ; i++)
    {
        fire.assign(N + 1, 0);

        double result = 0;

        for(int j = 1 ; j <= N ; j++)
        {
            fire[j] = dist[i][j];
        }

        for(int j = 0 ; j < road.size() ; j++)
        {
            int S = road[j].S;
            int E = road[j].E;
            int L = road[j].L;

            if((S != i) && (E != i))
            {
                L += min(fire[S], fire[E]);
            }

            double T1 = max(fire[S], fire[E]);
            double T2 = (double)(L - T1) / (double)2;

            if(T2 < 0)
                T2 = 0;
            
            double T = T1 + T2;

            result = max(result, T);
        }

        answer = min(answer, result);
    }
}

void print_answer()
{
    cout.precision(1);
    cout << fixed;

    cout << answer;
}

*/