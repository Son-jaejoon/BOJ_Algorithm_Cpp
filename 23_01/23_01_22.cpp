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

/* 1004번 어린왕자
// 해설 : 수학
// url : https://www.acmicpc.net/problem/1004

void input()
{
    int n, T;
	int enter, departure;
	int x, y, r, x1, y1, x2, y2;
    
    cin >> T;

	while (T--)
	{
		cin >> x1 >> y1 >> x2 >> y2 >> n;
        
		enter = 0;
		departure = 0;
        
		while (n--)
		{
			cin >> x >> y >> r;

			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) < r * r) 
            {
                 if ((x - x2) * (x - x2) + (y - y2) * (y - y2) > r * r) 
					departure++;   
            }
            
			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) > r * r)
            {
                 if ((x - x2) * (x - x2) + (y - y2) * (y - y2) < r * r)
					enter++;   
            }
		}
        
		cout << enter + departure << endl;
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