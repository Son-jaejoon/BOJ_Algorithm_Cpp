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

/* 1124번 언더프라임
// 해설 : 에라토스테네스의 체, 구현
// url : https://www.acmicpc.net/problem/1124

int A, B;

void input()
{
    cin >> A >> B;
}

void solution()
{
    vector<bool> chk(B + 1, true);
    vector<int> arr(B + 1, 0);

    chk[0] = false;
    chk[1] = false;

    int answer = 0;

    for(int i = 2 ; i <= B ; i++)
    {
        if(chk[i])
        {
            for(int j = i + i ; j <= B ; j += i)
            {
                chk[j] = false;
                int curr_num = j;

                while(curr_num % i == 0)
                {
                    curr_num /= i;
                    arr[j]++;
                }
            }
        }
    }

    for(int i = A ; i <= B ; i++)
    {
        if(chk[arr[i]])
            answer++;
    }

    cout << answer;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();
}
*/