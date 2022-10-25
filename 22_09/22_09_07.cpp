#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;
/* 16958번 텔레포트
// 해설 : 하나씩 훑으면서 텔레포트가 큰지 직접 가는 게 큰지 계산 + 플로이드 워셜 알고리즘 사용
// 참고 : https://yabmoons.tistory.com/276

int N, T, M;

struct syx
{
    int s;
    int x;
    int y;
};

syx create(int s, int x, int y)
{
    syx n_syx;

    n_syx.s = s;
    n_syx.x = x;
    n_syx.y = y;

    return n_syx;
}

vector<vector<int>> MAP;
vector<syx> city;
vector<pair<int, int>> input;

int dist(int x, int y, int nx, int ny)
{
    return (abs(x - nx) + abs(y - ny));
}

void solution()
{
    for(int i = 0 ; i < N ; i++)
    {
        int s = city[i].s;
        int x = city[i].x;
        int y = city[i].y;

        for(int j = 0 ; j < N ; j++)
        {
            if(i == j)
                continue;
            
            int diff;
            int ns = city[j].s;
            int nx = city[j].x;
            int ny = city[j].y;

            diff = dist(x, y, nx, ny);

            if(s == 1 && ns == 1)
            {
                if(diff > T)
                    diff = T;
            }

            MAP[i][j] = diff;
        }
    }

    for(int k = 0 ; k < N ; k++)
    {
        for(int i = 0 ; i < N ; i++)
        {
            for(int j = 0 ; j < N ; j++)
            {
                if(i == j)
                    continue;
                
                if(MAP[i][j] > MAP[i][k] + MAP[k][j])
                    MAP[i][j] = MAP[i][k] + MAP[k][j];
            }
        }
    }

    for(int i = 0 ; i < M ; i++)
    {
        int pos_1 = input[i].first;
        int pos_2 = input[i].second;

        cout << MAP[pos_1][pos_2] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> T;

    MAP.assign(N, vector<int>(N, 0));
    
    for(int i = 0 ; i < N ; i++)
    {
        int s, x, y;
        cin >> s >> x >> y;
        city.emplace_back(create(s, x, y));   
    }

    cin >> M;
    
    for(int i = 0 ; i < M ; i++)
    {
        int A, B;
        cin >> A >> B;
        input.emplace_back(make_pair(A - 1, B - 1));
    }

    solution();
}
*/