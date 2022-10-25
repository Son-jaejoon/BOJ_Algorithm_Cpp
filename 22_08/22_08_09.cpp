#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#define endl "\n"
#define MAX 110

using namespace std;

/* 12865번 평범한 배낭
// 해설 : 간단한데 간단한데 알기가 어렵네
// 참고 : https://yabmoons.tistory.com/571

int N, K;
int Weight[MAX];
int Value[MAX];
int DP[MAX][100010];

int Max(int A, int B)
{
    if (A > B)
        return A;
    return B;
}

void Input()
{
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        cin >> Weight[i] >> Value[i];
    }
}

void Solution()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            if (j >= Weight[i])
                DP[i][j] = Max(DP[i - 1][j], DP[i - 1][j - Weight[i]] + Value[i]);
            else
                DP[i][j] = DP[i - 1][j];
        }
    }
    cout << DP[N][K] << endl;
}

void Solve()
{
    Input();
    Solution();
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}
*/

/* 부르트 포스임ㅠ ㅠ 12865번 평범한 배낭(메모리초과)
int N, K;
vector<int> w;
vector<int> v;
vector<vector<vector<bool>>> bag;
vector<int> save_value;

void bfs()
{
    queue<pair<pair<int, int>, int>> q;
    q.emplace(make_pair(make_pair(0, 0), 0));
    bag[0][0][0] = true;

    while(!q.empty())
    {
        int item_num = q.front().first.first;
        int current_weight = q.front().first.second;
        int current_value = q.front().second;
        q.pop();

        if(item_num == 4)
        {
            save_value.emplace_back(current_value);
            continue;
        }

        int next_item = item_num + 1;
        int item_weight = w[next_item];
        int item_value = v[next_item];

        int sum_weight = current_weight + item_weight;
        int sum_value = current_value + item_value;

        if(sum_weight <= K)
        {
            if(!bag[item_num][sum_weight][sum_value])
            {
                bag[item_num][sum_weight][sum_value] = true;
                q.emplace(make_pair(make_pair(next_item, sum_weight), sum_value));
            }

            if(!bag[item_num][current_weight][current_value])
            {
                bag[item_num][current_weight][current_value] = true;
                q.emplace(make_pair(make_pair(next_item, current_weight), current_value));
            }
        }
        else
        {
            if(!bag[item_num][current_weight][current_value])
            {
                bag[item_num][current_weight][current_value] = true;
                q.emplace(make_pair(make_pair(next_item, current_weight), current_value));
            }
        }
    }

    int ans = 0;

    if(save_value.size() > 0)
    {
        for(int i = 0 ; i < save_value.size() ; i++)
        {
            ans = max(ans, save_value[i]);
        }
        cout << ans << endl;
    }
    else
        cout << ans << endl;

    return;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;
    w.assign(N, 0);
    v.assign(N, 0);
    bag.assign(N + 1, vector<vector<bool>>(K + 1, vector<bool>(N * 1000 + 1, false)));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int tmp;
            cin >> tmp;

            if (j == 0)
                w[i] = tmp;
            else if (j == 1)
                v[i] = tmp;
        }
    }

    bfs();
}
*/

/* 1495번 기타리스트
// 해설 : dp 문제이지만 bfs로 해결 (현재 번호, 이전에 더한지 뺀지, 현재 값)

int N, S, M;
vector<int> v;
vector<vector<vector<bool>>> save;

void bfs()
{
    queue<pair<int, int>> q;
    q.emplace(make_pair(0, S));
    save[0][0][S] = true;

    vector<int> max_volume;

    while (!q.empty())
    {
        int number = q.front().first;
        int memorize = q.front().second;
        q.pop();

        if(number == N)
        {
            max_volume.emplace_back(memorize);
            continue;
        }

        int next_plus = memorize + v[number];
        int setting_plus = 1;

        int next_minus = memorize - v[number];
        int setting_minus = 2;

        int next_number = number + 1;

        if (next_plus <= M && next_plus >= 0)
        {
            if(!save[next_number][setting_plus][next_plus])
            {
                save[next_number][setting_plus][next_plus] = true;
                q.emplace(make_pair(next_number, next_plus));
            }
        }

        if (next_minus >= 0 && next_minus <= M)
        {
            if(!save[next_number][setting_minus][next_minus])
            {
                save[next_number][setting_minus][next_minus] = true;
                q.emplace(make_pair(next_number, next_minus));
            }
        }
    }

    int ans = -1;

    for(int i = 0 ; i < max_volume.size() ; i++)
    {
        ans = max(ans, max_volume[i]);
    }

    cout << ans << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> S >> M;
    v.assign(N, 0);
    save.assign(N + 1, vector<vector<bool>>(3, vector<bool>(M + 1, false)));

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    bfs();
}
*/

/* 15989번 1, 2, 3 더하기 4
// 해설 : 중복을 없애야 해서 어려웠다. 1로 만들 수 있는 것, 2로 만들 수 있는 것, 3으로 만들 수 있는 것 더하기
// 참고 : https://velog.io/@lchyung1998/%EC%96%B4%EB%A0%A4%EC%9B%8C%EC%9A%94%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-BOJ-15989-1-2-3-%EB%8D%94%ED%95%98%EA%B8%B0-4

int save[10001][10001];

void sum_num()
{
    int number = 10001;
    save[1][1] = 1;
    save[2][1] = 1;
    save[2][2] = 1;
    save[3][1] = 1;
    save[3][2] = 1;
    save[3][3] = 1;

    for(int i = 4 ; i < number ; i++)
    {
        save[i][1] = 1;
        save[i][2] = save[i-2][1] + save[i-2][2];
        save[i][3] = save[i - 3][1] + save[i - 3][2] + save[i - 3][3];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    sum_num();

    int T;
    cin >> T;

    while(T > 0)
    {
        int N;
        cin >> N;
        int ans = save[N][1] + save[N][2] + save[N][3];
        cout << ans << endl;
        T--;
    }
}
*/