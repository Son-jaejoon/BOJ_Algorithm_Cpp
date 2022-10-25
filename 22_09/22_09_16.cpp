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

/* 16920번 확장 게임
// 해설 : 현재의 위치에 따른 앞으로 가기. 어떻게 q에 넣느냐가 관건.
// 참고 : https://imnotabear.tistory.com/467

int N, M, P;

vector<int> S;
vector<vector<int>> arr;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

struct xyp
{
    int y;
    int x;
    int id;
};

xyp create(int y, int x, int id)
{
    xyp n_xyp;

    n_xyp.y = y;
    n_xyp.x = x;
    n_xyp.id = id;

    return n_xyp;
}

void solution()
{
    queue<xyp> q;

    for (int k = 1; k <= P; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (arr[i][j] == k)
                    q.emplace(create(i, j, k));
            }
        }
    }

    while (!q.empty())
    {
        int y = q.front().y;
        int x = q.front().x;
        int id = q.front().id;
        q.pop();

        int movement = S[id];
        int num = 1;

        while (num <= movement)
        {
            for (int i = 0; i < 4; i++)
            {
                int ny = y + dy[i]*num;
                int nx = x + dx[i]*num;

                if (ny < 0 || nx < 0 || ny >= N || nx >= M)
                    continue;

                if (arr[ny][nx] != 0)
                    continue;

                arr[ny][nx] = id;
                q.emplace(create(ny, nx, id));
            }

            num++;
        }
    }

    for (int i = 1; i <= P; i++)
    {
        int cnt = 0;

        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                if (arr[j][k] == i)
                    cnt++;
            }
        }

        cout << cnt << " ";
    }

    cout << endl << endl;
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> P;

    S.assign(P + 1, 0);
    arr.assign(N, vector<int>(M, 0));

    for (int i = 1; i <= P; i++)
    {
        cin >> S[i];
    }

    for (int i = 0; i < N; i++)
    {
        string st;
        cin >> st;

        for (int j = 0; j < M; j++)
        {
            if (st[j] == '.')
                arr[i][j] = 0;
            else if (st[j] == '#')
                arr[i][j] = -1;
            else
            {
                arr[i][j] = st[j] - '0';
            }
        }
    }

    solution();
}
*/

/* 1525번 퍼즐
// 해설 : mapping을 어떻게 하느냐(쉬움), int형이 아닌 string으로 푼 후 set을 통해 visited 처리
// 참고 : https://yabmoons.tistory.com/75

string Start, End;
set<string> visited;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void solution()
{
    queue<pair<string, int>> q;
    q.emplace(make_pair(Start, 0));

    visited.insert(Start);

    while(!q.empty())
    {
        string cur = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if(cur == End)
        {
            cout << cnt;
            return;
        }

        int idx = cur.find('0');
        int y = idx / 3;
        int x = idx % 3;

        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            int n_cnt = cnt + 1;

            if(ny < 0 || nx < 0 || ny >= 3 || nx >= 3)
                continue;

            string next = cur;
            swap(next[y * 3 + x], next[ny * 3 + nx]);

            if(visited.find(next) != visited.end())
                continue;

            visited.insert(next);
            q.emplace(make_pair(next, n_cnt));
        }
    }

    cout << -1;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    End = "123456780";

    for(int i = 0 ; i < 9 ; i++)
    {
        int num;
        cin >> num;

        char tmp = num + '0';

        Start = Start + tmp;
    }

    solution();
}
*/