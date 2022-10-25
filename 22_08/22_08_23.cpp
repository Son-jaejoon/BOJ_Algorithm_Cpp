#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
#include <cmath>
#define endl "\n"

using namespace std;

/* 16943번 숫자 재배치
// 해설 : 다음순열(next_permutation)을 이용하면 쉬움..
int A, B, C = -1;
string str;

void solution()
{
    do
    {
        int num = stoi(str);
        if(str[0] == '0')
            continue;
        if(num < B && C < num)
            C = num;
    }while(next_permutation(str.begin(), str.end()));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> A >> B;
    str = to_string(A);
    sort(str.begin(), str.end());

    solution();

    cout << C;
}
*/

/* 16924번 십자가 찾기
// 해설 : 하나씩 계산 후 visited를 통해 못만드는 경우 체크

int N, M;
int ans;

vector<vector<char>> arr;
vector<pair<int, int>> save;
vector<vector<bool>> visited;

struct xys
{
    int x;
    int y;
    int s;
};

xys create(int x, int y, int s)
{
    xys n_xys;
    n_xys.x = x;
    n_xys.y = y;
    n_xys.s = s;

    return n_xys;
}

vector<xys> v;

void solution(int a, int b)
{
    int up = 0;
    int down = 0;
    int left = 0;
    int right = 0;

    if(a - 1 < 0 || a + 1 >= N || b - 1 < 0 || b + 1 >= M)
        return;
    if(arr[a-1][b] == '.' || arr[a+1][b] == '.' || arr[a][b-1] == '.' || arr[a][b+1] == '.')
        return;
    
    for(int i = a - 1 ; i >= 0 ; i--)
    {
        int ny = i;

        if(arr[ny][b] == '.')
            break;
        else if(arr[ny][b] == '*')
            up++;
    }

    for(int i = a + 1 ; i < N ; i++)
    {
        int ny = i;

        if(arr[ny][b] == '.')
            break;
        else if(arr[ny][b] == '*')
            down++;
    }

    for(int i = b - 1 ; i >= 0 ; i--)
    {
        int nx = i;

        if(arr[a][nx] == '.')
            break;
        else if(arr[a][nx] == '*')
            left++;
    }

    for(int i = b + 1 ; i < M ; i++)
    {
        int nx = i;

        if(arr[a][nx] == '.')
            break;
        else if(arr[a][nx] == '*')
            right++;
    }

    int num = min(up, down);
    num = min(num, left);
    num = min(num, right);

    if(num != 0)
    {   
        for(int i = num ; i >= 0 ; i--)
        {
            if(!visited[a - i][b])
                visited[a - i][b] = true;
            if(!visited[a + i][b])
                visited[a + i][b] = true;
            if(!visited[a][b - i])
                visited[a][b - i] = true;
            if(!visited[a][b + i])
                visited[a][b + i] = true;
        }

        while(num > 0)
        {
            ans++;
            v.emplace_back(create(a, b, num));
            num--;
        }
    }
    
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    arr.assign(N, vector<char>(M, '.'));
    visited.assign(N, vector<bool>(M, false));

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            cin >> arr[i][j];

            if(arr[i][j] == '*')
                save.emplace_back(make_pair(i, j));
        }
    }

    for(int i = 0 ; i < save.size() ; i++)
    {
        solution(save[i].first, save[i].second);
    }

    for(int i = 0 ; i < save.size() ; i++)
    {
        if(!visited[save[i].first][save[i].second])
        {
            cout << -1;
            exit(0);
        }
    }

    if(ans == 0)
    {
        cout << -1;
    }
    else
    {
        cout << ans << endl;

        for(int i = 0 ; i < v.size() ; i++)
        {
            cout << v[i].x + 1 << " " << v[i].y + 1 << " " << v[i].s << endl;
        }
    }
}
*/