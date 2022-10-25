#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
#include <cmath>
#define endl "\n"

using namespace std;

/* 2210번 숫자판 점프
// 해설 : 음 음..

int board[6][6];

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};
int ans = 0;
bool visited[1000001]; 

void solution(int y, int x, int sum, int cnt)
{
    if(cnt == 5)
    {
        if(!visited[sum])
        {
            visited[sum] = true;
            ans++;
        }
        return;
    }

    for(int i = 0 ; i < 4 ; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny <= 0 || nx <= 0 || ny > 5 || nx > 5)
            continue;
        
        solution(ny, nx, sum*10 + board[ny][nx], cnt + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 1 ; j <= 5 ; j++)
        {
            cin >> board[i][j];
        }
    }

    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 1 ; j <= 5 ; j++)
        {
            solution(i, j , board[i][j], 0);
        }
    }

    cout << ans;
}
*/

/* 16937번 두 스티커
// 해설 : 왜 안되는 지 모르겠음 ㅠㅠ
// 정답 : https://ongveloper.tistory.com/268

int H, W, N;
vector<vector<int>> paper;
vector<pair<int,int>> sticker;

struct sticker_sum
{
    int sum;
    int paper_size;
    int cnt;
    int idx;
};

sticker_sum create(int S, int P, int C, int idx)
{
    sticker_sum sts;
    sts.sum = S;
    sts.paper_size = P;
    sts.cnt = C;
    sts.idx = idx;

    return sts;
}
void solution()
{
    for(int i = sticker.size() - 1 ; i >= 0 ; i--)
    {
        if((sticker[i].first > H || sticker[i].second > W) && (sticker[i].second > H || sticker[i].first > W))
            sticker.erase(sticker.begin() + i);
    }

    queue<sticker_sum> q;
    q.emplace(create(0, H*W, 0, 0));

    int ans = 0;

    while(!q.empty())
    {
        int total = q.front().sum;
        int size = q.front().paper_size;
        int sticker_select = q.front().cnt;
        int sticker_idx = q.front().idx;
        q.pop();

        bool chk = false;
        int R_long = 0;
        int C_long = 0;

        if(sticker_select == 2)
        {
            ans = max(ans, total);
            continue;
        }
        else if(sticker_select == 1)
        {
            chk = true;
            R_long = sticker[sticker_idx - 1].first;
            C_long = sticker[sticker_idx - 1].second;
        }
        for(int i = sticker_idx ; i < sticker.size() ; i++)
        {
            int area = sticker[i].first * sticker[i].second;

            if(chk)
            {
                if(R_long + sticker[i].first <= H && sticker[i].second <= W)
                {
                    q.emplace(create(total + area, size, sticker_select + 1, i + 1));
                }
                else if(R_long + sticker[i].second <= H && sticker[i].first <= W)
                {
                    q.emplace(create(total + area, size, sticker_select + 1, i + 1));
                }
                else if(C_long + sticker[i].first <= H && sticker[i].second <= W)
                {
                    q.emplace(create(total + area, size, sticker_select + 1, i + 1));
                }
                else if(C_long + sticker[i].second <= H && sticker[i].first <= W)
                {
                    q.emplace(create(total + area, size, sticker_select + 1, i + 1));
                }
                else if(R_long + sticker[i].first <= W && sticker[i].second <= H)
                {
                    q.emplace(create(total + area, size, sticker_select + 1, i + 1));
                }
                else if(R_long + sticker[i].second <= W && sticker[i].first <= H)
                {
                    q.emplace(create(total + area, size, sticker_select + 1, i + 1));
                }
                else if(C_long + sticker[i].first <= W && sticker[i].second <= H)
                {
                    q.emplace(create(total + area, size, sticker_select + 1, i + 1));
                }
                else if(C_long + sticker[i].second <= W && sticker[i].first <= H)
                {
                    q.emplace(create(total + area, size, sticker_select + 1, i + 1));
                }
            }
            else
            {
                q.emplace(create(total + area, size, sticker_select + 1, i + 1));
            }
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> H >> W >> N;

    paper.assign(H + 1, vector<int>(W + 1, 0));

    for(int i = 0; i < N ; i++)
    {
        int R, C;
        cin >> R >> C;
        sticker.emplace_back(make_pair(R, C));
    }

    solution();
}
*/