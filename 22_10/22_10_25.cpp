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

/* 2342¹ø Dance Dance Revolution
// ÇØ¼³ : dp, 

int visited[5][5][100001];
vector<int> dance;

int move(int from, int to)
{
    if(from == to)
        return 1;
    
    switch (from)
    {
        case 0: return 2;
        case 1: return to == 3 ? 4 : 3;
        case 2: return to == 4 ? 4 : 3;
        case 3: return to == 1 ? 4 : 3;
        case 4: return to == 2 ? 4 : 3;
    }

    return 0;
}

int solution(int left, int right, int idx)
{
    if(idx == dance.size())
        return 0;
    int &ans = visited[left][right][idx];
    
    if(ans != 0)
        return ans;

    return ans = min(move(left, dance[idx]) + solution(dance[idx], right, idx + 1),
                    move(right, dance[idx]) + solution(left, dance[idx], idx + 1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    while(1)
    {
        cin >> n;

        if(n == 0)
            break;

        dance.emplace_back(n);
    }

    cout << solution(0, 0, 0);
    
    return 0;
}
*/