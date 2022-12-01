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

/* 9935번 문자열 폭발
// 해설 : 문자열, 스택, 시간 줄이는데 많이 걸렸다..

string s, bomb;

void solution()
{
    while(s.find(bomb) != string::npos)
    {
        vector<char> v;

        for(int i = 0 ; i < s.size() ; i++)
        {
            v.emplace_back(s[i]);

            int idx = 0;

            bool chk = true;

            for(int j = bomb.size() - 1 ; j >= 0 ; j--)
            {
                int curr = v.size() - 1 - idx;

                if(curr < 0)
                {
                    chk = false;
                    break;
                }

                if(v[curr] != bomb[j])
                {
                    chk = false;
                    break;
                }

                idx++;
            }

            if(chk)
            {
                v.erase(v.end() - idx, v.end());
            }
        }

        s.clear();

        for(int i = 0 ; i < v.size() ; i++)
        {
            s.push_back(v[i]);    
        }
    }

    if(s.size() == 0)
    {
        cout << "FRULA";
    }
    else
        cout << s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s >> bomb;
    solution();
}
*/