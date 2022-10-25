#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <array>
#include <map>
#include <set>

/* 12906번 새로운 하노이 탑
// 해설 : 단순하게 ABC에서 A->B, A->C / B->A, B->C / C->A, C->B
// set으로 visit 방문 확인
// struct로 s1, s2, s3 상태 넣기
// 참고 : https://yabmoons.tistory.com/205

using namespace std;

set<pair<pair<string, string>, string>> Visit;

typedef struct
{
    string S1;
    string S2;
    string S3;
}State;

State Hanoi;
string A, B, C;

bool Chk_Hanoi_Tower(string A, string B, string C)
{
    char Plate_A = 'A';
    char Plate_B = 'B';
    char Plate_C = 'C';

    if(A.length() > 0)
    {
        for(int i = 0 ; i < A.length() ; i++)
        {
            if(A[i] != Plate_A)
                return false;
        }
    }

    if(B.length() > 0)
    {
        for(int i = 0 ; i < B.length() ; i++)
        {
            if(B[i] != Plate_B)
                return false;
        }
    }

    if(C.length() > 0)
    {
        for(int i = 0 ; i < C.length() ; i++)
        {
            if(C[i] != Plate_C)
                return false;
        }
    }

    return true;
}

string Remove_Top(string S)
{
    string Tmp = "";
    for(int i = 0 ; i < S.length() -1 ; i++)
    {
        Tmp = Tmp + S[i];
    }
    return Tmp;
}

void bfs(State S, int Init)
{
    queue<pair<State, int>> Q;
    Q.emplace(make_pair(S, Init));
    Visit.insert(make_pair(make_pair(S.S1, S.S2), S.S3));

    while(!Q.empty())
    {
        string Hanoi_A = Q.front().first.S1;
        string Hanoi_B = Q.front().first.S2;
        string Hanoi_C = Q.front().first.S3;
        int Cnt = Q.front().second;
        Q.pop();

        if(Chk_Hanoi_Tower(Hanoi_A, Hanoi_B, Hanoi_C))
        {
            cout << Cnt << endl;
            return;
        }

        if(Hanoi_A.length() > 0)
        {
            string A_Temp = Remove_Top(Hanoi_A);
            string B_Temp = Hanoi_B + Hanoi_A[Hanoi_A.length() - 1];

            if(Visit.find(make_pair(make_pair(A_Temp, B_Temp), Hanoi_C)) == Visit.end())
            {
                Visit.insert(make_pair(make_pair(A_Temp, B_Temp), Hanoi_C));
                State S_Temp;
                S_Temp.S1 = A_Temp;
                S_Temp.S2 = B_Temp;
                S_Temp.S3 = Hanoi_C;
                Q.emplace(make_pair(S_Temp, Cnt + 1));
            }

            string C_Temp = Hanoi_C + Hanoi_A[Hanoi_A.length() - 1];

            if(Visit.find(make_pair(make_pair(A_Temp, Hanoi_B), C_Temp)) == Visit.end())
            {
                Visit.insert(make_pair(make_pair(A_Temp, Hanoi_B), C_Temp));
                State S_Temp;
                S_Temp.S1 = A_Temp;
                S_Temp.S2 = Hanoi_B;
                S_Temp.S3 = C_Temp;
                Q.emplace(make_pair(S_Temp, Cnt + 1));
            }
        }

        if(Hanoi_B.length() > 0)
        {
            string B_Temp = Remove_Top(Hanoi_B);
            string C_Temp = Hanoi_C + Hanoi_B[Hanoi_B.length() - 1];

            if(Visit.find(make_pair(make_pair(Hanoi_A, B_Temp), C_Temp)) == Visit.end())
            {
                Visit.insert(make_pair(make_pair(Hanoi_A, B_Temp), C_Temp));
                State S_Temp;
                S_Temp.S1 = Hanoi_A;
                S_Temp.S2 = B_Temp;
                S_Temp.S3 = C_Temp;
                Q.emplace(make_pair(S_Temp, Cnt + 1));
            }

            string A_Temp = Hanoi_A + Hanoi_B[Hanoi_B.length() - 1];

            if(Visit.find(make_pair(make_pair(A_Temp, B_Temp), Hanoi_C)) == Visit.end())
            {
                Visit.insert(make_pair(make_pair(A_Temp, B_Temp), Hanoi_C));
                State S_Temp;
                S_Temp.S1 = A_Temp;
                S_Temp.S2 = B_Temp;
                S_Temp.S3 = Hanoi_C;
                Q.emplace(make_pair(S_Temp, Cnt + 1));
            }
        }

        if(Hanoi_C.length() > 0)
        {
            string C_Temp = Remove_Top(Hanoi_C);
            string A_Temp = Hanoi_A + Hanoi_C[Hanoi_C.length() - 1];

            if(Visit.find(make_pair(make_pair(A_Temp, Hanoi_B), C_Temp)) == Visit.end())
            {
                Visit.insert(make_pair(make_pair(A_Temp, Hanoi_B), C_Temp));
                State S_Temp;
                S_Temp.S1 = A_Temp;
                S_Temp.S2 = Hanoi_B;
                S_Temp.S3 = C_Temp;
                Q.emplace(make_pair(S_Temp, Cnt + 1));
            }

            string B_Temp = Hanoi_B + Hanoi_C[Hanoi_C.length() - 1];

            if(Visit.find(make_pair(make_pair(Hanoi_A, B_Temp), C_Temp)) == Visit.end())
            {
                Visit.insert(make_pair(make_pair(Hanoi_A, B_Temp), C_Temp));
                State S_Temp;
                S_Temp.S1 = Hanoi_A;
                S_Temp.S2 = B_Temp;
                S_Temp.S3 = C_Temp;
                Q.emplace(make_pair(S_Temp, Cnt + 1));
            }
        }
    }
}

int main()
{
    int Idx = 0;
    for(int i = 0 ; i < 3 ; i++)
    {
        int a;
        cin >> a;
        
        if(Idx == 0)
        {
            if (a == 0)
            {
                A = "";
                Hanoi.S1 = A;
                Idx++;
            }
            else
            {
                cin >> A;
                Hanoi.S1 = A;
                Idx++;
            }
        }
        else if(Idx == 1)
        {
            if(a == 0)
            {
                B = "";
                Hanoi.S2 = B;
                Idx++;
            }
            else
            {
                cin >> B;
                Hanoi.S2 = B;
                Idx++;
            }
        }
        else
        {
            if(a == 0)
            {
                C = "";
                Hanoi.S3 = C;
            }
            else
            {
                cin >> C;
                Hanoi.S3 = C;
            }
        }
    }
    bfs(Hanoi, 0);
}
*/

/* 14502번 연구소
// 해설 : 셀렉트를 통해 3개의 문을 만드는 것이 관건
// 바이러스가 추가되엇으면 임시 배열에 추가해줘야 빈공간을 찾을 수 있음.

int N, M;
std::vector<std::pair<int, int>> v;
std::vector<std::pair<int, int>> w;
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};
int ans = 0;

void bfs(int size, int lab[][8])
{
    bool visited[N][M];
    int tmp[N][M];

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            tmp[i][j] = lab[i][j];
        }
    }

    std::memset(visited, false, sizeof(visited));
    std::queue<std::pair<int, int>> q;
    int cnt = 0;

    for(int i = 0 ; i < v.size() ; i++)
    {
        q.emplace(std::make_pair(v[i].first, v[i].second));
        visited[v[i].first][v[i].second] = true;
    }

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny >= 0 && nx >= 0 && ny < N && nx < M)
            {
                if(!visited[ny][nx] && lab[ny][nx] == 0)
                {
                    visited[ny][nx] = true;
                    q.emplace(std::make_pair(ny, nx));
                    tmp[ny][nx] = 2;
                }
            }
        }
    }
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            if(tmp[i][j] == 0)
                cnt++;
        }
    }

    ans = std::max(ans, cnt);
    return;
}

void selectWall(int index, int cnt, int size, int lab[][8])
{
    if (cnt == 3)
    {
        bfs(size, lab);
        return;
    }

    for (int i = index; i < size; i++)
    {
        int y = w[i].first;
        int x = w[i].second;

        if (lab[y][x] == 0)
        {
            lab[y][x] = 1;
            selectWall(i + 1, cnt + 1, size, lab);
            lab[y][x] = 0;
        }
    }
}

int main()
{
    scanf("%d %d", &N, &M);

    int lab[N][8];

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            scanf("%d", &lab[i][j]);
            if(lab[i][j] == 2)
            {
                v.emplace_back(std::make_pair(i, j));
            }

            if(lab[i][j] == 0)
            {
                w.emplace_back(std::make_pair(i, j));
            }
        }
    }

    selectWall(0, 0, w.size(), lab);
    printf("%d", ans);
}
*/