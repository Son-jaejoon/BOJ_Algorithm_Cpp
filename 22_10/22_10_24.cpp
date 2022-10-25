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

/* 2143번 두 배열의 합
// 해설 : 합을 단순히 더해서 정렬 후 lower_bound, upper_bound 계산

long long T;
int n, m, ans;

vector<int> a, b;
vector<long long> sum_a, sum_b;

void solution()
{
    for(int i = 0 ; i < n ; i++)
    {
        long long num = a[i];
        sum_a.emplace_back(num);

        for(int j = i + 1 ; j < n ; j++)
        {
            num += a[j];
            sum_a.emplace_back(num);
        }
    }

    for(int i = 0 ; i < m ; i++)
    {
        long long num = b[i];
        sum_b.emplace_back(num);

        for(int j = i + 1 ; j < m ; j++)
        {
            num += b[j];
            sum_b.emplace_back(num);
        }
    }

    sort(sum_b.begin(), sum_b.end());

    for(int i = 0 ; i < sum_a.size() ; i++)
    {
        long long want_num = T - sum_a[i];
        long long left = lower_bound(sum_b.begin(), sum_b.end(), want_num) - sum_b.begin();
        long long right = upper_bound(sum_b.begin(), sum_b.end(), want_num) - sum_b.begin();

        ans += (right - left);
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T >> n;
    a.assign(n, 0);

    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i]; 
    }

    cin >> m;
    b.assign(m, 0);

    for(int i = 0 ; i < m ; i++)
    {
        cin >> b[i];
    }

    solution();
}
*/