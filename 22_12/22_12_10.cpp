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
#include <numeric>
#define endl "\n"

using namespace std;

/* 16566번 카드 게임
// 해설 : 이분 탐색, 유니온 파인드, 처음엔 유니온 파인드 없이 진행했지만 시간을 줄이기 위해 추가함

int N, M, K;

vector<int> A, B, parent;

void input()
{
    cin >> N >> M >> K;

    A.assign(M, 0);
    B.assign(K, 0);
    parent.assign(M, -1);

    for(int i = 0 ; i < M ; i++){
        cin >> A[i];
    }

    for(int i = 0 ; i < K ; i++){
        cin >> B[i];
    }
}

int find_parent(int a)
{
    if(parent[a] < 0)
        return a;
    
    return parent[a] = find_parent(parent[a]);
}

void merge(int a, int b)
{
    a = find_parent(a);
    b = find_parent(b);

    if(a < b)
        parent[a] = b;
    else
        parent[b] = a;
}

void find_card()
{
    for(int i = 0 ; i < K ; i++)
    {
        int card_num = B[i];
        int idx = upper_bound(A.begin(), A.end(), card_num) - A.begin();  

        cout << A[find_parent(idx)] << endl;

        if(idx < M - 1)
            merge(find_parent(idx), find_parent(idx) + 1);
    }
}

void solution()
{
    sort(A.begin(), A.end());
    find_card();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();
}
*/