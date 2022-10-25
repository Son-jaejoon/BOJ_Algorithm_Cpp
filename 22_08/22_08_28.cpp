#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 17406번 배열 돌리기4
// 해설 : 왜 틀린지 모르겟음
// 참고 : https://nim-code.tistory.com/180

struct rcs
{
    int r;
    int c;
    int s;
};

rcs create(int r, int c, int s)
{
    rcs n_rcs;
    n_rcs.r = r;
    n_rcs.c = c;
    n_rcs.s = s;

    return n_rcs;
}

int N, M, K;
int ans = 987654321;
vector<vector<int>> arr;
vector<rcs> save;
int select[6];
bool visited[6];

int calculate()
{
    int result = 987654321; 

    for(int i = 1 ; i <= N ; i++)
    {
        int tmp = 0;
        for(int j = 1; j <= M ; j++)
        {
            tmp += arr[i][j];
        }
        result = min(result, tmp);
    }

    return result;
}

void rotate(int u_y_1, int u_x_1, int d_y_2, int d_x_2)
{
    int u_y_2 = u_y_1;
    int u_x_2 = d_x_2;

    int d_y_1 = d_y_2;
    int d_x_1 = u_x_1;
    
    while(u_y_1 < d_y_1 && u_x_1 < u_x_2)
    {
        int temp = arr[u_y_1][u_x_1];
        
        for(int i = u_x_1 ; i < u_x_2 ; i++)
        {
            arr[u_y_1][i] = arr[u_y_1][i + 1];
        }
        
        for(int i = u_y_2 ; i < d_y_1 ; i++)
        {
            arr[i][u_x_2] = arr[i + 1][u_x_2];
        }

        for(int i = d_x_2 ; i > d_x_1 ; i--)
        {
            arr[u_y_2][i] = arr[u_y_2][i - 1];
        }
        for(int i = d_y_1 ; i > u_x_1 ; i--)
        {
            arr[i][d_x_1] = arr[i - 1][d_x_1];
        }

        arr[u_y_1 + 1][d_x_1] = temp;
        u_y_1++;
        u_x_1++;
        u_y_2++;
        u_x_2--;
        d_y_2--;
        d_x_2--;
        d_y_1--;
        d_x_1++;
    }
}

void idx_select()
{
    for(int i = 0 ; i < save.size() ; i++)
    {
        int idx = select[i];
        int current_r = save[idx].r;
        int current_c = save[idx].c;
        int current_s = save[idx].s;

        int up_y = current_r - current_s;
        int up_x = current_c - current_s;

        int down_y = current_r + current_s;
        int down_x = current_c + current_s;
        rotate(up_y, up_x, down_y, down_x);
    }
}

void solution(int cnt)
{
    if(cnt == save.size())
    {
        idx_select();
        ans = min(ans, calculate());
        return;
    }

    for(int i = 0 ; i < save.size() ; i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            select[i] = cnt;
            solution(cnt + 1);
            visited[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> K;
    arr.assign(N + 1, vector<int>(M + 1, 0));

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= M ; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < K ; i++)
    {
        int r, c, s;
        cin >> r >> c >> s;
        save.emplace_back(create(r, c, s));
    }

    solution(0);
    cout << ans;
}
*/