#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#define endl "\n"

using namespace std;

/* 16235번 나무 재테크
// 해설 : 봄 여름 가을 겨울 시간초과
// 참고 : https://yabmoons.tistory.com/161

int N, M, K;
int x, y, z;

vector<vector<int>> ground;
vector<vector<int>> food;
vector<pair<int, pair<int, int>>> trees;

int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool isNum(int n)
{
    return n > 0;
}

void solution()
{

    while (K--)
    {
        sort(trees.begin(), trees.end());

        //봄
        for (int i = 0; i < trees.size(); i++)
        {
            int tree_age = trees[i].first;
            int tree_y = trees[i].second.first;
            int tree_x = trees[i].second.second;

            if (tree_age > 0 && ground[tree_y][tree_x] >= tree_age)
            {
                ground[tree_y][tree_x] -= tree_age;
                trees[i].first += 1;
            }
            else
            {
                trees[i].first *= -1;
            }
        }

        //여름

        for (int i = 0; i < trees.size(); i++)
        {
            int tree_age = trees[i].first;
            int tree_y = trees[i].second.first;
            int tree_x = trees[i].second.second;

            if (tree_age < 0)
            {
                tree_age *= -1;
                ground[tree_y][tree_x] += (tree_age / 2);
                trees[i].first = 0;
            }
        }

        //가을

        for (int i = 0; i < trees.size(); i++)
        {
            int tree_age = trees[i].first;
            int tree_y = trees[i].second.first;
            int tree_x = trees[i].second.second;

            if (tree_age % 5 == 0 && tree_age > 0)
            {
                for (int j = 0; j < 8; j++)
                {
                    int ny = tree_y + dy[j];
                    int nx = tree_x + dx[j];

                    if (ny < 0 || nx < 0 || ny >= N || nx >= N)
                        continue;

                    trees.emplace_back(make_pair(1, make_pair(ny, nx)));
                }
            }
        }

        //겨울
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                ground[i][j] += food[i][j];
            }
        }
        vector<pair<int, pair<int, int>>> save;

        for (int i = 0; i < trees.size(); i++)
        {
            int tree_age = trees[i].first;
            int tree_y = trees[i].second.first;
            int tree_x = trees[i].second.second;

            if (tree_age > 0)
            {
                save.emplace_back(make_pair(tree_age, make_pair(tree_y, tree_x)));    
            }
        }

        trees.clear();
        trees.assign(save.begin(), save.end());
    }

    int ans = 0;

    for (int i = 0; i < trees.size(); i++)
    {
        int tree_age = trees[i].first;

        if (tree_age > 0)
            ans++;
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> K;

    ground.assign(N, vector<int>(N, 5));
    food.assign(N, vector<int>(N, 5));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> food[i][j];
        }
    }

    for (int i = 0; i < M; i++)
    {
        cin >> x >> y >> z;
        trees.emplace_back(make_pair(z, make_pair(x-1, y-1)));
    }

    solution();
}
*/

/* 17140번 이차원 배열과 연산
// 해설 : 전체 크기를 기반으로 배열을 생성한 후, 숫자 세기 -> 이후 다시 재입력
// 참고 : https://yabmoons.tistory.com/233

int r, c, k;

vector<vector<int>> a;
int number_cnt[101];

void solution()
{
    int cnt = 0;
    int row = 3;
    int col = 3;

    if (a[r][c] == k)
    {
        cout << cnt;
        return;
    }

    while (cnt <= 100)
    {
        cnt++;
        vector<int> size;

        if (row >= col)
        {
            for (int i = 1; i <= row; i++)
            {
                vector<pair<int, int>> v;
                memset(number_cnt, 0, sizeof(number_cnt));
                for (int j = 1; j <= col; j++)
                    number_cnt[a[i][j]]++;

                for (int j = 1; j < 101; j++)
                {
                    if (number_cnt[j] == 0)
                        continue;
                    v.emplace_back(make_pair(number_cnt[j], j));
                }

                sort(v.begin(), v.end());
                for (int j = 1; j <= col; j++)
                    a[i][j] = 0;

                int idx = 1;
                for (int j = 0; j < v.size(); j++)
                {
                    a[i][idx++] = v[j].second;
                    a[i][idx++] = v[j].first;
                }
                idx--;
                size.emplace_back(idx);
            }
            sort(size.begin(), size.end());
            col = size.back();
        }
        else
        {
            for (int i = 1; i <= col; i++)
            {
                vector<pair<int, int>> v;
                memset(number_cnt, 0, sizeof(number_cnt));

                for (int j = 1; j <= row; j++)
                    number_cnt[a[j][i]]++;

                for (int j = 1; j < 101; j++)
                {
                    if (number_cnt[j] != 0)
                    {
                        v.emplace_back(make_pair(number_cnt[j], j));
                    }
                }

                sort(v.begin(), v.end());

                for (int j = 1; j <= row; j++)
                    a[j][i] = 0;

                int idx = 1;
                for (int j = 0; j < v.size(); j++)
                {
                    a[idx++][i] = v[j].second;
                    a[idx++][i] = v[j].first;
                }
                idx--;
                size.emplace_back(idx);
            }

            sort(size.begin(), size.end());
            row = size.back();
        }

        if (a[r][c] == k)
        {
            cout << cnt;
            return;
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

    cin >> r >> c >> k;
    a.assign(101, vector<int>(101, 0));

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> a[i][j];
        }
    }

    solution();
}
*/