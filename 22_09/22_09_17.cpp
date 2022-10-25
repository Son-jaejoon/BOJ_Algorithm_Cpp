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

/* 12026번 BOJ 거리
// 해설 : 작으면 저장

int N;
string st;
vector<int> energy;

void solution()
{
    for(int i = 0 ; i < N ; i++)
    {
        int cur_energy = energy[i];

        if(st[i] == 'B')
        {
            for(int j = i + 1 ; j <= N ; j++)
            {
                if(st[j] == 'O')
                {
                    int next_energy = energy[i] + (j - i)*(j - i);

                    if(energy[j] > next_energy)
                        energy[j] = next_energy;
                }
            }
        }
        else if(st[i] == 'O')
        {
            for(int j = i + 1 ; j <= N ; j++)
            {
                if(st[j] == 'J')
                {
                    int next_energy = energy[i] + (j - i)*(j - i);

                    if(energy[j] > next_energy)
                        energy[j] = next_energy;
                }
            }
            
        }
        else if(st[i] == 'J')
        {
            for(int j = i + 1 ; j <= N ; j++)
            {
                if(st[j] == 'B')
                {
                    int next_energy = energy[i] + (j - i)*(j - i);

                    if(energy[j] > next_energy)
                        energy[j] = next_energy;
                }
            }

        }
    }

    if(energy[N - 1] == 987654321)
        cout << -1;
    else
        cout << energy[N - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> st;
    energy.assign(N, 987654321);

    energy[0] = 0;
    solution();
}
*/

/*
int N, M;

void solution(int N, int M)
{
    cout << N*M - 1;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    solution(N, M);
}
*/