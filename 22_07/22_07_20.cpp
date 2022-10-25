#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

/* 14002번 가장 긴 증가하는 부분 순열4 이해가 더 필요함
int main()
{
    int A;
    scanf("%d", &A);

    int arr[1000] = {1000, };
    int dp[1000] = {1000, }; // dp[idx] idx의 제일 긴 수열의 길이

    std::vector<int> long_arr[1000];
    std::vector<int> ans;

    std::fill(arr, arr+1000, 1000);

    for(int i = 0 ; i < A ; i ++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0 ; i < A ; i++)
    {
        dp[i] = 1;
        long_arr[i].push_back(arr[i]);

        for(int j = 0; j < i ; j++)
        {
            if(arr[i] > arr[j])
            {
                if(dp[i] < dp[j] + 1)
                {
                    long_arr[i].clear();
                    long_arr[i] = long_arr[j];
                    long_arr[i].push_back(arr[i]);
                    dp[i] = dp[j] + 1;
                }
            }
        }

        if(ans.size() < long_arr[i].size())
        {
            ans = long_arr[i];
        }
    }

    printf("%d\n", ans.size());

    for(int i = 0 ; i < ans.size(); i++)
    {
        if(i != ans.size() - 1)
        {
            printf("%d ", ans[i]);    
        }else printf("%d", ans[i]);
    }
}
*/

/* 16194번 카드 구매하기2
해설: 카드 구매하기 1번과 같이 DP문제. 최소로 값을 저장하기 때문에 price[1001]을 최대값으로 정해두는 것이 관건.
int main()
{
    int N;
    scanf("%d", &N);

    int arr[1001] = {0, };
    int price[1001] = {10000, };

    std::fill(price, price + 1001, 10000);

    for(int i = 1 ; i <= N ; i++)
    {
        scanf("%d", &arr[i]);
    }

    price[0] = arr[0] = 0;

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            price[i] = std::min(price[i], price[i-j] + arr[j]);
        }
    }

    printf("%d\n", price[N]);
}
*/

/* 11052번 카드 구매하기.
해설: DP사용하는 문제. 총 N개의 카드를 구매한다면 1개와 N-1개 구매 / 2개와 N-2개 구매 --- i개와 N-i개 구매(점화식)
int main()
{
    int N;
    scanf("%d", &N);
    
    int arr[1001] = {0, };
    int price[1001] = {0, };

    for(int i = 1 ; i <= N ; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            price[i] = std::max(price[i], price[i - j] + arr[j]);
        }
    }

   printf("%d\n", price[N]);
}
*/