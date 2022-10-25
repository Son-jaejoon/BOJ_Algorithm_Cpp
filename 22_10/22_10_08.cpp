#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

/*

using namespace std;

int N;

vector<int> arr;
vector<int> save;
vector<int> tree;

int make_segment(int node, int start, int end)
{
    if(start == end)
        return tree[node] = 1;
    
    int mid = (start + end)/2;
    int left_result = make_segment(node*2, start, mid);
    int right_result = make_segment(node*2 + 1, mid + 1, end);

    return tree[node] = left_result + right_result;
}

long long sum_segment(int node, int start, int end, )

void solution()
{
    int h = (int)ceil(log2(N));
    int tree_size = (1 << (h + 1));

    tree.assign(tree_size, 1);
    save.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        if(arr[i] = i)
            save[i] = 0;
        else
            save[i] = 1;
    }

    make_segment();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    arr.assign(N, 0);

    for(int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }
    
    solution();
}
*/