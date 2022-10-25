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

/* 1365번 꼬인 전깃줄
// 해설 : LIS

int N;
vector<long long>arr, list;

void binary_search(int start, int end, int value)
{
    while(start <= end)
    {
        int mid = (start + end)/2;

        if(value >= list[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }

    list[start] = value;
}

void solution()
{
    int list_idx = 0;
    list[0] = arr[0];

    for(int i = 1 ; i < N ; i++)
    {
        if(list[list_idx] < arr[i])
        {
            list_idx++;
            list[list_idx] = arr[i];
        }
        else if(list[list_idx] > arr[i])
        {
            int value = arr[i];
            binary_search(0, list_idx, value);
        }
    }

    cout << N - (list_idx + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> N;

    arr.assign(N, 0);
    list.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }

    solution();
}
*/

/* 3745번 오름세
// 해설 : lis(nlogn), eof(cin >> num)

int N;

vector<long long> arr;
vector<long long> list;

void binary_search(int start, int end, int value)
{
    while(start <= end)
    {
        int mid = (start + end)/2;
        
        if(value <= list[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }

    list[start] = value;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    while(cin >> N)
    {
        arr.clear();
        arr.assign(N, 0);

        list.clear();
        list.assign(N, 0);

        for(int i = 0 ; i < N ; i++)
        {
            cin >> arr[i];
        }

        int list_pos = 0;
        list[0] = arr[0];

        for(int i = 1 ; i < N ; i++)
        {
            if(list[list_pos] < arr[i])
            {
                list_pos++;
                list[list_pos] = arr[i];
            }
            else if(list[list_pos] > arr[i])
            {
                int num = arr[i];
                binary_search(0, list_pos, num);
            }
        }

        cout << list_pos + 1 << endl;
    }
}
*/

/* 2268번 수들의 합 7
// 해설 : 세그먼트 트리

int N, M;

vector<long long> tree;

long long sum_segment(int node, int start, int end, const int left, const int right)
{
    if(right < start || left > end)
        return 0;
    
    if(left <= start && right >= end)
        return tree[node];
    
    int mid = (start + end)/2;
    long long left_result = sum_segment(node*2, start, mid, left, right);
    long long right_result = sum_segment(node*2 + 1, mid + 1, end, left, right);

    return left_result + right_result;
}

long long update_segment(int node, int start, int end, const int idx, const long long value)
{
    if(idx < start || idx > end)
        return tree[node];

    if(start == end)
        return tree[node] = value;

    int mid = (start + end)/2;
    long long left_result = update_segment(node*2, start, mid, idx, value);
    long long right_result = update_segment(node*2 + 1, mid + 1, end, idx, value);

    return tree[node] = left_result + right_result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    int h = (int)ceil(log2(N));
    int tree_size = (1 <<(h + 1));

    tree.assign(tree_size, 0);

    for(int i = 0 ; i < M ; i++)
    {
        int a, b, c;

        cin >> a >> b >> c;

        if(a == 0)
        {
            int start_node = b - 1;
            int end_node = c - 1;

            if(start_node > end_node)
                swap(start_node, end_node);
            
            cout << sum_segment(1, 0, N-1, start_node, end_node) << endl;
        }
        else if(a == 1)
        {
            int idx = b - 1;
            update_segment(1, 0, N - 1, idx, c);
        }
    }
}
*/