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

/* 2243번 사탕상자
// 해설 : 세그먼트 트리, 이분탐색
// url : https://www.acmicpc.net/problem/2243

int N;
vector<int> tree;

void update_segment(int node, int start, int end, const int value, const int diff)
{
    if(value < start || value > end)
        return;
    
    tree[node] += diff;

    if(start == end)
        return;
    
    int mid = (start + end) / 2;

    update_segment(node * 2, start, mid, value, diff);
    update_segment(node * 2 + 1, mid + 1, end, value, diff);
}

int take_out_segment(int node, int start, int end, int value)
{
    if(start == end)
        return start;

    int mid = (start + end) / 2;

    if(value <= tree[node * 2])
        return take_out_segment(node * 2, start, mid, value);
    else
        return take_out_segment(node * 2 + 1, mid + 1, end, value - tree[node * 2]);
}

void input()
{
    cin >> N;

    int h = (int)ceil(log2(1000001));
    int tree_size = (1 << (h + 1));

    tree.assign(tree_size, 0);

    for(int i = 0 ; i < N ; i++)
    {
        int a, b, c;

        cin >> a >> b;

        if(a == 1)
        {
            int result = take_out_segment(1, 1, 1000001, b);
            cout << result << endl;
            update_segment(1, 1, 1000001, result, -1);
        }
        else
        {
            cin >> c;
            update_segment(1, 1, 1000001, b, c);
        }
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