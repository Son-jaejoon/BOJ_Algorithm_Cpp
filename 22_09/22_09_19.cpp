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

/* 12996번 Acka
// 해설 : DP, 참조자 &는 해당 값을 바꾸는 거임. 그래서 너무 길면 간단하게 표현할 수 있음.
// 참고 : https://nim-code.tistory.com/150, https://vansoft1215.tistory.com/18

long long DP[51][51][51][51];

long long solution(int S, int dot, int kes, int hon)
{
    if(S == 0)
    {
        if(dot == 0 && kes == 0 && hon == 0)
            return 1;
        else
            return 0;
    }

    long long& ans = DP[S][dot][kes][hon];
    if(ans != -1)
        return ans;
    
    ans = 0;

	ans += solution(S - 1, dot - 1, kes, hon);
	ans += solution(S - 1, dot, kes - 1, hon);
	ans += solution(S - 1, dot, kes, hon - 1);
	ans += solution(S - 1, dot - 1, kes - 1, hon);
	ans += solution(S - 1, dot - 1, kes, hon - 1);
	ans += solution(S - 1, dot, kes - 1, hon - 1);
	ans += solution(S - 1, dot - 1, kes - 1, hon - 1);
    ans = ans%1000000007;

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int S, dot, kes, hon;

    cin >> S >> dot >> kes >> hon;

    memset(DP, -1, sizeof(DP));
    cout << solution(S, dot, kes, hon);
}
*/