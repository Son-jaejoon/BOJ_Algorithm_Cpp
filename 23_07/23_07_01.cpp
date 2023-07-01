#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <string>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#include <numeric>
#include <deque>
#define endl "\n"

using namespace std;

/* 9081번 단어 맞추기
// 해설 : 조합, 현재 단어 다음위치를 찾기 떄문에 정렬을 할 필요가 없다.
// url : https://www.acmicpc.net/problem/9081

string st;
vector<char> v;

void solution()
{
    bool chk = false, not_end = false;

    do
    {
        if(chk)
        {
            not_end = true;
            break;
        }        

        for(int i = 0 ; i < v.size() ; i++)
        {
            if(v[i] != st[i])
                break;
            
            if(i == v.size() - 1)
                chk = true;
        }

    }while(next_permutation(v.begin(), v.end()));

    if(not_end)
        for(auto ch : v)
            cout << ch;
    else
        cout << st;
    
    cout << endl;
}

void input()
{
    int N;
    cin >> N;

    while (N--)
    {
        cin >> st;
        v.assign(st.size(), '0');

        for (int i = 0; i < v.size(); i++)
        {
            v[i] = st[i];
        }

        solution();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}
*/