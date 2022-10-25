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

/* 3197번 백조의 호수
// 해설 : BFS, UNION-FIND
// 참고 : https://akim9905.tistory.com/26

typedef struct 
{
    int x;
    int y;
} cord;

int R, C;
int parent[1502 * 1502];
int swan[2][2]; // 백조의 (x,y) 저장
char lake[1502][1502];
int lake_map[1502][1502];
int dirx[] = {-1, 1, 0, 0};
int diry[] = {0, 0, -1, 1};
queue<cord> q_Lake, q_Melt;

int Find(int x)
{
    if (parent[x] == x) 
        return x;
    
    return parent[x] = Find(parent[x]);
}

void Merge(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if (x == y) 
        return; //이미 같은 루트 노드 보유 중 Merge 필요 없음
    
    parent[x] = y;// merge 완료
}

bool inLake(int x, int y)
{
    if (0 <= x && x < R && 0 <= y && y < C) 
        return true;
    
    return false;
}

void bfs_merge()
{
    while (!q_Lake.empty())
    {
        int curx = q_Lake.front().x;
        int cury = q_Lake.front().y;
        
        q_Melt.push({curx, cury});
        q_Lake.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = curx + dirx[i];
            int ny = cury + diry[i];

            if (inLake(nx, ny))
            {
                if (lake_map[nx][ny] > 0 && lake_map[curx][cury] != lake_map[nx][ny])
                {
                    Merge(lake_map[nx][ny], lake_map[curx][cury]);
                }
            }
        }
    }
}

void bfs_melt()
{
    while (!q_Melt.empty())
    {
        int curx = q_Melt.front().x;
        int cury = q_Melt.front().y;
        q_Melt.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = curx + dirx[i];
            int ny = cury + diry[i];

            if (inLake(nx, ny))
            {
                if (lake_map[nx][ny] == 0)
                {
                    lake_map[nx][ny] = lake_map[curx][cury];
                    q_Lake.push({nx, ny});
                }
            }
        }
    }
}
int main()
{
    int idx = 0;
    int cnt = 1;
    
    scanf("%d %d", &R, &C);
    
    for (int i = 0; i < R; i++)
    {
        scanf("%s", lake[i]);
        for (int j = 0; j < C; j++)
        {
            if (lake[i][j] == 'L')
            {
                swan[idx][0] = i;
                swan[idx][1] = j;
                idx++;
            }
            if (lake[i][j] == 'L' || lake[i][j] == '.')
            {
                lake_map[i][j] = cnt;
                parent[cnt] = cnt;
                cnt++;
                q_Lake.push({i, j});
            }
        }
    }

    int ans = 0;
    while (true)
    {
        bfs_merge();
        if (Find(lake_map[swan[0][0]][swan[0][1]]) == Find(lake_map[swan[1][0]][swan[1][1]]))
        {
            printf("%d\n", ans);
            return 0;
        }
        
        bfs_melt();
        ans++;
    }
}