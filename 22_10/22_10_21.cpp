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

/* 14003번 가장 긴 증가하는 부분수열5
// 해설 : index배열만 추가하면 됨.
// 참고 : https://yabmoons.tistory.com/561

#define MAX 1000010
 
int N;
int Arr[MAX];
int Index_Arr[MAX];
vector<int> V;
 
void Input()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> Arr[i];
    }
}
 
void Solution()
{
    for (int i = 1; i <= N; i++)
    {
        if (V.size() == 0 || V[V.size() - 1] < Arr[i])
        {
            V.push_back(Arr[i]);
            Index_Arr[i] = V.size() - 1;
        }
        else
        {
            int Left = 0;
            int Right = V.size() - 1;
            while (Left < Right)
            {
                int Mid = (Left + Right) / 2;
                
                if (V[Mid] >= Arr[i]) Right = Mid;
                else Left = Mid + 1;
            }
            V[Left] = Arr[i];
            Index_Arr[i] = Left;
        }
    }
    cout << V.size() << endl;
    vector<int> Answer;
    int Find_Index = V.size() - 1;
    for (int i = N; i > 0; i--)
    {
        if (Index_Arr[i] == Find_Index)
        {
            Find_Index--;
            Answer.push_back(Arr[i]);
        }
    }
    for (int i = Answer.size() - 1; i >= 0; i--) cout << Answer[i] << " ";
    cout << endl;
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}
*/