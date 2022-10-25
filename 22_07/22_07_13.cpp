#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

/* 골드바흐의 추측
bool Goldbach(int num)
{
    for(int i = 2; i <= sqrt(num) ; i++)
    {
        if(num%i == 0)
            return false;
    }
    return true;
}
*/

/* 약수의 합 1
#define MAX 1000001

long long f[MAX];
long long g[MAX];
*/
int main()
{
    /* 골드바흐의 추측
    int input = 1;
    int a,b ;
    bool suc = false;

    while(input)
    {
        scanf("%d", &input);

        for(int i = 1 ; i <= input ; i++)
        {
            a = 2*i + 1;
            b = input - a;
            if(Goldbach(a) & Goldbach(b))
            {
                printf("%d = %d + %d\n", input, a, b);
                suc = true;
                break;
            }
        }

        if(!suc)
            printf("Goldbach's conjecture is wrong.\n");
    }
    */

    /* 소수 찾기
    int num1, temp;
    int cnt, count = 0;
    scanf("%d", &num1);

    for(int i = 0; i < num1 ; i++)
    {
        scanf("%d", &temp);
        for(int j = 1 ; j <= temp ; j++)
        {
            if(temp%j == 0)
                cnt++;
        }
        if(cnt == 2)
            count += 1;
        cnt = 0;
    }

    printf("%d", count);
    */

    /* 약수의 합 1
    int n, temp;

    for(int i = 1; i < MAX ; i++)
    {
        for(int j = 1; i*j < MAX ; j++)
        {
            f[i*j] += i;
        }
    }

    g[1] = f[1];

    for(int i=2; i<MAX; i++)
    {
        g[i] = g[i-1] + f[i];
    }

    scanf("%d", &n);

    for(int count = 0; count<n ; count++)
    {
        scanf("%d", &temp);
        printf("%lld \n", g[temp]);
        
    }
    */

    /* 약수의 합 2
    int n;
    long long temp = 0;
    scanf("%d", &n);

    for(int a = 1 ; a<= n ; a++)
    {
        temp+=(n/a)*a;
    }

    printf("%lld", temp);
    */

    /* 수학 문제 2
    int num;
    cin>>num;
    int arr[num];

    for(int a = 0; a < num; a++)
    {
        cin>>arr[a];
    }
    std::sort(arr, arr+num);
    cout<<arr[0]*arr[num-1]<<endl;
    */

    /* 수학 문제 1
    int A, B, C; 

    cin>>A;
    cin>>B;
    cin>>C;

    cout<<(A+B)%C<<endl;
    cout<<((A%C)+(B%C))%C<<endl;
    cout<<(A*B)%C<<endl;
    cout<<((A%C)*(B%C))%C<<endl;
    */
}