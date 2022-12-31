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

/* 3653번 영화수집
// 해설 : 세그먼트 트리, 세그먼트 트리 설정하는 게 어렵다. 더 풀어봐야겠다..
// url : https://www.acmicpc.net/problem/3653

int N, M;
vector<int> tree, arr;

void update_segment(int node, int start, int end, const int idx, const int diff)
{
    if(idx < start || idx > end)
        return;
    
    tree[node] += diff;

    if(start == end)
        return;
    
    int mid = (start + end)/2;

    update_segment(node * 2, start, mid, idx, diff);
    update_segment(node * 2 + 1, mid + 1, end, idx, diff);
}

int sum_segment(int node, int start, int end, const int left, const int right)
{
    if(left > end || right < start)
        return 0;
    
    if(left <= start && end <= right)
        return tree[node];
    
    int mid = (start + end)/2;

    return sum_segment(node * 2, start, mid, left, right) + sum_segment(node * 2 + 1, mid + 1, end, left, right);
}

void input()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> N >> M;
        tree.assign(4 * (N + M + 10), 0);
        arr.assign(N + M + 10, 0);

        for(int i = M + 1 ; i <= N + M ; i++)
        {
            update_segment(1, 1, N + M, i, 1);
            arr[i - M] = i;
        }

        int idx = M;

        for(int i = 0 ; i < M ; i++)
        {
            int v;
            cin >> v;

            cout << sum_segment(1, 1, N + M, 1, arr[v] - 1) << " ";
            update_segment(1, 1, N + M, arr[v], -1);
            arr[v] = idx--;
            update_segment(1, 1, N + M, arr[v], 1);
        }

        cout << endl;
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