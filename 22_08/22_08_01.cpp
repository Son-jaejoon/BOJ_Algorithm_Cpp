#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>

/* 12886번 돌 그룹
// 해설 : 합계가 3으로 나눠지는것
// 참고: https://comyoung.tistory.com/245

using namespace std;

int A, B, C, SUM;
bool visit[1501][1501];
 
int main() {
    scanf("%d %d %d", &A, &B, &C);
    SUM = A + B + C;
 
    if (SUM % 3 != 0) {//A,B,C 똑같이 공평하게 분배 불가능 하면 바로 0 return
        printf("0\n");
        return 0;
    }
 
    queue<pair<int,int>> qu;
    qu.push({ A,B });
    visit[A][B] = true;
    int a, b;
 
    while (!qu.empty())
    {
        a = qu.front().first;
        b = qu.front().second;
        //3개 돌의 개수저장하는 temp
        int temp[3] = { a, b, SUM - a - b }; // c = sum - a - b
        qu.pop();
        
        for (int i = 0; i < 3; i++) {//3개의 수로 가능한 조합 
            for (int j = 0; j < 3; j++) {
                
                if (temp[i] < temp[j]) {
                    int num1 = temp[i] * 2;
                    int num2 = temp[j] - temp[i];
                    if (visit[num1][num2]) continue;
 
                    visit[num1][num2] = true;
                    qu.push({ num1,num2 });
                }
            }
        }
    }
    printf("%d\n", visit[SUM / 3][SUM / 3]);
    return 0;
}
*/

/* 17142번 연구소 3
// 해설 : bfs와 횟수를 구하는 재귀를 합친 문제
// 벡터로 모든 활성바이러스의 위치를 저장한 후 size를 구해 for문을 통해 원하는 갯수가 되었을시
// 해당 부분을 true로 바꿔 bfs로 보내 chk하는 것이 핵심
// 참고 : https://codingwell.tistory.com/56

using namespace std;

int n, m, secureCnt = 0, result = 2500;
int lab[50][50] = {0, };
int visited[50][50];
int dx[4] = {0, -1, 0, 1}, dy[4] = {1, 0, -1, 0};
bool virus_visited[10] = {false, };
vector<pair<int, int>> virus;

void bfs(int size)
{
    queue<pair<int, int>> q;
    memset(visited, -1, sizeof(visited));

    for (int i = 0; i < size; i++)
    {
        if (virus_visited[i])
        {
            q.push({virus[i].first, virus[i].second});
            visited[virus[i].first][virus[i].second] = 0;
        }
    }

    int cnt = 0, time = 0;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                continue;
            if (lab[nx][ny] != 1 && visited[nx][ny] == -1)
            {
                q.push({nx, ny});
                visited[nx][ny] = visited[x][y] + 1;
                if (lab[nx][ny] == 0)
                {
                    cnt++;
                    time = visited[nx][ny];
                }
            }
        }
    }
    if (cnt == secureCnt)
        result = min(result, time);
}

void selectVirus(int index, int cnt, int size)
{
    if (cnt == m)
    {
        bfs(size);
        return;
    }
    
    for (int i = index; i < size; i++)
    {
        if (!virus_visited[i])
        {
            virus_visited[i] = true;
            selectVirus(i + 1, cnt + 1, size);
            virus_visited[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> lab[i][j];
            if (lab[i][j] == 2)
                virus.push_back({i, j});
            else if (lab[i][j] == 0)
                secureCnt++;
        }
    }

    selectVirus(0, 0, virus.size());
    if (result != 2500)
        cout << result;
    else
        cout << -1;
}
*/

/* 5014번 스타트링크
// 해설 : 전형적인 BFS문제

int F, S, G, U, D;
// 최고층 : F층
// 현재위치 : S층
// 목적지 : G층

bool visited[1000001];

void bfs(int now, int des, int up, int down)
{
    std::queue<std::pair<std::pair<int, int>, int >> q;
    q.emplace(std::make_pair(std::make_pair(now, des), 0));
    visited[now] = true;

    while(!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int cnt = q.front().second;
        q.pop();

        if(x == y)
        {
            printf("%d", cnt);
            return;
        }

        if(x - down > 0)
        {
            if(!visited[x-down])
            {
                visited[x-down] = true;
                q.emplace(std::make_pair(std::make_pair(x - down, y), cnt + 1));
            }
        }

        if(x + up <= F)
        {
            if(!visited[x + up])
            {
                visited[x + up] = true;
                q.emplace(std::make_pair(std::make_pair(x + up, y), cnt + 1));
            }
        }
    }

    printf("use the stairs");
    return;
}

int main()
{
    scanf("%d %d %d %d %d", &F, &S, &G, &U, &D);

    bfs(S, G, U, D);
}
*/