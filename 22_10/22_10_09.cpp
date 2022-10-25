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

/* 2467번, 2470번 두 용액
// 해설 : 투포인터 앞뒤로 바꾸기.
// 참고 : https://m.blog.naver.com/iambigman97/221860065921

int N;

vector<long long> arr;

void solution()
{
    long long lo = 0;
    long long hi = N - 1;

    long long num = abs(arr[lo] + arr[hi]);
    long long ans_1 = arr[lo];
    long long ans_2 = arr[hi];

    while(lo < hi)
    {
        long long sum = arr[lo] + arr[hi];
        
        if(num > abs(sum))
        {
            num = abs(sum);
            ans_1 = arr[lo];
            ans_2 = arr[hi];
        }

        if(sum < 0) //오른쪽을 줄여봤자 합이 더 작은수로 감
            lo++;
        else //왼쪽을 줄이면 합이 더 커진수로 감
            hi--;
    }

    cout << ans_1 << " " << ans_2 << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    arr.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }
    sort()
    solution();
}
*/

/* 2166번 다각형의 면적
// 해설 : 외적의 1/2 은 면적, cout 의 소숫점은 cout << fixed, cout.precision(N);
// 참고 : https://kibbomi.tistory.com/204

int N;

vector<pair<int, int>> v;
double ans;

long long outer_product(pair<long long, long long> x, pair<long long, long long> y)
{
    return x.first * y.second - x.second * y.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    for (int i = 1; i < N - 1; ++i)
    {
        ans += (double)(outer_product({v[i].first - v[0].first, v[i].second - v[0].second}, {v[i + 1].first - v[0].first, v[i + 1].second - v[0].second}) / 2.0);
    }
    cout << fixed;
    cout.precision(1);
    cout << abs(ans);

    return 0;
}
*/

/* 12852번 1로 만들기 2
// 해설 : bfs 역추적

int N;
vector<int> save;
vector<bool> visited;
vector<int> graph;

void solution()
{
    graph.assign(N + 1, 0);
    visited.assign(N + 1, false);

    queue<pair<int, int>> q;
    q.emplace(make_pair(N, 0));
    visited[N] = true;

    while(!q.empty())
    {
        int value = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if(value == 1)
        {
            cout << cnt << endl;

            int idx = value;

            vector<int> track;

            while(idx != N)
            {
                track.emplace_back(idx);
                idx = graph[idx];
            }

            track.emplace_back(N);

            for(int i = track.size() - 1 ; i >= 0 ; i--)
            {
                cout << track[i] << " ";
            }

            return;
        }

        if(value % 3 == 0)
        {
            if(!visited[value/3])
            {
                visited[value/3] = true;
                q.emplace(make_pair(value/3, cnt + 1));
                graph[value/3] = value;
            }
        }

        if(value % 2 == 0)
        {
            if(!visited[value/2])
            {
                visited[value/2] = true;
                q.emplace(make_pair(value/2, cnt + 1));
                graph[value/2] = value;
            }
        }

        if(value - 1 > 0)
        {
            if(!visited[value - 1])
            {
                visited[value - 1] = true;
                q.emplace(make_pair(value - 1, cnt + 1));
                graph[value - 1] = value;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    solution();
}
*/