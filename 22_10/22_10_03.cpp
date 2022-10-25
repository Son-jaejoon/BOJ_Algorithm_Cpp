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

/* 11505번 구간 곱 구하기
// 해설 : 세그먼트 트리, 합이랑 다르게 업데이트시 루트부터 바꿧음
// 참고 : https://yabmoons.tistory.com/453

#define Mod_num 1000000007

int N, M, K;

vector<long long> arr;
vector<long long> tree;

struct info
{
    int chk, idx;
    long long value;
};

info create(int chk, int idx, long long value)
{
    info n_info;
    n_info.chk = chk;
    n_info.idx = idx;
    n_info.value = value;

    return n_info;
}

vector<info> cmd;

long long make_segment(int node, int start, int end)
{
    if(start == end)
        return tree[node] = arr[start] % Mod_num;
    
    int mid = (start + end) / 2;
    long long left_result = make_segment(node * 2, start, mid);
    long long right_result = make_segment(node * 2 + 1, mid + 1, end);

    return tree[node] = (left_result * right_result)%Mod_num;
}

long long update_segment(int node, int start, int end, int idx, long long value)
{
    if(idx < start || end < idx)
        return tree[node];
    if(start == end)
        return tree[node] = value;
    
    int mid = (start + end) / 2;

    long long left_result = update_segment(node * 2, start, mid, idx, value);
    long long right_result = update_segment(node * 2 + 1, mid + 1, end, idx , value);

    return tree[node] = (left_result*right_result)%Mod_num;   
}

long long multiple_segment(int node, int start, int end, int left, int right)
{
    if(left > end || right < start)
        return 1;
    if(left <= start && end <= right)
        return tree[node];
    
    int mid = (start + end) / 2;
    long long left_result = multiple_segment(node * 2, start, mid, left, right);
    long long right_result = multiple_segment(node * 2 + 1, mid + 1, end, left, right);

    return (left_result * right_result) % Mod_num;
}

void solution()
{
    int height = (int)ceil(log2(N));
    int tree_size = (1 << (height + 1));

    tree.assign(tree_size, 1);
    make_segment(1, 0, N - 1);
    
    for(int i = 0 ; i < cmd.size() ; i++)
    {
        int chk = cmd[i].chk;

        if(chk == 1)
        {
            int idx = cmd[i].idx - 1;
            long long value = cmd[i].value;
            update_segment(1, 0, N - 1, idx, value);
        }
        else if(chk == 2)
        {
            int idx_1 = cmd[i].idx - 1;
            int idx_2 = cmd[i].value - 1;

            cout << multiple_segment(1, 0, N - 1, idx_1, idx_2)%Mod_num << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> K;

    arr.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0 ; i < M + K ; i++)
    {
        int a, b;
        long long c;
        
        cin >> a >> b >> c;
        cmd.emplace_back(create(a, b, c));
    }

    solution();
}
*/

/* 2042번 구간 합 구하기 (다른 풀이)
// 해설 : 세그먼트 트리 다른 풀이
// 참고 : https://yabmoons.tistory.com/432

int N, M, K;

vector<long long> arr;
vector<long long> tree;

struct info
{
    int chk, idx;
    long long value;
};

info create(int chk, int idx, long long value)
{
    info n_info;
    n_info.chk = chk;
    n_info.idx = idx;
    n_info.value = value;

    return n_info;
}

vector<info> cmd;

long long make_segment(int node, int start, int end)
{
    if(start == end)
        return tree[node] = arr[start];
    
    int mid = (start + end) / 2;
    long long left_result = make_segment(node * 2, start, mid);
    long long right_result = make_segment(node * 2 + 1, mid + 1, end);

    return tree[node] = left_result + right_result;
}

void update_segment(int node, int start, int end, int idx, long long diff)
{
    if(idx < start || idx > end)
        return;
    
    tree[node] = tree[node] + diff;

    if(start != end)
    {
        int mid = (start + end)/2;
        update_segment(node * 2, start, mid, idx, diff);
        update_segment(node * 2 + 1, mid + 1, end, idx, diff);
    }
}

long long sum_segment(int node, int start, int end, int left, int right)
{
    if(left > end || right < start)
        return 0;
    if(left <= start && end <= right)
        return tree[node];
    
    int mid = (start + end) / 2;
    long long left_result = sum_segment(node * 2, start, mid, left, right);
    long long right_result = sum_segment(node * 2 + 1, mid + 1, end, left, right);

    return left_result + right_result;
}

void solution()
{
    int height = (int)ceil(log2(N));
    int tree_size = (1 << (height + 1));

    tree.assign(tree_size, 0);
    make_segment(1, 0, N - 1);

    for(int i = 0 ; i < cmd.size() ; i++)
    {
        int chk = cmd[i].chk;

        if(chk == 1)
        {
            int idx = cmd[i].idx - 1;
            long long value = cmd[i].value;
            long long diff = value - arr[idx];

            arr[idx] = value;
            update_segment(1, 0, N - 1, idx, diff);
        }
        else if(chk == 2)
        {
            int idx_1 = cmd[i].idx - 1;
            long long idx_2 = cmd[i].value - 1;
            long long result = sum_segment(1, 0, N - 1, idx_1, idx_2);
            cout << result << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> K;
    arr.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0 ; i < M + K ; i++)
    {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        cmd.emplace_back(create(a, b, c));
    }

    solution();
}
*/

/* 2042번 구간 합 구하기
// 해설 : 세그먼트 트리
// 참고 : https://www.acmicpc.net/blog/view/9

long long init(vector<long long> &a, vector<long long> &tree, int node, int start, int end)
{
    if(start == end)
        return tree[node] = a[start];
    else
        return tree[node] = init(a, tree, node*2, start, (start+end)/2 ) + init(a, tree, node*2 + 1,
        (start + end)/2 + 1, end);
}

void update(vector<long long> &tree, int node, int start, int end, int idx, long long diff)
{
    if(idx < start || idx > end)
        return;

    tree[node] = tree[node] + diff;
    if(start != end)
    {
        update(tree, node*2, start, (start + end)/2, idx, diff);
        update(tree, node*2 + 1, (start+end)/2 + 1, end, idx, diff);
    }

}

long long sum(vector<long long> &tree, int node, int start, int end, int left, int right)
{
    if(left > end || right < start)
    {
        return 0;
    }

    if(left <= start && end <= right)
    {
        return tree[node];
    }

    return sum(tree, node*2, start, (start+end)/2, left, right) 
    + sum(tree, node*2 + 1, (start+end)/2 + 1, end, left, right);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, K;

    cin >> N >> M >> K;

    vector<long long> a(N);

    int h = (int)ceil(log2(N));
    int tree_size = (1 << (h + 1));
    vector<long long> tree(tree_size);
    M += K;

    for(int i = 0 ; i < N ; i++)
    {
        cin >> a[i];
    }

    init(a, tree, 1, 0, N - 1);

    while(M--)
    {
        int t1;
        cin >> t1;

        if(t1 == 1)
        {
            int t2;
            long long t3;
            cin >> t2 >> t3;

            t2 -= 1;
            long long diff = t3 - a[t2];
            a[t2] = t3;
            update(tree, 1, 0, N - 1, t2, diff);
        }
        else if(t1 == 2)
        {
            int t2, t3;
            cin >> t2 >> t3;
            cout << sum(tree, 1, 0, N - 1, t2 - 1, t3 - 1) << endl;
        }
    }
}
*/