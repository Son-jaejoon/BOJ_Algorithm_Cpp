#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#define endl "\n"

/* 11053번 가장 긴 증가하는 부분 수열
// 해설 : 이전 값보다 더 큰 값이 잇을 수도 있다..
// 참고 : https://hwan-shell.tistory.com/299

using namespace std;

int main()
{
   int T;
    int N, M, K, H;
    int X, Y;
    int answer = 0;
    
    int dp[1001];
    vector<int> v;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> K;
        v.emplace_back(K);
        int dp_max = 0;

        for (int j = 0; j < v.size(); j++) {
            if (v[i] > v[j]) {
                if (dp_max < dp[j])
                    dp_max = dp[j];
            }
        }
        dp[i] = dp_max + 1;
        answer = max(answer, dp[i]);
    }

    cout << answer << endl;

    return 0;
}
*/

/* 15650번 N과 M(2)
// 해설 : 백트랙킹
// 참고 : https://cryptosalamander.tistory.com/55
int n, m;
int arr[9];
bool visited[9];

void solution(int num, int cnt)
{
    if(cnt == m)
    {
        for(int i = 0 ; i < m ; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
        return;
    }
    for(int i = num ; i <= n ; i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            arr[cnt] = i;
            solution(i + 1, cnt + 1);
            visited[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    solution(1, 0);
}
*/

/* 1152번 단어의 개수
// 해설 : getline 의 활용

int main()
{
    string st;

    getline(cin, st);
    int num = 0;
    for(int i = 0 ; i < st.size() ; i++)
    {
        if(i == 0 && st[i] == ' ')
            continue;
        if(i == st.size() - 1 && st[i] != ' ')
        {
            num++;
            break;
        }     
        if(st[i] == ' ')
            num++;
    }
    cout << num;
}
*/

/* 16917번 양념 반 후라이드 반
// 해설 : 먹고싶다.

int A, B, C, X, Y;

void solution()
{
    int ans;

    if (A + B >= 2 * C)
    {
        if (X == Y)
        {
            ans = 2 * X * C;
        }
        else if (X > Y)
        {
            if (A >= 2 * C)
            {
                ans = 2*X*C;
            }
            else
            {
                ans = 2 * Y * C;
                X = X - Y;
                ans += X * A;
            }
        }
        else if (Y > X)
        {
            if(B > 2 * C)
            {
                ans = 2 * Y * C;
            }
            else
            {
                ans = 2 * X * C;
                Y = Y - X;
                ans += Y * B;
            }
        }
    }
    else
    {
        ans = X * A + Y * B;
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A >> B >> C >> X >> Y;

    solution();
}
*/