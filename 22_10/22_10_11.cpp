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

/* 2473번 세용액
// 해설 : 트리 포인터가 아닌 투포인터로 하나 잡고 돌리기.

int N;
vector<long long> arr;

void solution()
{
    long long ans = 9999999999;
    int save_first = 0;
    int save_second = 0;
    int save_third = 0;

    bool chk = false;

    for(int i = 0 ; i < N - 2 ; i++)
    {
        if(chk)
            break;
        
        long long save = arr[i];

        int first = i;
        int start = i + 1;
        int end = N - 1;
        
        while(start < end)
        {
            long long sum = arr[start] + arr[end] + save;

            if(ans > abs(sum))
            {
                ans = abs(sum);
                save_first = arr[first];
                save_second = arr[start];
                save_third = arr[end];
            }

            if(sum == 0)
            {
                chk = true;
                break;
            }

            if(sum > 0)
                end--;
            else if(sum < 0)
                start++;
        }
    }

    cout << save_first << " " << save_second << " " << save_third;
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

    sort(arr.begin(), arr.end());

    solution();
}
*/

/* 17404번 RGP거리 2
// 해설 : BFS로 풀려했으니 메모리 초과됨, DP로 풀어야함.
// 참고 : https://imnotabear.tistory.com/81

#define RED 0
#define GREEN 1
#define BLUE 2

int N;
int house[1001][3];

struct info
{
    int idx, color, cost, first;
};

info create(int idx, int color, int cost, int first)
{
    info n_info;

    n_info.idx = idx;
    n_info.color = color;
    n_info.cost = cost;
    n_info.first = first;

    return n_info;
}

void solution()
{
    int ans = 987654321;

    queue<info> q;
    q.emplace(create(0, RED, house[0][RED], RED));
    q.emplace(create(0, GREEN, house[0][GREEN], GREEN));
    q.emplace(create(0, BLUE, house[0][BLUE], BLUE));

    while(!q.empty())
    {
        int prev_idx = q.front().idx;
        int prev_col = q.front().color;
        int cost = q.front().cost;
        int first_col = q.front().first;
        q.pop();

        if(prev_idx == N - 1)
        {
            ans = min(ans, cost);
            continue;
        }

        if(prev_idx == N - 2)
        {
            int next_idx = prev_idx + 1;
            
            for(int i = 0 ; i < 3 ; i++)
            {
                if(i == prev_col || i == first_col)
                    continue;
                
                int sum_cost = cost + house[next_idx][i];
                q.emplace(create(next_idx, i, sum_cost, first_col));
            }
            continue;
        }

        for(int i = 0 ; i < 3 ; i++)
        {
            int next_idx = prev_idx + 1;
            int sum_cost = cost + house[next_idx][i];

            if(i == prev_col)
                continue;

            q.emplace(create(next_idx, i, sum_cost, first_col));
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
    
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cin >> house[i][j];
        }
    }

    solution();
}
*/