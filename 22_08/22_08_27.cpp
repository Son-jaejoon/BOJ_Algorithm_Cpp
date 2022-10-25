#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 17281번 야구
// 해설 : 그냥 하나씩 구현하자

int N;
int member[9];
int ans;
int score;
bool visited[9];
vector<vector<int>> baseball;

void game(int innings, int start)
{
    if(innings == N)
        return;
    
    int out = 0;
    int save_member = 0;

    queue<int> q;
    q.emplace(0);
    q.emplace(0);
    q.emplace(0);

    for (int i = start; i < 9; i++)
    {
        int number = member[i];
        int run = baseball[innings][number];

        if (run == 1)
        {
            q.emplace(1);
            int num = q.front();

            if (num == 1)
            {
                score++;
            }
            q.pop();
        }
        else if (run == 2)
        {
            q.emplace(1);
            q.emplace(0);

            for (int j = 0; j < 2; j++)
            {
                int num = q.front();
                q.pop();

                if (num == 1)
                {
                    score++;
                }
            }
        }
        else if (run == 3)
        {
            q.emplace(1);
            q.emplace(0);
            q.emplace(0);

            for (int j = 0; j < 3; j++)
            {
                int num = q.front();
                q.pop();

                if (num == 1)
                {
                    score++;
                }
            }
        }
        else if (run == 4)
        {
            q.emplace(0);
            q.emplace(0);
            q.emplace(0);

            for (int j = 0; j < 3; j++)
            {
                int num = q.front();
                q.pop();

                if (num == 1)
                {
                    score++;
                }
            }

            score++;
        }
        else if (run == 0)
        {
            out++;
        }

        if (out == 3)
        {
            save_member = (i + 1) % 9;
            break;
        }
    }

    while (out < 3)
    {

        for (int i = 0; i < 9; i++)
        {
            int number = member[i];
            int run = baseball[innings][number];

            if (run == 1)
            {
                q.emplace(1);
                int num = q.front();

                if (num == 1)
                {
                    score++;
                }
                q.pop();
            }
            else if (run == 2)
            {
                q.emplace(1);
                q.emplace(0);

                for (int j = 0; j < 2; j++)
                {
                    int num = q.front();
                    q.pop();

                    if (num == 1)
                    {
                        score++;
                    }
                }
            }
            else if (run == 3)
            {
                q.emplace(1);
                q.emplace(0);
                q.emplace(0);

                for (int j = 0; j < 3; j++)
                {
                    int num = q.front();
                    q.pop();

                    if (num == 1)
                    {
                        score++;
                    }
                }
            }
            else if (run == 4)
            {
                q.emplace(0);
                q.emplace(0);
                q.emplace(0);

                for (int j = 0; j < 3; j++)
                {
                    int num = q.front();
                    q.pop();

                    if (num == 1)
                    {
                        score++;
                    }
                }

                score++;
            }
            else if (run == 0)
            {
                out++;
            }

            if (out == 3)
            {
                save_member = (i + 1) % 9;
                break;
            }
        }
    }

    game(innings + 1, save_member);
}

void solution(int member_cnt)
{
    if (member_cnt == 9)
    {
        score = 0;
        game(0, 0);
        ans = max(ans, score);
        return;
    }
    for (int i = 0; i < 9; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            member[i] = member_cnt;
            solution(member_cnt + 1);
            visited[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    baseball.assign(N, vector<int>(9, 0));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> baseball[i][j];
        }
    }

    visited[3] = true;
    member[3] = 0;
    solution(1);
    cout << ans;
}
*/

/* 15683번 감시
// 해설 : 브루트포스로 해결했는데 예제2번이 안됨. ㅠㅠ
// 정답 : https://donggoolosori.github.io/2020/11/20/boj-15683/

int N, M;

struct xya
{
    int value;
    int idx;
    string arrow;
};

xya create(int value, int idx, string arrow)
{
    xya n_xya;
    n_xya.value = value;
    n_xya.idx = idx;
    n_xya.arrow = arrow;

    return n_xya;
}

vector<vector<int>> arr;
vector<vector<bool>> visited;
vector<pair<int, int>> cctv;
vector<xya> area_1;

void right(int y, int x)
{
    for (int i = x + 1; i < M; i++)
    {
        if (arr[y][i] == 6)
        {
            int cctv_1 = 0;

            for (int j = x + 1; j < i; j++)
            {
                if (!visited[y][j] && arr[y][j] == 0)
                {
                    cctv_1++;
                }
            }

            area_1.emplace_back(create(cctv_1, i, "right"));
            break;
        }

        if (i == M - 1)
        {
            int cctv_1 = 0;

            for (int j = x + 1; j <= i; j++)
            {
                if (!visited[y][j] && arr[y][j] == 0)
                {
                    cctv_1 ++;
                }
            }
            area_1.emplace_back(create(cctv_1, i, "right"));
            break;
        }
    }
}

void down(int y, int x)
{
    for (int i = y + 1; i < N; i++)
    {
        if (arr[i][x] == 6)
        {
            int cctv_1 = 0;

            for (int j = y + 1; j < i; j++)
            {
                if (!visited[j][x] && arr[j][x] == 0)
                {
                    cctv_1 ++;
                }
            }
            area_1.emplace_back(create(cctv_1, i, "down"));
            break;
        }

        if (i == N - 1)
        {
            int cctv_1 = 0;

            for (int j = y + 1; j <= i; j++)
            {
                if (!visited[j][x] && arr[j][x] == 0)
                {
                    cctv_1 ++;
                }
            }
            area_1.emplace_back(create(cctv_1, i, "down"));
            break;
        }
    }
}

void left(int y, int x)
{
    for (int i = x - 1; i >= 0; i--)
    {
        if (arr[y][i] == 6)
        {
            int cctv_1 = 0;

            for (int j = x - 1; j > i; j--)
            {
                if (!visited[y][j] && arr[y][j] == 0)
                {
                    cctv_1 ++;
                }
            }
            area_1.emplace_back(create(cctv_1, i, "left"));
            break;
        }

        if (i == 0)
        {
            int cctv_1 = 0;

            for (int j = x - 1; j >= 0; j--)
            {
                if (!visited[y][j] && arr[y][j] == 0)
                {
                    cctv_1 ++;
                }
            }
            area_1.emplace_back(create(cctv_1, 0, "left"));
            break;
        }
    }
}

void up(int y, int x)
{
    for (int i = y - 1; i >= 0; i--)
    {
        if (arr[i][x] == 6)
        {
            int cctv_1 = 0;

            for (int j = y - 1; j >= 0; j--)
            {
                if (!visited[j][x] && arr[j][x] == 0)
                {
                    cctv_1 ++;
                }
            }
            area_1.emplace_back(create(cctv_1, i, "up"));
            break;
        }
        else if (i == 0)
        {
            int cctv_1 = 0;

            for (int j = y - 1; j >= 0; j--)
            {
                if (!visited[j][x] && arr[j][x] == 0)
                {
                    cctv_1 ++;
                }
            }
            area_1.emplace_back(create(cctv_1, 0, "up"));
            break;
        }
    }
}

void solution(int y, int x)
{
    int area = 0;

    if (arr[y][x] == 1)
    {
        int tmp = 0;
        int idx = 0;
        string arrow;
        area_1.clear();

        right(y, x);
        down(y, x);
        left(y, x);
        up(y, x);

        for (int i = 0; i < 4; i++)
        {
            if (tmp < area_1[i].value)
            {
                tmp = area_1[i].value;
                idx = area_1[i].idx;
                arrow = area_1[i].arrow;
            }
        }

        if (arrow == "right")
        {
            for (int i = x + 1; i <= idx; i++)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }
            }
        }
        else if (arrow == "down")
        {
            for (int i = y + 1; i <= idx; i++)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }
        }
        else if (arrow == "left")
        {
            for (int i = x - 1; i >= idx; i--)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }
            }
        }
        else if (arrow == "up")
        {
            for (int i = y - 1; i >= idx; i--)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }
        }
    }
    else if (arr[y][x] == 2)
    {
        area_1.clear();

        right(y, x);
        down(y, x);
        left(y, x);
        up(y, x);

        int tmp_1 = area_1[0].value + area_1[2].value;
        int tmp_2 = area_1[1].value + area_1[3].value;

        if (tmp_1 >= tmp_2)
        {
            for (int i = x + 1; i <= area_1[0].idx; i++)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }

                for (int i = x - 1; i >= area_1[2].idx; i--)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }
            }
            }

        }
        else if (tmp_2 > tmp_1)
        {
            for (int i = y + 1; i <= area_1[1].idx; i++)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }

            for (int i = y - 1; i >= area_1[3].idx; i--)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }
        }
    }
    else if (arr[y][x] == 3)
    {
        int tmp = 0;
        int idx = 0;
        area_1.clear();

        right(y, x);
        down(y, x);
        left(y, x);
        up(y, x);

        vector<int> tmp_idx;
        tmp_idx.emplace_back(area_1[0].value + area_1[3].value);
        tmp_idx.emplace_back(area_1[1].value + area_1[0].value);
        tmp_idx.emplace_back(area_1[2].value + area_1[1].value);
        tmp_idx.emplace_back(area_1[3].value + area_1[2].value);

        for (int i = 0; i < 4; i++)
        {
            if (tmp < tmp_idx[i])
            {
                idx = i;
            }
        }

        if (idx == 0)
        {
            for (int i = x + 1; i <= area_1[0].idx; i++)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }
            }

            for (int i = y - 1; i >= area_1[3].idx; i--)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }
        }
        else if (idx == 1)
        {
            for (int i = x + 1; i <= area_1[0].idx; i++)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }
            }

            for (int i = y + 1; i <= area_1[1].idx; i++)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }
        }
        else if (idx == 2)
        {
            for (int i = x - 1; i >= area_1[2].idx; i--)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }
            }

            for (int i = y + 1; i <= area_1[1].idx; i++)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }
        }
        else if (idx == 3)
        {
            for (int i = x - 1; i >= area_1[2].idx; i--)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }
            }

            for (int i = y - 1; i >= area_1[3].idx; i--)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }
        }
    }
    else if (arr[y][x] == 4)
    {
        int tmp = 0;
        int idx = 0;
        int all = 0;
        area_1.clear();

        right(y, x);
        down(y, x);
        left(y, x);
        up(y, x);

        all = area_1[0].value + area_1[1].value + area_1[2].value + area_1[3].value;
        vector<int> tmp_idx;

        tmp_idx.emplace_back(all - area_1[1].value);
        tmp_idx.emplace_back(all - area_1[2].value);
        tmp_idx.emplace_back(all - area_1[3].value);
        tmp_idx.emplace_back(all - area_1[0].value);

        for (int i = 0; i < 4; i++)
        {
            if (tmp < tmp_idx[i])
            {
                tmp = tmp_idx[i];
                idx = i;
            }
        }

        if (idx == 0)
        {
            for (int i = x + 1; i <= area_1[0].idx; i++)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }
            }

            for (int i = y - 1; i >= area_1[1].idx; i--)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }

            for (int i = x - 1; i >= area_1[2].idx ; i--)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }
            }
        }
        else if (idx == 1)
        {
            for (int i = x + 1; i <= area_1[0].idx; i++)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }
            }

            for (int i = y + 1; i <= area_1[1].idx; i++)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }

            for (int i = y - 1; i >= area_1[3].idx; i--)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }
        }
        else if (idx == 2)
        {
            for (int i = x - 1; i >= area_1[2].idx; i--)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }
            }

            for (int i = y + 1; i <= area_1[1].idx; i++)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }

            for (int i = x + 1; i <= area_1[0].idx; i++)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }
            }
        }
        else if (idx == 3)
        {
            for (int i = x - 1; i >= area_1[2].idx; i--)
            {
                if (!visited[y][i] && arr[y][i] == 0)
                {
                    visited[y][i] = true;
                }
            }

            for (int i = y - 1; i >= area_1[3].idx; i--)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }

            for (int i = y + 1; i <= area_1[1].idx ; i++)
            {
                if (!visited[i][x] && arr[i][x] == 0)
                {
                    visited[i][x] = true;
                }
            }
        }
    }
    else if (arr[y][x] == 5)
    {
        area_1.clear();

        right(y, x);
        down(y, x);
        left(y, x);
        up(y, x);

        for (int i = x + 1; i <= area_1[0].idx; i++)
        {
            if (!visited[y][i] && arr[y][i] == 0)
            {
                visited[y][i] = true;
            }
        }

        for (int i = y + 1; i <= area_1[1].idx; i++)
        {
            if (!visited[i][x] && arr[i][x] == 0)
            {
                visited[i][x] = true;
            }
        }

        for (int i = x; i >= area_1[2].idx; i--)
        {
            if (!visited[y][i] && arr[y][i] == 0)
            {
                visited[y][i] = true;
            }
        }

        for (int i = y - 1; i >= area_1[3].idx; i--)
        {
            if (!visited[i][x] && arr[i][x] == 0)
            {
                visited[i][x] = true;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ans = 0;

    cin >> N >> M;
    arr.assign(N, vector<int>(M, 0));
    visited.assign(N, vector<bool>(M, false));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];

            if(arr[i][j] == 0)
            {
                ans++;
            }
            else if (arr[i][j] != 6)
            {
                cctv.emplace_back(make_pair(i, j));
            }
        }
    }

    for (int i = 0; i < cctv.size(); i++)
    {
        solution(cctv[i].first, cctv[i].second);
    }

    cout << endl;
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            if(!visited[i][j])
            {
                cout << "0 ";
            }
            if(visited[i][j])
            {
                cout << "# ";
                ans--;
            }
        }
        cout << endl;
    }

    cout << ans;
}
*/