#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#include <numeric>
#define endl "\n"

using namespace std;

/* 1541번 잃어버린 괄호
// 해설 : 문자열, 구현, 그리디

string st;
int answer = 0;

void input()
{
    cin >> st;
}

void calculate_min()
{
    string num = "";
    bool is_minus = false;

    for(int i = 0 ; i <= st.size() ; i++)
    {
        if(i == st.size() || st[i] == '+' || st[i] == '-')
        {
            if(is_minus)
            {
                answer -= stoi(num);
                num = "";
            }
            else
            {
                answer += stoi(num);
                num = "";
            }
        }
        else
        {
            num += st[i];
        }

        if(st[i] == '-')
            is_minus = true;
    }
}

void solution()
{
    calculate_min();

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