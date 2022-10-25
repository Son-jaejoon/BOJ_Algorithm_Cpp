#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <vector>
#include <cmath>
#define endl "\n"

using namespace std;

/*9252번 LCS 2
// 해설 : LCS 1 + 역추적
// word의 사이즈는 똑같이 -1 을 해줘야 마지막 값임을 인지 할 것

vector<vector<int>> lcs;
string st1;
string st2;
int st1_length, st2_length;

int dy[] = {-1, 0};
int dx[] = {0, -1};

vector<char> LCS_word;

void LCS_length()
{
    for (int i = 0; i < st2_length; i++)
    {
        for (int j = 0; j < st1_length; j++)
        {
            if (st2[i] == st1[j])
                lcs[i + 1][j + 1] = lcs[i][j] + 1;
            else
            {
                lcs[i + 1][j + 1] = max(lcs[i][j + 1], lcs[i + 1][j]);
            }
        }
    }

    if (lcs[st2_length][st1_length] != 0)
    {
        int i = st2_length;
        int j = st1_length;
        bool pass = false;

        while (lcs[i][j] != 0)
        {
            pass = false;

            for (int k = 0; k < 2; k++)
            {
                int ny = i + dy[k];
                int nx = j + dx[k];

                if (ny >= 0 && nx >= 0)
                {
                    if (lcs[i][j] == lcs[ny][nx])
                    {
                        i = ny;
                        j = nx;
                        pass = true;
                        break;
                    }
                }
            }

            if (!pass)
            {
                LCS_word.emplace_back(st2[i - 1]);
                i = i - 1;
                j = j - 1;
            }
        }
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> st1 >> st2;

    st1_length = st1.length();
    st2_length = st2.length();

    lcs.assign(st2_length + 1, vector<int>(st1_length + 1, 0));
    LCS_length();

    cout << lcs[st2_length][st1_length] << endl;

    if (lcs[st2_length][st1_length] != 0)
    {
        for (int i = LCS_word.size() - 1; i >= 0; i--)
        {
            cout << LCS_word[i];
        }
    }
}
*/

/* 9251번 LCS
// 해설 : 두 개의 string 값을 받고, 문자열 1개와 나머지 문자와 비교 같으면 좌상단의 값 + 1, 다르면
// 위 or 왼쪽의 값 중 큰 값으로 저장 -> 반복
// 참고 : https://tinyurl.com/2lsxwdzu

vector<vector<int>> lcs;
string st1;
string st2;
int st1_length, st2_length;

void LCS_length(int num1, int num2)
{
    for(int i = 0 ; i < st1_length ; i++)
    {
        for(int j = 0 ; j < st2_length ; j++)
        {
            if(st1[i] == st2[j])
                lcs[i + 1][j + 1] = lcs[i][j] + 1;
            else
            {
                lcs[i + 1][j + 1] = max(lcs[i][j + 1], lcs[i + 1][j]);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> st1 >> st2;

    st1_length = st1.length();
    st2_length = st2.length();

    lcs.assign(st1_length + 1, vector<int>(st2_length + 1, 0));
    LCS_length(0, 0);
    cout << lcs[st1_length][st2_length];
}
*/