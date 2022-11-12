#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 14428번 수열과 쿼리 16
// 해설 : 세그먼트 트리(min, max);

int N;
vector<int> v;
vector<int> save;
vector<int> tree;

int make_segment(int node, int start, int end)
{
    if(start == end)
        return tree[node] = start;
    
    int mid = (start + end) / 2;
    int left_result = make_segment(node*2, start, mid);
    int right_result = make_segment(node*2 + 1, mid + 1, end);

    if(v[left_result] == v[right_result])
        return tree[node] = min(left_result, right_result);
    if(v[left_result] > v[right_result])
        return tree[node] = right_result;
    
    return tree[node] = left_result;
}

int min_segment(int node, int start, int end, const int left, const int right)
{
    if(right < start || left > end)
        return -1;
    
    if(left <= start && right >= end)
        return tree[node];
    
    int mid = (start + end) / 2;
    int left_result = min_segment(node * 2, start, mid, left, right);
    int right_result = min_segment(node * 2 + 1, mid + 1, end, left, right);

    if(left_result == -1)
        return right_result;
    else if(right_result == -1)
        return left_result;

    if(v[left_result] == v[right_result])
        return min(left_result, right_result);
    else if(v[left_result] < v[right_result])
        return left_result;
    else
        return right_result;
}

int update_segment(int node, int start, int end, const int idx, const int value)
{
    if(idx < start || idx > end || start == end)
        return tree[node];
    
    int mid = (start + end) / 2;
    int left_result = update_segment(node * 2, start, mid, idx, value);
    int right_result = update_segment(node * 2 + 1, mid + 1, end, idx, value);

    if(v[left_result] == v[right_result])
        return tree[node] = min(left_result, right_result);
    if(v[left_result] > v[right_result])
        return tree[node] = right_result;
    
    return tree[node] = left_result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    int h = (int)ceil(log2(N));
    int tree_size = (1 << (h + 1));

    tree.assign(tree_size, 987654321);

    int num;

    for(int i = 0 ; i < N ; i++)
    {
        cin >> num;
        v.emplace_back(num);
    }

    make_segment(1, 0, N - 1);

    int M, a, b, c;
    cin >> M;

    for(int i = 0 ; i < M ; i++)
    {
        cin >> a >> b >> c;

        if(a == 1)
        {
            v[b - 1] = c;
            update_segment(1, 0, N - 1, b - 1, c);
        }
        else
        {
            int ans = min_segment(1, 0, N - 1, b - 1, c - 1);
            save.emplace_back(ans + 1);
        }
    }

    for(int i = 0 ; i < save.size() ; i++)
    {
        cout << save[i] << endl;
    }
}

*/