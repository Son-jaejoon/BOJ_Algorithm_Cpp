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

/* 11659번 구간 합 구하기 4
// 해설 : 누적 합
// url : https://www.acmicpc.net/problem/11659

vector<int> v;
vector<long> sum;

void input()
{
    int N, M;

    cin >> N >> M;
    v.assign(N + 1, 0);
    sum.assign(N + 1, 0);

    for(int i = 1 ; i <= N ; i++)
    {
        cin >> v[i];        

        sum[i] = v[i] + sum[i - 1];
    }

    for(int i = 0 ; i < M ; i++)
    {
        int start_node, end_node;
        cin >> start_node >> end_node;

        cout << sum[end_node] - sum[start_node - 1] << endl;
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