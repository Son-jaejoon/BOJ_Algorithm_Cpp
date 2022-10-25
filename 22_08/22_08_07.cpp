#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#define endl "\n"

using namespace std;

/* 6087번 레이저 통신
// 해설 : 방향이 다르면 + 1, 저장된 거울 갯수가 더 크면 값 저장
int W, H;
vector<vector<char>> razer;
vector<vector<int>> visit;
vector<pair<int, int>> save;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void bfs(int a, int b, int cnt)
{
    queue<pair<pair<int, int>, pair<int, int>>> q;
    for(int i = 0 ; i < 4 ; i++)
    {
        q.emplace(make_pair(make_pair(a, b), make_pair(cnt, i)));
    }
    visit[a][b] = 0;

    while(!q.empty())
    {
        int y = q.front().first.first;
        int x = q.front().first.second;
        int mirror = q.front().second.first;
        int dir = q.front().second.second;
        q.pop();

        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            int n_mirror = mirror;

            if(ny >= 0 && nx >= 0 && ny < H && nx < W)
            {
                if(razer[ny][nx] != '*')
                {
                    if(dir != i)
                    {
                        n_mirror = n_mirror + 1;
                    }
                    if(visit[ny][nx] >= n_mirror)
                    {
                        visit[ny][nx] = n_mirror;
                        q.emplace(make_pair(make_pair(ny, nx), make_pair(n_mirror, i)));
                    }
                }
            }
        }
    }
    cout << visit[save[1].first][save[1].second] << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> W >> H;
    razer.assign(H, vector<char>(W, 0));
    visit.assign(H, vector<int>(W, 987654321));

    for(int i = 0 ; i < H ; i++)
    {
        string st;
        cin >> st;
        
        for(int j = 0 ; j < W ; j++)
        {
            razer[i][j] = st[j];
            if(razer[i][j] == 'C')
                save.emplace_back(make_pair(i, j));
        }
    }

    bfs(save[0].first, save[0].second, 0);
}