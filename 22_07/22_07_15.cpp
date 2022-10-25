#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>

/* 리모컨
std::vector<bool> remote(10) ;

int check(int n)
{
    if(n == 0)
    {
        if(remote[0])
            return 0;
        else return 1;
    }

    int len = 0;

    while(n>0)
    {
        if(remote[n%10])
            return 0;

        n /= 10;
        len += 1;
    }

    return len;

}

int main()
{
    int ch, broke = 0;
    scanf("%d %d", &ch, &broke);

    for(int i=0; i< broke; i++)
    {
        int n;
        scanf("%d", &n);
        remote[n] = true;
    }

    int count = abs(ch - 100);

    for(int i = 0 ; i <= 1000000 ; i++)
    {
        int len = check(i);

        if(len > 0)
        {
            int press = abs(i - ch);

            if(count > press + len)
                count = press + len;
        }
    }

    printf("%d \n", count);
}
*/

/* 테트로미노
int max_num, result = 0;
int col, row;
int arr[500][500];

int ShapeMax(int x, int y)
{
    // ㅡ
    if(x < col && y+3 < row)
    {
        result = std::max(result, arr[x][y] + arr[x][y+1] + arr[x][y+2] + arr[x][y+3]);
    }

    // ㅣ
    if(x + 3 < col && y < row)
    {
        result = std::max(result, arr[x][y] + arr[x+1][y] + arr[x+2][y] + arr[x+3][y]);
    }

    // ㅁ
    if(x+1 < col && y+1 < row)
    {
        result = std::max(result, arr[x][y] + arr[x][y+1] + arr[x+1][y] + arr[x+1][y+1]);
    }

    // ㄱ
    if(x+1 < col && y+2 < row)
    {
        result = std::max(result, arr[x][y] + arr[x][y+1] + arr[x][y+2] + arr[x+1][y]);

        result = std::max(result, arr[x][y] + arr[x][y+1] + arr[x][y+2] + arr[x+1][y+1]);

        result = std::max(result, arr[x][y] + arr[x][y+1] + arr[x][y+2] + arr[x+1][y+2]);
    }

    // ㄴ

    if(0 < x && x-1 < col && y+2 < row)
    {
        result = std::max(result, arr[x][y] + arr[x][y+1] + arr[x][y+2] + arr[x-1][y]); // 안됨

        result = std::max(result, arr[x][y] + arr[x][y+1] + arr[x][y+2] + arr[x-1][y+1]);

        result = std::max(result, arr[x][y] + arr[x][y+1] + arr[x][y+2] + arr[x-1][y+2]); // 안됨
    }


    if(x+2 < col && y+1 < row)
    {
        result = std::max(result, arr[x][y] + arr[x+1][y] + arr[x+2][y] + arr[x][y+1]);

        result = std::max(result, arr[x][y] + arr[x+1][y] + arr[x+2][y] + arr[x+1][y+1]);

        result = std::max(result, arr[x][y] + arr[x+1][y] + arr[x+2][y] + arr[x+2][y+1]);
    }

    if(x+2 < col && y-1 < row)
    {
        result = std::max(result, arr[x][y] + arr[x+1][y] + arr[x+2][y] + arr[x][y-1]);

        result = std::max(result, arr[x][y] + arr[x+1][y] + arr[x+2][y] + arr[x+1][y-1]);

        result = std::max(result, arr[x][y] + arr[x+1][y] + arr[x+2][y] + arr[x+2][y-1]);
    }

    if(0 < x && x-1 < col && x+1 < col && y+1 < row)
    {
        result = std::max(result, arr[x-1][y] + arr[x][y] + arr[x][y+1] + arr[x+1][y+1]);

        result = std::max(result, arr[x-1][y+1] + arr[x][y] + arr[x][y+1] + arr[x+1][y]);
    }

    if(x+1 < col && y-1 < row && y+1 < row)
    {
        result = std::max(result, arr[x][y] + arr[x+1][y] + arr[x][y+1] + arr[x+1][y-1]);

        result = std::max(result, arr[x][y] + arr[x+1][y] + arr[x][y-1] + arr[x+1][y+1]);
    }

    return result;
}

int main()
{
    max_num = 0;
    std::cin>>col>>row;

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            std::cin>>arr[i][j];
        }
    }

    for(int i = 0 ; i < col ; i ++)
    {
        for(int j = 0 ; j < row ; j++)
        {
            max_num = std::max(max_num, ShapeMax(i, j));
        }
    }
    std::cout<<max_num<<std::endl;;   
}
*/

/*카잉 달력
int main()
{
    int count;
    int m, n, x, y;
    int time;

    scanf("%d", &time);

    for (int i = 0; i < time; i++)
    {
        scanf("%d %d %d %d", &m, &n, &x, &y);
        int limit = std::lcm(m, n);

        for(count = x; count<= limit ; count+=m)
        {
            int temp = (count%n == 0) ? n : count % n;
            if(temp == y)
            {
                printf("%d \n", count);
                break;
            }
        }
        if(count > limit)
        {
            printf("-1 \n");
        }
    }
}
*/


