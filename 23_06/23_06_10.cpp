#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <string>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#include <numeric>
#include <deque>
#define endl "\n"

using namespace std;

/* 16507번 어두운 건 무서워
// 해설 : 누적합
// url : https://www.acmicpc.net/problem/16507

int R, C;
vector<vector<int>> pixel;
vector<vector<int>> sum_pixel;

void solution(int &start_y, int &start_x, int &end_y, int &end_x)
{
    int sum = 0;
    int cnt = 0;

    for(int i = start_y ; i <= end_y ; i++)
    {
        sum += sum_pixel[i][end_x] - sum_pixel[i][start_x - 1];
        cnt += end_x - start_x + 1;
    }

    cout << sum / cnt << endl;
}

void input()
{
    int Q;
    cin >> R >> C >> Q;
    pixel.assign(R + 1, vector<int>(C + 1, 0));
    sum_pixel.assign(R + 1, vector<int>(C + 1, 0));
    
    for(int i = 1 ; i <= R ; i++)
    {
        for(int j = 1 ; j <= C ; j++)
        {
            cin >> pixel[i][j];

            if(j == 1)
                sum_pixel[i][j] = pixel[i][j];
            else
                sum_pixel[i][j] = sum_pixel[i][j - 1] + pixel[i][j];
        }
    }

    int start_y, start_x, end_y, end_x;

    while(Q--)
    {
        cin >> start_y >> start_x >> end_y >> end_x;
        solution(start_y, start_x, end_y, end_x);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/