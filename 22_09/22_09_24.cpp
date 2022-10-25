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

/* 11085번 군사 이동
// 해설 : 현재 존재하는 가장 큰 길 부터 이동하다보면 상대 진영에 도달할 때가 있음.(C == V)그때 값 출력.
// 참고 : https://blog.naver.com/kks227/220791837179

int P, W, C, V;
vector<int> connect;

struct info
{
    int s, e, width;
};

info create(int s, int e, int width)
{
    info n_info;

    n_info.s = s;
    n_info.e = e;
    n_info.width = width;

    return n_info;
}

vector<info> line;

bool cmp(info a, info b)
{
    if(a.width > b.width)
        return true;
    else
        return false;
}

int find_loot(int n)
{
    if(connect[n] < 0)
        return n;
    connect[n] = find_loot(connect[n]);

    return connect[n];
}

void merge(int a, int b)
{
    a = find_loot(a);
    b = find_loot(b);
    
    if(a == b)
        return;
    
    connect[b] = a;
}

void solution()
{
    for(int i = 0 ; i < line.size() ; i++)
    {
        int x = find_loot(line[i].s);
        int y = find_loot(line[i].e);
        int cost = line[i].width;

        if(x != y)
            merge(x, y);
        
        if(find_loot(C) == find_loot(V))
        {
            cout << cost;
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> P >> W >> C >> V;
    connect.assign(P+1, -1);

    for(int i = 0 ; i < W ; i++)
    {
        int s, e, width;

        cin >> s >> e >> width;

        line.emplace_back(create(s, e, width));
    }

    sort(line.begin(), line.end(), cmp);

    solution();
}
*/

/* 1717번 집합의 표현
// 해설 : 유니온 파인트
// 해설 : https://blog.naver.com/kks227/220791837179

int N, M;
vector<int> arr;

int find_loot(int n)
{
    if(arr[n] < 0)
        return n;
    arr[n] = find_loot(arr[n]);

    return arr[n];
}

void merge(int a, int b)
{
    a = find_loot(a);
    b = find_loot(b);

    if(a == b)
        return;
    
    arr[b] = a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    arr.assign(N + 1, -1);

    for(int i = 0 ; i < M ; i++)
    {
        int a,b,c;

        cin >> a >> b >> c;

        if(a == 0)
        {
            merge(b, c);
        }
        else if(a == 1)
        {
            if(find_loot(b) == find_loot(c))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}

*/