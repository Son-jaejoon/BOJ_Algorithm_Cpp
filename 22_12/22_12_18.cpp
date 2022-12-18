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

/* 7662번 이중 우선순위 큐
// 해설 : set을 통한 정렬

multiset<int> ms;

void solution()
{
    if(ms.empty())
    {
        cout << "EMPTY" << endl;
        return;
    }

    cout << *--ms.end() << " " << *ms.begin() << endl;
}

void input()
{
    int T = 0;
    cin >> T;

    while(T--)
    {
        ms.clear();

        int k;
        cin >> k;

        for(int i = 0 ; i < k ; i++)
        {
            char ch;
            cin >> ch;

            int num;
            cin >> num;

            if(ch == 'I')
            {
                ms.insert(num);
            }
            else if(ch == 'D')
            {
                if(ms.empty())
                    continue;
                
                if(num == 1)
                {
                    ms.erase(--ms.end());
                }
                else
                {
                    ms.erase(ms.begin());
                }
            }
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