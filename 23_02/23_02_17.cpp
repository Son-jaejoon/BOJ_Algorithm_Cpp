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

/* 14891¹ø Åé´Ï¹ÙÄû
// ÇØ¼³ : ±¸Çö
// url : https://www.acmicpc.net/problem/14891

vector<deque<int>> v(5);
int rotation[5];
bool chk[5];

void setRotation(int g, int d)
{
    rotation[g] = d;
    chk[g] = true;

    if(g - 1 > 0 && !chk[g - 1])
    {
        if(d == 0)
            setRotation(g - 1, 0);
        else if(v[g][6] == v[g - 1][2])
            setRotation(g - 1, 0);
        else
            setRotation(g - 1, -d);
    }

    if(g + 1 <= 4 && !chk[g + 1])
    {
        if(d == 0)
            setRotation(g + 1, 0);
        else if(v[g][2] == v[g + 1][6])
            setRotation(g + 1, 0);
        else
            setRotation(g + 1, -d);
    }
}

void rotate()
{
    for(int i = 1 ; i <= 4 ; i++)
    {
        if(rotation[i] == 0)
            continue;
        else if(rotation[i] == 1)
        {
            int tmp = v[i].back();
            v[i].pop_back();
            v[i].emplace_front(tmp);
        }
        else{
            int tmp = v[i].front();
            v[i].pop_front();
            v[i].emplace_back(tmp);
        }
    }
}

void solution(int g, int d)
{
    setRotation(g, d);
    rotate();
}

void print_answer()
{
    int answer = 0;

    for(int i = 1 ; i <= 4 ; i++)
    {
        if(v[i][0] == 1)
        {
            answer += pow(2, i - 1);
        }
    }

    cout << answer;
}

void input()
{
    char ch;

    for(int i = 1 ; i <= 4 ; i++)
    {
        for(int j = 0 ; j < 8 ; j++)
        {
            cin >> ch;
            v[i].emplace_back(ch - '0');        
        }
    }

    int num = 0;
    cin >> num;

    while(num--)
    {
        int g, d;
        cin >> g >> d;
        memset(chk, false, sizeof(chk));
        solution(g, d);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    print_answer();
}

*/