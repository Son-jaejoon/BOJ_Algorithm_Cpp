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

/* 9934번 완전 이진 트리
// 해설 : 중위순회
// url : https://www.acmicpc.net/problem/9934

int K;
vector<int> v;
vector<vector<int>> tree;

void input()
{
    cin >> K;
    v.assign(pow(2, K) - 1, 0);

    for(int i = 0 ; i < v.size() ; i++)
    {
        cin >> v[i];
    }
}

void make_tree(int depth, int start, int end)
{
    if(start >= end)
        return;

    int mid = (start + end) / 2;
    tree[depth].emplace_back(v[mid]);
    make_tree(depth + 1, start, mid);
    make_tree(depth + 1, mid + 1, end);
}

void solution()
{
    tree.assign(K, vector<int>());
    make_tree(0, 0, v.size());

    for(int i = 0 ; i < K ; i++)
    {
        for(int node : tree[i])
            cout << node << " ";

        cout << endl;
    }
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