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

/* 1043번 거짓말
// 해설 : 유니온 파인드 응용

int N, M, ans;
int know_people;

vector<int> parent;
vector<int> know_member;
vector<int> party[50];
vector<int> member[51];

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

    if(a == b)
        return;
    
    if(find(know_member.begin(), know_member.end(), a) != know_member.end())
    {
        know_member.emplace_back(b);
        parent[b] = a;
    }
    else if(find(know_member.begin(), know_member.end(), b) != know_member.end())
    {
        know_member.emplace_back(a);
        parent[a] = b;
    }
    else
        parent[a] = b;
}

void merge_party()
{
    for(int i = 0 ; i < M ; i++)
    {
        int curr = party[i][0];

        for(int j = 1 ; j < party[i].size() ; j++)
        {
            int next = party[i][j];

            merge(curr, next);
            curr = next;
        }
    }
}

void solution()
{
    vector<bool> chk;
    chk.assign(M, false);

    merge_party();
    
    for(int i = 0 ; i < M ; i++)
    {
        int curr = party[i][0];

        if(find(know_member.begin(), know_member.end(), find_parent(curr)) == know_member.end())
        {
            ans++;
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> know_people;

    parent.assign(N + 1, -1);

    for(int i = 0 ; i < know_people ; i++)
    {
        int idx;
        cin >> idx;

        know_member.emplace_back(idx);
    }

    for(int i = 0 ; i < M ; i++)
    {
        int population;

        cin >> population;

        for(int j = 0 ; j < population ; j++)
        {
            int idx;
            cin >> idx;

            party[i].emplace_back(idx);
        }
    }

    solution();
}
*/