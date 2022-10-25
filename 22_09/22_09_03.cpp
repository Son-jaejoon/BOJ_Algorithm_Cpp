#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 15558번 점프 게임
// 해설 : 왜틀린지 모르겠음.
// 참고 : https://yabmoons.tistory.com/134

int N, K;

vector<int> arr1;
vector<int> arr2;

struct info
{
    int direction; // 0 : 왼쪽, 1 : 오른쪽
    int location;
    int time;
};

info create(int dir, int location, int time)
{
    info n_info;
    n_info.direction = dir;
    n_info.location = location;
    n_info.time = time;

    return n_info;
}

void solution()
{
    queue<info> q;
    q.emplace(create(0, 1, 0));

    while (!q.empty())
    {
        int dir = q.front().direction;
        int location = q.front().location;
        int time = q.front().time;
        q.pop();

        if (location + 1 > time + 1) // 전진
        {
            if (location + 1 > N)
            {
                cout << 1;
                exit(0);
            }

            if (dir == 0 && arr1[location + 1] == 1)
            {
                q.emplace(create(0, location + 1, time + 1));
            }
            else if (dir == 1 && arr2[location + 1] == 1)
            {
                q.emplace(create(1, location + 1, time + 1));
            }
        }

        if (location - 1 > time + 1)
        {
            if (dir == 0 && arr1[location - 1] == 1)
            {
                q.emplace(create(0, location - 1, time + 1));
            }
            else if (dir == 1 && arr2[location - 1] == 1)
            {
                q.emplace(create(1, location - 1, time + 1));
            }
        }

        if (location + K > time + 1)
        {
            if (location + K > N)
            {
                cout << 1;
                exit(0);
            }

            if (dir == 0 && arr2[location + K] == 1)
            {
                q.emplace(create(1, location + K, time + 1));
            }
            else if(dir == 1 && arr1[location + K] == 1)
            {
                q.emplace(create(0, location + K, time + 1));
            }
        }
    }

    cout << 0;
    exit(0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    arr1.assign(N + 1, 0);
    arr2.assign(N + 1, 0);

    for (int i = 1 ; i <= N; i++)
    {
        scanf("%1d", &arr1[i]);
    }

    for (int i = 1 ; i <= N; i++)
    {
        scanf("%1d", &arr2[i]);
    }

    solution();
}
*/