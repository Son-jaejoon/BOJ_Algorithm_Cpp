#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>

/* 16929번 Two Dots
//해설: dfs를 이용한 문제. 상하좌우로 이동하되 반대 쪽 으로 이동시 return. 그 외에 에는 박스안에 있는지
//type이 같은지 계산 후 끝까지 간다. 만일 끝까지 가다가 체크포인트가 true이고 type이 같다면 첫자리에 도착
//한 것이기 때문에 원을 만든 것으로 간주한다.
//참고 : https://rolypolytoy.tistory.com/34

char map[51][51];
bool chk[51][51];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n,m;

void dfs(int x, int y, char type, int d)
{
    chk[x][y] = true;

    if(map[x][y] != type)
        return;

    for(int i = 0 ; i < 4 ; i++)
    {
        if(i == ((d + 2) % 4))
            continue;
        
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < n && ny >= 0 && ny < m && map[nx][ny] == type && !chk[nx][ny])
        {
            dfs(nx, ny, type, i);
        }else if(map[nx][ny] == type && chk[nx][ny])
        {
            printf("Yes");
            exit(0);
        }
    }
}

int main()
{
    scanf("%d %d", &n, &m);

    for(int i = 0; i<n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            std::cin>>map[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            char tmp = map[i][j];

            if(!chk[i][j])
            {
                int d = -1;

                for(int k = 0; k < 4 ; k++)
                {
                    if(map[i+dx[k]][j + dy[k]] == tmp)
                    {
                        d = k;
                        break;
                    }
                }

                if(d == -1)
                    continue;
                
                dfs(i, j, tmp, d);
            }
        }
    }

    printf("No");
}
*/

/* 1644번 소수의 연속합
//해설 : 원하는 값의 1/2 보다 큰 소수의 경우 최소 2개만 더하더라도 오버 되기때문에
//i의 2배가 원하는 N의 값보다 작은 경우를 벡터에 저장 후 포인터의 합 계산

int main()
{
    int N;
    std::vector<bool> check;
    std::vector<int> prime;

    scanf("%d", &N);
    check.resize(N + 1, true);

    for (int i = 2; i * i <= N; i++)
    {
        if (check[i] == true)
        {
            for (int j = i + i; j <= N; j += i)
                check[j] = false;
        }
    }

    for (int i = 2; i < N + 1; i++)
    {
        if (check[i] == true)
            prime.push_back(i);
    }

    int cnt = 0, high = 0, low = 0, sum = 0;

    while (1)
    {
        if (sum >= N)
            sum -= prime[low++];
        else if (high == prime.size())
            break;
        else
            sum += prime[high++];

        if (sum == N)
            cnt++;
    }

    printf("%d", cnt);
    return 0;
}
*/

/* 1806번 부분합
// 해설: 왜 틀린지 모르겠다.
int N;
int S;

int arr[100001];
int length = 100001;

void part_sum(int num)
{
    int tmp = 0;

    for (int i = num; i < N; i++)
    {
        tmp = tmp + arr[i];

        if (tmp >= S)
        {
            if (length > i - num + 1)
            {
                length = i - num + 1;
            }

            part_sum(num + 1);
            return;
        }
    }

    return;
}

int main()
{
    scanf("%d %d", &N, &S);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    if(std::accumulate(arr, arr + N, 0) < S)
        printf("0");
    else
    {
        part_sum(0);
        printf("%d", length);
    }
}
*/