#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>

/* »çÅÁ °ÔÀÓ
int num = 3;
int cnt, result = 1;
char arr[50][50];


void check_candy()
{
    int count = 1;
    char c;
    for(int i=0 ; i<num ; i++)
    {
        count = 1;
        c = arr[i][0];
        for(int j = 1 ; j < num ; j++)
        {
            if(arr[i][j] == c)
                count += 1;
            else count = 1;

            c = arr[i][j];
            if(count > result)
                result = count;
        }
    }

    for(int i=0 ; i<num ; i++)
    {
        count = 1;
        c = arr[0][i];
        for(int j = 1 ; j < num ; j++)
        {
            if(arr[j][i] == c)
                count += 1;
            else count = 1;

            c = arr[j][i];
            if(count > result)
                result = count;
        }
    }
}

int main()
{
    scanf("%d", &num);

    for(int i = 0 ; i<num ; i++)
    {
        for(int j = 0 ; j<num ; j++)
        {
            std::cin>>arr[i][j];
        }
    }

    for(int i = 0 ; i<num ; i++)
    {
        for(int j = 1 ; j<num ; j++)
        {
            std::swap(arr[i][j-1], arr[i][j]);
            check_candy();
            std::swap(arr[i][j-1], arr[i][j]);
        }
    }

    for(int i = 0 ; i<num ; i++)
    {
        for(int j = 1 ; j<num ; j++)
        {
            std::swap(arr[j-1][i], arr[j][i]);
            check_candy();
            std::swap(arr[j-1][i], arr[j][i]);
        }
    }

    printf("%d", result);
}
*/

/* ÀÏ°ö ³­ÀïÀÌ
int main()
{
    int num = 0;
    int sum, temp = 0;
    int one, two = 0;
    int arr[9];


    for(int i = 0 ; i < 9 ; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
        sum += arr[i];
    }

    temp = sum - 100;

    std::sort(arr, arr+9);

    for(int i = 0 ; i < 9 ; i++)
    {
        for(int j = i+1 ; j < 9 ; j++)
        {
            if(arr[i] + arr[j] == temp)
            {
                one = i;
                two = j;
                break;
            }
        }
    }

    for(int i = 0; i < 9 ; i++)
    {
        if(i == one)
            continue;
        else if(i == two)
            continue;
        printf("%d \n", arr[i]);
    }
}
*/

/* 1
int main()
{
    int num, cnt = 1;
    int sum = 0;

    while(scanf("%d", &num) > 0)
    {
        sum = 0;
        cnt = 1;
        while(1)
        {
            sum = sum*10 + 1;
            if(sum % num == 0)
                break;
            sum %= num;
            cnt++;
        }

        printf("%d \n", cnt);
    }
}

/* ¼Ò¼ö ±¸ÇÏ±â
int main()
{
    int num1, num2;
    bool suc;
    scanf("%d %d", &num1, &num2);

    for(num1; num1<=num2 ; num1++)
    {
        if(num1 == 1)
            suc = true;
        else suc = false;

        for(int i=2; i <= sqrt(num1) ; i++)
        {
            if(num1%i == 0)
            {
                suc = true;
                break;
            }

        }
        if(!suc)
            printf("%d \n", num1);
    }
}
*/