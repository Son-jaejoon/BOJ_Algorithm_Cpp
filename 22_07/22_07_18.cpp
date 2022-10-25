#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <memory.h>

/* 10819번 차이를 최대로
int main()
{
    int n;
    scanf("%d", &n);
    int max_num = 0;

    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    std::sort(arr, arr+n);

    do
    {
        int sum = 0 ;

        for(int i = 0 ; i < n-1 ; i++)
        {
            sum += std::abs(arr[i] - arr[i+1]);
        }

        max_num = std::max(max_num, sum);

    }while(std::next_permutation(arr, arr+n));

    printf("%d", max_num);
}
*/

/* 6603번 로또
int cnt = 0;

int main()
{
    int num = 1;
    while(1)
    {
        std::vector<int> ind;
        scanf("%d", &cnt);

        if(cnt == 0)
            return 0;
        
        int arr[cnt];
        
        for(int i = 0 ; i < cnt ; i++)
        {
            scanf("%d", &num);
            arr[i] = num;
            
        }

        std::sort(arr, arr+cnt);

        for(int i = 0 ; i<6 ; i++)
        {
            ind.push_back(1);
        }

        for(int i = 0 ; i<cnt - 6 ; i++)
        {
            ind.push_back(0);
        }

        do
        {
            for(int i=0; i<ind.size() ; i++)
            {
                if(ind[i] == 1)
                {
                    if(i == ind.size()-1)
                        printf("%d", arr[i]);
                    else printf("%d ", arr[i]);
                }
            }
            printf("\n");
        }while(std::prev_permutation(ind.begin(), ind.end()));

        printf("\n");
    }
}
*/

/* 이전 순열 10973번
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    if (std::prev_permutation(a, a+n))
    {
        for (int i=0; i<n; i++)
            printf("%d ", a[i]);
        
        printf("\n");
    } else printf("-1\n");

    return 0;
}
*/