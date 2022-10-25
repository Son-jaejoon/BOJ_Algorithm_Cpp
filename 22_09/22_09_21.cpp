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

/* 15732번 도토리 숨기기
// 해설 : 범위 안에 도토리의 갯수를 세는 것이 핵심 + 이분 탐색

int N, K;
long long D;

vector<int> box;

struct info
{
    int A, B, C;
};

info create(int A, int B, int C)
{
    info n_info;

    n_info.A = A;
    n_info.B = B;
    n_info.C = C;

    return n_info;
}

vector<info> task;

void solution()
{
    int start_box = 0;
    int end_box = N;

    while(start_box <= end_box)
    {
        long long sum = 0;
        int mid = (start_box + end_box)/2;

        for(int i = 0 ; i < K ; i++)
        {
            if(task[i].A > mid)
                continue;
            
            if(task[i].B > mid)
            {
                sum += (mid - task[i].A)/task[i].C + 1;
            }
            else
            {
                sum += (task[i].B - task[i].A)/task[i].C + 1;
            }

            
            if(sum >= D)
                break;
        }

        if(sum >= D)
            end_box = mid - 1;
        else
        {
            start_box = mid + 1;
        }
    }

    cout << start_box;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K >> D;
    box.assign(N + 1, 0);

    for(int i = 0 ; i < K ; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        task.emplace_back(create(a, b, c));
    }

    solution();
}
*/

/* 16434번 드래곤 앤 던전
// 해설 : long long 의 최대는 1e18, 자료형을 long long으로 하는 것이 중요

float N, h_atk;

struct info
{
    int t, a, h;
};

info create(int t, int a, int h)
{
    info n_info;
    n_info.t = t;
    n_info.a = a;
    n_info.h = h;

    return n_info;
}

vector<info> room;

void solution()
{
    long long start_hp = 1;
    long long start_end = 1e18;
    long long result = -1;

    while(start_hp  <= start_end)
    {
        long long max_hp = (start_hp + start_end)/2;
        long long cur_hp = max_hp;

        long long atk = h_atk;

        for(int i = 0 ; i < room.size() ; i++)
        {
            long long room_h = room[i].h;
            long long room_a = room[i].a;

            if(room[i].t == 1)
            {
                cur_hp = cur_hp - (room_h / atk + (room_h % atk > 0) - 1)* room_a;

                if(cur_hp <= 0)
                    break;
            }
            else if(room[i].t == 2)
            {
                atk += room_a;

                if(cur_hp + room_h > max_hp)
                    cur_hp = max_hp;
                else
                    cur_hp += room_h;
            }
        }

        if(cur_hp <= 0)
            start_hp = max_hp + 1;
        else
        {
            result = max_hp;
            start_end = max_hp - 1;
        }
    }

    cout << start_hp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> h_atk;

    for(int i = 0 ; i < N ; i++)
    {
        int t;
        long long a, h;
        cin >> t >> a >> h;
        room.emplace_back(create(t, a, h));
    }

    solution();
}
*/