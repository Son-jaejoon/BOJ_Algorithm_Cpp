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

/* 14725번 개미굴
// 해설 : set을 이용해 풀이하였지만 Map + Trie 구조를 통해도 문제를 해결 할 수 있는 문제.
// 참고 : https://ansohxxn.github.io/boj/14725/

int N;
set<string> s;

void solution()
{
    for(auto st : s)
    {
        int cnt = count(st.begin(), st.end(), '*');
        int pos = st.find_last_of('*');

        string tmp = st.substr(pos + 1);

        for(int i = 0 ; i < cnt - 1 ; i++)
        {
            cout << "--";
        }

        cout << tmp << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for(int i = 0 ; i < N ; i++)
    {
        int k;
        cin >> k;

        string tmp;
        string st;

        for(int j = 0 ; j < k ; j++)
        {
            cin >> tmp;
            st += "*" + tmp;
            s.insert(st);
        }
    }

    solution();
}
*/