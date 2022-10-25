#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#define endl "\n"

using namespace std;

/* 16637번 괄호 추가하기
// 해설 : 어려움
// 참고 : https://luv-n-interest.tistory.com/1211

int N, ans;
string st;

int cal(int a, int b, char op)
{
    switch(op)
    {
        case '+': a += b;
            break;
        case '*': a *= b;
            break;
        case '-': a -= b;
            break;
    }
    return a;
}

void solution(int idx, int num)
{
    if(idx > N-1)
    {
        ans = max(ans, num);
        return;
    }

    char op = (idx == 0) ? '+' : st[idx - 1];

    if(idx + 2 < N)
    {
        int br = cal(st[idx] - '0', st[idx + 2] - '0', st[idx + 1]);
        solution(idx + 4, cal(num, br, op));
    }

    solution(idx + 2, cal(num, st[idx] - '0', op));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    cin >> st;
    
    solution(0, 0);

    cout << ans;
}
*/

/* 15686번 치킨 배달
// 해설 : 집과 치킨집의 좌표를 벡터에 저장 후 하나씩 선택해서 판단하는 방식 채택

int N, M, ans = 987654321;

vector<vector<int>> arr;
vector<pair<int, int>> house;
vector<pair<int, int>> chicken;
vector<pair<int, int>> select_chicken;

bool chicken_house[14];

void bfs()
{
    queue<pair<int, int>> q;
    int chicken_load = 0;

    for(int i = 0 ; i < house.size() ; i++)
    {
        q.emplace(make_pair(house[i].first, house[i].second));
    }

    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        int diff = N*N;

        for(int i = 0 ; i < select_chicken.size() ; i++)
        {
           int tmp_length = abs(select_chicken[i].first - y) + abs(select_chicken[i].second - x);
           diff = min(diff, tmp_length);
        }

        chicken_load += diff;
    }

    ans = min(ans, chicken_load);
}

void solution(int idx, int cnt)
{
    if(cnt <= M)
    {
        bfs();
    }
    else
        return;

    for(int i = idx ; i < chicken.size() ; i++)
    {
        if(!chicken_house[i])
        {
            chicken_house[i] = true;
            select_chicken.emplace_back(make_pair(chicken[i].first, chicken[i].second));
            solution(i + 1, cnt + 1);
            select_chicken.pop_back();
            chicken_house[i] = false;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    arr.assign(N + 1, vector<int>(N + 1, 0));

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= N ; j++)
        {
            cin >> arr[i][j];

            if(arr[i][j] == 1)
            {
                house.emplace_back(make_pair(i, j));
            }
            else if(arr[i][j] == 2)
            {
                chicken.emplace_back(make_pair(i, j));
            }
        }
    }
    
    solution(0, 0);
    cout << ans;
}
*/