#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#define endl "\n"

using namespace std;

/* 4485번 녹색 옷 입은 젤다
// 해설 : 다익스트라 알고리즘인데 DFS로 구현함
// 참고 : https://yabmoons.tistory.com/388

int N;
int cave[130][130];

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

int visited[130][130];
int ans;

void dfs()
{
    queue<pair<int, int>> q;
    q.emplace(make_pair(0, 0));
    visited[0][0] = cave[0][0];

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny >= 0 && nx >= 0 && ny < N && nx < N)
            {
                if(visited[ny][nx] > visited[y][x] + cave[ny][nx])
                {
                    visited[ny][nx] = visited[y][x] + cave[ny][nx];
                    q.emplace(make_pair(ny, nx));
                }
            }
        }
    }

    ans = visited[N-1][N-1];
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int time = 0;

    while (1)
    {
        scanf("%d", &N);

        if(N == 0)
            exit(0);

        time++;

        for(int i = 0; i < 130 ; i++)
        {
            for(int j = 0 ; j < 130 ; j++)
            {
                visited[i][j] = 987654321;
            }
        }

        for (int i = 0; i < N ; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> cave[i][j];
            }
        }

        dfs();
        cout << "Problem " << time << ": " << ans << endl;
        //printf("Problem %d: %d\n", time, ans);
    }
}
*/

/* 4991번 로봇 청소기
// 해설 : 어려움. 나중에 다시 풀어보자
//
int w,h,sy,sx,dy[4]={-1,1,0,0},dx[4]={0,0,1,-1};
char map[20][20];
bool visit[20][20][1<<10];
struct P{
    int y,x,b;
};
vector<P> info;

int getPos(int y,int x){
    for(int i=0;i<info.size();i++){
        if(info[i].y==y&&info[i].x==x) return i;
    }
    return 0;
}
int bfs(){
    memset(visit,0,sizeof(visit));
    queue<P> q;
    visit[sy][sx][0]=1;
    q.push({sy,sx,0});
    int ret = 0;
    while(!q.empty())
    {
        int qsz = q.size();
        while(qsz--)
        {
            P qf = q.front(); q.pop();

            if(qf.b==(1<<info.size())-1) 
                return ret;
            for(int i=0;i<4;i++){
                int ny = qf.y+dy[i],nx = qf.x+dx[i],bm = qf.b;
                if(ny < 0 || nx < 0 || ny >= h || nx >= w || map[ny][nx] == 'x') continue;
                if(map[ny][nx]=='*') bm |= (1<<getPos(ny,nx));
                if(!visit[ny][nx][bm]){
                    visit[ny][nx][bm] = 1;
                    q.push({ny,nx,bm});
                }
            }
        }
        ret++;
    }
    return -1;
}

int main(){
    while(1){
        scanf("%d%d",&w,&h);
        if(w==0) break;
        info.clear();
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                scanf(" %c",&map[i][j]);
                if(map[i][j]=='o'){
                    sy=i,sx=j;
                }else if(map[i][j]=='*'){
                    info.push_back({i,j,0});
                }
            }
        }
        printf("%d\n",bfs());
    }
}
*/

/* 17141번 연구소 2
// 해설 : 연구소 3이랑 비슷함

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};
vector<pair<int, int>> v;
bool select_virus[10] = {false, };

int N, M, all = 0;
int result = 5050;
int lab[50][50];
bool visit[50][50];
void bfs(int size)
{
    queue<pair<pair<int, int>, int>> q;
    memset(visit, false, sizeof(visit));
    int ans = 0;
    int chk = 0;

    for(int i = 0 ; i < size ; i++)
    {
        if(select_virus[i])
        {
            q.emplace(make_pair(make_pair(v[i].first, v[i].second), 0));
            visit[v[i].first][v[i].second] = true;
            chk++;
        }
    }

    while(!q.empty())
    {
        int y = q.front().first.first;
        int x = q.front().first.second;
        int cnt = q.front().second;
        q.pop();

        ans = max(ans, cnt);

        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny >= 0 && nx >= 0 && ny < N && nx < N)
            {
                if(!visit[ny][nx] && lab[ny][nx] != 1)
                {
                    visit[ny][nx] = true;
                    q.emplace(make_pair(make_pair(ny, nx), cnt + 1));
                    chk++;
                }
            }
        }
    }

    if(chk == all)
    {
        result = min(result, ans);
        return;
    }

}

void selectVirus(int idx, int cnt, int size)
{
    if(cnt == M)
    {
        bfs(size);
        return;
    }

    for(int i = idx ; i < size ; i++)
    {
        select_virus[i] = true;
        selectVirus(i + 1, cnt + 1, size);
        select_virus[i] = false;
    }
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            cin >> lab[i][j];
            if(lab[i][j] == 2)
            {
                v.emplace_back(make_pair(i, j));
                all++;
            }
            else if(lab[i][j] == 0)
            {
                all++;
            }
        }
    }

    selectVirus(0, 0, v.size());
    if(result == 5050)
    {
        cout << -1 << endl;
    }else
        cout << result << endl;
}
*/