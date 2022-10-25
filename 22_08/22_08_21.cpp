#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define endl "\n"

using namespace std;

/* 16922번 로마 숫자 만들기
// 해설 : dfs로 구현. 뒤에선 굳이 같을 필요 없으니 idx값 보내주는 것이 메모리 초과의 핵심

int N;
int ans;

vector<bool> save;
int roma[] = {1, 5, 10, 50};

void solution()
{
    queue<pair<pair<int, int>, int>> q;
    q.emplace(make_pair(make_pair(0, 0), 0));

    while(!q.empty())
    {
        int sum = q.front().first.first;
        int cnt = q.front().first.second;
        int idx = q.front().second;

        q.pop();
        
        if(cnt == N-1)
        {
            for(int i = 0 ; i < 4 ; i++)
            {
                if(!save[sum + roma[i]])
                {
                    save[sum + roma[i]] = true;
                    ans++;
                    continue;
                }
            }
        }
        else
        {
            for(int i = idx ; i < 4 ; i++)
            {
                q.emplace(make_pair(make_pair(sum + roma[i], cnt + 1), i));
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

    cin >> N;
    int max_sum = N*50;

    save.assign(max_sum + 1, false);
    solution();
}
*/

/* 2422번 한윤정이 이탈리아에 가서 아이스크림을 사먹는데
// 해설 : 넣어두고 같으면 안돼!

int N, M, ans;
vector<pair<int, int>> v;
vector<int> ice;
vector<vector<bool>> dont;
vector<bool> visited;

void solution()
{
    for(int i = 1 ; i <= N - 2 ; i++)
    {
        for(int j = i + 1 ; j <= N - 1 ; j++)
        {
            for(int k = j + 1 ; k <= N ; k++)
            {
                if(dont[i][j] || dont[j][k] || dont[i][k])
                    continue;
                ans++;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    ice.assign(3, 0);
    dont.assign(N + 1, vector<bool>(N + 1, false));
    visited.assign(N + 1, false);

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        dont[a][b] = true;
        dont[b][a] = true;
    }

    solution();
    cout << ans;
}
*/