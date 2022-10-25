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

/* 9238번 열쇠
// 해설 : BFS 응용, 열쇠 얻으면 열 수 있는 문으로 이동
// 참고 : https://yabmoons.tistory.com/m/97

int h, w;
vector<vector<int>> building;
bool key[27];

int dy[] = {1, -1, 0, 0};
int dx[] = {0, 0, -1, 1};

void solution()
{

}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;

    cin >> T;

    while(T--)
    {
        building.clear();
        memset(key, false, sizeof(key));

        cin >> h >> w;
        
        building.assign(h, vector<int>(w, 0));

        for(int i = 0 ; i < h ; i++)
        {
            string st;
            cin >> st;

            for(int j = 0 ; j < w ; j++)
            {
                char ch = st[j];
                char standard = 'a';
                int num = (int)ch - (int)standard;

                if(ch == '.') // 빈 공간
                {
                    building[i][j] = 52;
                }
                else if(ch == '*') // 벽
                {
                    building[i][j] = 53;
                }
                else if(ch == '$') // 문서
                {
                    building[i][j] = 54;
                }
                else if(num >= 0 && num < 27)
                {
                    building[i][j] = num;
                }
                else
                {
                    standard = 'A';
                    building[i][j] = (int)ch - (int)standard + 26;
                }
            }
        }

        string st;
        cin >> st;
        for(int i = 0 ; i < st.size() ; i++)
        {
            char ch = st[i];
            char standard = 'a';
            int num = (int)ch - (int)standard;

            key[num] = true;
        }

        solution();
    }
}
*/