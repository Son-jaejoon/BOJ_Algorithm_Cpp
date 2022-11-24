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

/* 2263번 트리의 순회
// 해설 : 중위순회, 후위순회를 기반으로 한 전위 순회 찾아내기

int Index[100001];
int inorder[100001];
int postorder[100001];
int n;

void getPreOrder(int inStart, int inEnd, int postStart, int postEnd)
{
    if (inStart > inEnd || postStart > postEnd)
        return;

    int rootIndex = Index[postorder[postEnd]];
    int leftSize = rootIndex - inStart;
    int rightSize = inEnd - rootIndex;

    cout << inorder[rootIndex] << ' ';

    getPreOrder(inStart, rootIndex - 1, postStart, postStart + leftSize - 1);
    getPreOrder(rootIndex + 1, inEnd, postStart + leftSize, postEnd - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> inorder[i];
        Index[inorder[i]] = i; 
    }

    for (int i = 1; i <= n; i++)
        cin >> postorder[i];

    getPreOrder(1, n, 1, n);

    return 0;
}
*/