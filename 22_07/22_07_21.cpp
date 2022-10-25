#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>
#include <memory.h>

/* 13398번 연속합2
해설: 왼쪽부터 하나씩 더해 max를 통해 최대 값을 저장한다.
선택해서 없애는 경우는 없앤 구간을 기준으로 왼쪽 최대와 오른쪽 최대를 더하면 되는 데
오른쪽 최대를 구하는 방법은 첫줄에서 구한 방식의 역순으로 배열을 저장하면 된다.

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    int dp1[n]; //왼쪽에서 부터 큰값
    dp1[0] = arr[0];

    for(int i = 1 ; i < n ; i++)
    {
        dp1[i] = std::max(dp1[i-1] + arr[i], arr[i]);
    }

    int ans1 = *std::max_element(dp1, dp1 + n);
    
    int dp2[n];
    dp2[n-1] = arr[n-1];
    
    for(int i = n-2 ;  i >= 0 ;  i--)
    {
        dp2[i] = std::max(dp2[i+1] + arr[i], arr[i]);
    }

    int dp3[n];
    dp3[0] = dp2[1];
    dp3[n-1] = dp1[n-1];

    for(int i = 1 ; i < n - 1 ; i++)
    {
        dp3[i] = dp1[i-1] + dp2[i+1];
    }

    int ans2 = *std::max_element(dp3, dp3 + n);

    int result = std::max(ans1, ans2);
    printf("%d\n", result);
}
*/

/* 2156번 포도주 시식
해설 : 이전에 먹은 것을 비교해서 어느것이 제일 큰지 고민하는 문제이다.
한번 더 보면 좋을 듯 싶음. 비슷한 유형으로 계단문제가 있다고 함.
이해를 돕기 위한 URL : https://blog.naver.com/kim519620/222819147055

int n;
int arr[10001];
int dp[10001];

void wine()
{
    int temp1 = 0;
    int temp2 = 0;

    dp[0] = arr[0];
    dp[1] = arr[0] + arr[1];

    for (int i = 2; i < n; i++)
    {
        if (i - 3 >= 0)
        {
            temp1 = std::max(dp[i - 2], dp[i - 3] + arr[i - 1]) + arr[i];
            temp2 = std::max(dp[i - 1], dp[i - 2] + arr[i]);
        }else
        {
            temp1 = std::max(dp[i - 2], arr[i - 1] + arr[i]);
            temp2 = std::max(dp[i - 1], arr[i - 2] + arr[i]);
        }

        dp[i] = std::max(temp1, temp2);
    }
    std::cout<<*std::max_element(dp, dp + n)<<std::endl;
}

int main()
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    wine();
}
*/

/* 15988번 1,2,3 더하기 3
해설: 4의 수를 구할 시 4 = 3 + 1, 2 + 2, 1 + 3 처럼 점화식으로 구현할 수 있다.
     값이 큰 경우 int의 범위를 넘어가 오버플로우가 발생할 수 있으니 값이 큰 경우엔 long long 을 사용한다.
long long memo[1000001] = {0, };

long long cnt_fx(int num)
{
    if (num > 0)
    {
        if (num == 1)
            return 1;
        else if (num == 2)
            return 2;
        else if (num == 3)
            return 4;
        else if (memo[num] != 0)
            return memo[num];
        else
        {
            return memo[num] = (cnt_fx(num - 1) + cnt_fx(num - 2) + cnt_fx(num - 3)) % 1000000009;
        }
    }

    return 0;
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int number;
        scanf("%d", &number);
        printf("%d\n", cnt_fx(number) % 1000000009);
    }
}
*/