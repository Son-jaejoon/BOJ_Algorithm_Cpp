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

/* 1275번 커피숍2
// 해설 : 세그먼트 트리 start_node, end_node 뒤바뀌는 것만 조심

int N, Q;
vector<long long> arr;
vector<long long> tree;

long long make_segment(int node, int start, int end)
{
    if(start == end)
        return tree[node] = arr[start];

    int mid = (start + end) / 2;
    long long left_result = make_segment(node*2, start, mid);
    long long right_result = make_segment(node*2 + 1, mid + 1, end);

    return tree[node] = left_result + right_result;
}

long long sum_segment(int node, int start, int end, const int left, const int right)
{
    if(right < start || left > end)
        return 0;
    
    if(left <= start && right >= end)
        return tree[node];
    
    int mid = (start + end) / 2;
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

    int mid = (start + end) / 2;
    long long left_result = update_segment(node*2, start, mid, idx, value);
    long long right_result = update_segment(node*2 + 1, mid + 1, end, idx, value);

    return tree[node] = left_result + right_result;    
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

    for(int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }
    
    make_segment(1, 0, N - 1);

    for(int i = 0 ; i < Q ; i++)
    {
        int x, y, a, b;

        cin >> x >> y >> a >> b;

        long long ans = 0;
        if(x < y)
            ans = sum_segment(1, 0, N - 1, x - 1, y - 1);
        else
            ans = sum_segment(1, 0, N - 1, y - 1, x - 1);
        
        cout << ans << endl;

        update_segment(1, 0, N - 1, a - 1, b);
    }
}
*/

/* 12015번 가장 긴 증가하는 부분 수열 2
// 해설 : 이분 탐색으로 해결할 수 있음. but list안의 값이 부분 수열과 일치하진 않음
// 참고 : https://hyeo-noo.tistory.com/32

int N;
vector<int> arr, list;

void binary_search(int start, int end, int target)
{
    //A[i](target)의 값이 list 배열들 사이에 값을 대체해줌.
    // ex) target(2) -> 1 3 20 일 경우, 1 2 20으로 바뀜

    while(start <= end)
    {
        int mid = (start + end)/2;
        
        if(target <= list[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }

    list[start] = target;
}

void solution()
{
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
            binary_search(0, list_pos, arr[i]);
        }
    }

    cout << list_pos + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    arr.assign(N + 1, 0);
    list.assign(N + 1, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }

    solution();
}
*/