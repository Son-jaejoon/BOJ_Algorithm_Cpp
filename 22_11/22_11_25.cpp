#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#define endl "\n"

using namespace std;

/* 5639번
// 해설 : 이진 트리, 분할 정복

vector<int> tree;

void postorder(int start, int end)
{
    if(start >= end)
        return;
    
    if(start == end - 1)
    {
        cout << tree[start] << endl;
        return;
    }

    int idx = start + 1;

    while(idx < end)
    {
        if(tree[start] < tree[idx])
            break;
        
        idx++;
    }

    postorder(start + 1, idx);
    postorder(idx, end);

    cout << tree[start] << endl;
}

void solution()
{
    postorder(0, tree.size());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;

    while(cin >> num)
    {
        tree.emplace_back(num);
    }

    solution();
}
*/