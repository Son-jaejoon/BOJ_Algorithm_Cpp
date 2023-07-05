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

/* 3019번 테트리스
// 해설 : 구현
// url : https://www.acmicpc.net/problem/3019

int C, P, answer;
int board[100];

void input()
{
    cin >> C >> P;
    for (int i = 0; i < C; i++)
    {
        cin >> board[i];
    }
}
 
void Shape1()
{
    answer = answer + C;
    for (int i = 0; i < C - 3; i++)
    {
        if (board[i] == board[i + 1] && board[i + 1] == board[i + 2] && board[i + 2] == board[i + 3]) answer++;
    }
}
 
void Shape2()
{
    for (int i = 0; i < C - 1; i++)
    {
        if (board[i] == board[i + 1]) answer++;
    }
}
 
void Shape3()
{
    for (int i = 0; i < C - 2; i++)
    {
        if (board[i] == board[i + 1] && board[i + 1] == board[i + 2] - 1) answer++;
    }
    for (int i = 0; i < C - 1; i++)
    {
        if (board[i] == board[i + 1] + 1) answer++;
    }
}
 
void Shape4()
{
    for (int i = 0; i < C - 2; i++)
    {
        if (board[i] == board[i + 1] + 1 && board[i + 1] == board[i + 2]) answer++;
    }
    for (int i = 0; i < C - 1; i++)
    {
        if (board[i] == board[i + 1] - 1) answer++;
    }
}
 
void Shape5()
{
    for (int i = 0; i < C - 2; i++)
    {
        if (board[i] == board[i + 1] && board[i + 1] == board[i + 2]) answer++;
        if (board[i] == board[i + 1] + 1 && board[i + 1] == board[i + 2] - 1) answer++;
    }
    for (int i = 0; i < C - 1; i++)
    {
        if (board[i] == board[i + 1] - 1) answer++;
        if (board[i] == board[i + 1] + 1) answer++;
    }
}
 
void Shape6()
{
    for (int i = 0; i < C - 2; i++)
    {
        if (board[i] == board[i + 1] && board[i + 1] == board[i + 2]) answer++;
        if (board[i] == board[i + 1] - 1 && board[i + 1] == board[i + 2]) answer++;
    }
    for (int i = 0; i < C - 1; i++)
    {
        if (board[i] == board[i + 1]) answer++;
        if (board[i] == board[i + 1] + 2) answer++;
    }
}
 
void Shape7()
{
    for (int i = 0; i < C - 2; i++)
    {
        if (board[i] == board[i + 1] && board[i + 1] == board[i + 2]) answer++;
        if (board[i] == board[i + 1] && board[i + 1] == board[i + 2] + 1) answer++;
    }
    for (int i = 0; i < C - 1; i++)
    {
        if (board[i] == board[i + 1] - 2) answer++;
        if (board[i] == board[i + 1]) answer++;
    }
}

void solution()
{
    if (P == 1) 
        Shape1();
    else if (P == 2)
        Shape2();
    else if (P == 3)
        Shape3();
    else if (P == 4)
        Shape4();
    else if (P == 5)
        Shape5();
    else if (P == 6)
        Shape6();
    else if (P == 7)
        Shape7();
    
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