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

/* 1202번 보석 도둑
// 해설 :우선순위 큐를 통해 넣을 수 있는 보석 다 넣고 최대 가격으로 저장
// 참고 : https://kimjingo.tistory.com/121

int N, K;
vector<pair<int, int>> jewel;
vector<int> bag;
vector<bool> chk;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

void solution()
{
    int ans = 0;

    for(int i = 0 ; i < K ; i++)
    {
        int max_weight = bag[i];

        for(int j = 0 ; j < N ; j++)
        {
            int weight = jewel[j].first;
            int value = jewel[j].second;

            if(chk[j])
                continue;
            
            if(max_weight >= weight)
            {
                chk[j] = true;
                ans += value;
                break;
            }
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    chk.assign(N, 0);
    bag.assign(K, 0);

    for(int i = 0 ; i < N ; i++)
    {
        int weight, value;
        cin >> weight >> value;

        jewel.emplace_back(make_pair(weight, value));
    }

    for(int i = 0 ; i < K ; i++)
    {
        cin >> bag[i];
    }

    sort(jewel.begin(), jewel.end(), cmp);
    sort(bag.begin(), bag.end());

    solution();
}
*/