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

/* 14939번 불 끄기
// 해설 : 비트마스킹, 그리디 알고리즘, 브루트포스, 비트 연산은 쉬운데 어렵다 익숙해지자

int ans = 987654321;
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

vector<vector<bool>> v;
vector<vector<bool>> tmp;

void input()
{
    v.assign(10, vector<bool>(10, false));

    for(int i = 0 ; i < 10 ; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            char ch;
            cin >> ch;
            if(ch == 'O')
                v[i][j] = true;
        }
    }
}

void toggle(int y, int x)
{
    tmp[y][x] = !tmp[y][x];

    for(int i = 0 ; i < 4 ; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 || nx < 0 || ny >= 10 || nx >= 10)
            continue;
        
        tmp[ny][nx] = !tmp[ny][nx];
    }
}

bool check_light()
{
    for(int i = 0 ; i < 10 ; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            if(tmp[i][j])
                return false;
        }
    }

    return true;
}

void first_light()
{
    for(int cases = 0 ; cases < 1024 ; cases++)
    {
        int cnt = 0;

        tmp.assign(v.begin(), v.end());

        for(int i = 0 ; i < 10 ; i++)
        {
            if(cases & (1 << i))
            {
                cnt++;
                toggle(0, i);
            }
        }

        for(int i = 1 ; i < 10 ; i++)
        {
            for(int j = 0 ; j < 10 ; j++)
            {
                if(tmp[i - 1][j])
                {
                    toggle(i, j);
                    cnt++;
                }
            }
        }

        if(check_light())
            ans = min(ans, cnt);
    }
}

void print_answer()
{
    if(ans == 987654321)
        cout << "-1";
    else
        cout << ans;
}

void solution()
{
    first_light();
    print_answer();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();
}

*/