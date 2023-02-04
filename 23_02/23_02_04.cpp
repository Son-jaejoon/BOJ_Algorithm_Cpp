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

/* 2164번 카드2
// 해설 : 큐
// url : https://www.acmicpc.net/problem/2164

queue<int> Q;
int N;

void input()
{	
	cin >> N;
	
	for(int i=1;i<=N;i++)
    {
		Q.push(i);
	}
}

void solution()
{
    while(Q.size() > 1)
    {
		Q.pop();
		Q.emplace(Q.front());
		Q.pop();	
	}

	cout << Q.front();
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