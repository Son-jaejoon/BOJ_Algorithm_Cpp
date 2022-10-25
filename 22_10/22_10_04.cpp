#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 12837번 가계부
// 해설 : 세그먼트 트리, 업데이트할때 주의할점 조심 !!

int N, Q;

vector<long long> tree;

long long update_segment(int node, int start, int end, int idx, long long value)
{
    if(idx < start || idx > end) //먼저 나와야함.
        return tree[node];

    if(start == end)
        return tree[node] += value;

    int mid = (start + end) / 2;
    long long left_result = update_segment(node*2, start, mid, idx, value);
    long long right_result = update_segment(node*2 + 1, mid + 1, end, idx, value);

    return tree[node] = left_result + right_result;
}

long long sum_segment(int node, int start, int end, int left, int right)
{
    if(left > end || right < start)
        return 0;
    
    if(left <= start && right >= end)
        return tree[node];
    
    int mid = (start + end)/2;
    long long left_result = sum_segment(node*2, start, mid, left, right);
    long long right_result = sum_segment(node*2 + 1, mid + 1, end, left, right);

    return left_result + right_result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> Q;
    
    arr.assign(N, 0);

    int h = (int)ceil(log2(N));
    int tree_size = (1 << (h + 1));

    tree.assign(tree_size, 0);

    for(int i = 0 ; i < Q ; i++)
    {
        int a, b, c;
        cin >> a >> b >>c;

        if(a == 1)
        {
            int idx = b - 1;
            update_segment(1, 0, N - 1, idx, c);
        }
        else if(a == 2)
        {
            int start_node = b - 1;
            int end_node = c - 1;
            long long ans = sum_segment(1, 0, N - 1, start_node, end_node);
            cout << ans << endl;
        }
    }
}
*/

/* 2357번 최솟값과 최댓값
// 해설 : 세그먼트 트리 min, max

int N, M;

vector<long long> arr;
vector<long long> min_tree;
vector<long long> max_tree;
vector<pair<long long, long long>> cmd;

long long make_min_segment(int node, int start, int end)
{
    if(start == end)
        return min_tree[node] = arr[start];

    int mid = (start + end) / 2;

    long long left_result = make_min_segment(node*2, start, mid);
    long long right_result = make_min_segment(node*2 + 1, mid + 1, end);

    return min_tree[node] = min(left_result, right_result);
}

long long make_max_segment(int node, int start, int end)
{
    if(start == end)
        return max_tree[node] = arr[start];

    int mid = (start + end) / 2;

    long long left_result = make_max_segment(node*2, start, mid);
    long long right_result = make_max_segment(node*2 + 1, mid + 1, end);

    return max_tree[node] = max(left_result, right_result);
}

long long min_segment(int node, int start, int end, int left, int right)
{
    if(right < start || left > end)
        return 1000000000;
    if(left <= start && right >= end)
        return min_tree[node];
    
    int mid = (start + end)/2;
    long long left_result = min_segment(node*2, start, mid, left, right);
    long long right_result = min_segment(node*2 + 1, mid + 1, end, left, right);

    return min(left_result, right_result);
}

long long max_segment(int node, int start, int end, int left, int right)
{
    if(right < start || left > end)
        return 0;
    if(left <= start && right >= end)
        return max_tree[node];
    
    int mid = (start + end)/2;
    long long left_result = max_segment(node*2, start, mid, left, right);
    long long right_result = max_segment(node*2 + 1, mid + 1, end, left, right);

    return max(left_result, right_result);
}

void solution()
{
    int height = (int)ceil(log2(N));
    int tree_size = (1 << (height + 1));

    min_tree.assign(tree_size, 1000000000);
    max_tree.assign(tree_size, 0);
    
    make_min_segment(1, 0, N - 1);
    make_max_segment(1, 0, N - 1);
    
    for(int i = 0 ; i < cmd.size() ; i++)
    {
        int start_node = cmd[i].first - 1;
        int end_node = cmd[i].second - 1;

        long long min_result = min_segment(1, 0, N - 1, start_node, end_node);
        long long max_result = max_segment(1, 0, N - 1, start_node, end_node);

        cout << min_result << " " << max_result << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    arr.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }
    
    for(int i = 0 ; i < M ; i++)
    {
        int a, b;
        cin >> a >> b;
        
        cmd.emplace_back(make_pair(a, b));
    }

    solution();
}
*/