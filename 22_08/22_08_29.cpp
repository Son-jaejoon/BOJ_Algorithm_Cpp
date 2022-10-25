#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 16945번 매직 스퀘어로 변경하기
// 해설 : 123456789번 돌린 후 계산

int arr[9];
vector<int> ok = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int ans = 987654321;

bool chk()
{
    int sum = ok[0] + ok[1] + ok[2];
    
    if(sum != (ok[3] + ok[4] + ok[5]))
        return false;
    
    if(sum != (ok[6] + ok[7] + ok[8]))
        return false;
    
    if(sum != (ok[0] + ok[3] + ok[6]))
        return false;
    
    if(sum != (ok[1] + ok[4] + ok[7]))
        return false;
    
    if(sum != (ok[2] + ok[5] + ok[8]))
        return false;
    
    if(sum != (ok[0] + ok[4] + ok[8]))
        return false;

    if(sum != (ok[2] + ok[4] + ok[6]))
        return false;

    return true;
}

void solution()
{
    do
    {
        if(chk())
        {
            int tmp = 0;
            for(int i = 0 ; i < 9 ; i++)
            {
                tmp += abs(arr[i] - ok[i]);
            }
            ans = min(ans, tmp);
        }
    }
    while(next_permutation(ok.begin(), ok.end()));

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0 ; i < 9 ; i++)
    {
        cin >> arr[i];
    }

    solution();
}
*/

/* 17135번 캐슬 디펜스
// 해설 : 궁수의 위치(N과 M), 적의 위치 처치(중복 확인), 적 위치 이동(+ 1 이후 erase)
 
int N, M, D, ans, result;
vector<vector<int>> arr;
vector<pair<int, int>> save_enemy;
vector<pair<int, int>> enemy;
vector<int> eliminate;
vector<int> save;
int visited[15];

bool chk(int num)
{
    for (int i = 0; i < eliminate.size(); i++)
    {
        if (num == eliminate[i])
            return false;
    }

    result++;
    return true;
}

void defense()
{
    result = 0;

    while (!enemy.empty())
    {
        eliminate.clear();

        for (int i = 0; i < 3; i++)
        {
            int num = save[i];
            int tmp = 11;
            int x = 0;
            int idx = 987654321;

            for (int j = enemy.size() - 1; j >= 0; j--)
            {
                int dist = abs(enemy[j].first - N) + abs(enemy[j].second - num);

                if (dist <= D)
                {
                    if (dist == tmp)
                    {
                        if (enemy[j].second < x)
                        {
                            x = enemy[j].second;
                            idx = j;
                        }
                    }
                    else if (dist < tmp)
                    {
                        x = enemy[j].second;
                        tmp = dist;
                        idx = j;
                    }
                }
            }

            if (idx != 987654321 && chk(idx))
            {
                eliminate.emplace_back(idx);
            }
        }

        sort(eliminate.begin(), eliminate.end());

        for (int i = eliminate.size() - 1; i >= 0; i--)
        {
            enemy.erase(enemy.begin() + eliminate[i]);
        }

        int num = enemy.size();

        while (num--)
        {
            int y = enemy.front().first;
            int x = enemy.front().second;
            enemy.erase(enemy.begin());

            if (y + 1 >= N)
            {
                continue;
            }
            else
            {
                enemy.emplace_back(make_pair(y + 1, x));
            }
        }
    }
    ans = max(ans, result);
}

void solution(int cnt)
{
    if (cnt == 3)
    {
        enemy.clear();
        for (int i = 0; i < save_enemy.size(); i++)
        {
            enemy.emplace_back(make_pair(save_enemy[i].first, save_enemy[i].second));
        }

        defense();
        return;
    }

    for (int i = 0; i < M; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            save[cnt] = i;
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

    cin >> N >> M >> D;
    arr.assign(N, vector<int>(M, 0));
    save.assign(M, 0);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 1)
            {
                save_enemy.emplace_back(make_pair(i, j));
            }
        }
    }

    solution(0);
    cout << ans;
}
*/