#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 17779번 게리맨더링 2
// 해설 : 구를 나눈다. 체크한다.
// 참고 : https://yabmoons.tistory.com/300

int N;
int ans = 987654321;
vector<vector<int>> arr;
vector<vector<int>> label;
int save[5];

bool CanMakeLine(int y, int x, int d1, int d2)
{
    if (y + d1 >= N || x - d1 < 0)
        return false;
    if (y + d2 >= N || x + d2 >= N)
        return false;
    if (y + d1 + d2 >= N || y - d1 + d2 >= N)
        return false;
    if (y + d2 + d1 >= N || y + d2 - d1 < 0)
        return false;
 
    return true;
}

void calculate(int y, int x, int d1, int d2)
{
    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= N ; j++)
        {
            label[i][j] = 5;
        }
    }

    //1번
    int vote_1 = 0;

    for(int i = 1 ; i < y + d1 ; i++)
    {
        for(int j = 1 ; j <= x ; j++)
        {
            label[i][j] = 1;
            vote_1 += arr[i][j];
        }
    }
    save[0] = vote_1;

    //2번
    int vote_2 = 0;

    for(int i = 1 ; i <= y + d2 ; i++)
    {
        for(int j = x + 1 ; j <= N ; j++)
        {
            label[i][j] = 2;
            vote_2 += arr[i][j];
        }
    }
    save[1] = vote_2;

    //3번
    int vote_3 = 0;

    for(int i = y + d1 ; i <= N ; i++)
    {
        for(int j = 1 ; j < x - d1 + d2 ; j++)
        {
            label[i][j] = 3;
            vote_3 += arr[i][j];
        }
    }
    save[2] = vote_3;

    //4번
    int vote_4 = 0;

    for(int i = y + d2 ; i <= N ; i++)
    {
        for(int j = x - d1 + d2 ; j <= N ; j++)
        {
            label[i][j] = 4;
            vote_4 += arr[i][j];
        }
    }
    save[3] = vote_4;

    //5번
    int vote_5 = 0;

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1; j <= N ; j++)
        {
            if(label[i][j] == 5)
                vote_5 += arr[i][j];
        }
    }
    save[4] = vote_5;

    sort(save, save + 5);
    int result = save[5] - save[1];
    
    ans = min(ans, result);
}

void solution()
{
    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= N ; j++)
        {
            for(int d1 = 1 ; d1 < j ; d1++)
            {
                for(int d2 = 1 ; d2 < N - j ; d2++)
                {

                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    arr.assign(N + 1, vector<int>(N + 1, 0));
    label.assign(N + 1, vector<int>(N + 1, 5));

    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= N ; j++)
        {
            cin >> arr[i][j];
        }
    }

    solution();
    cout << ans;
}
*/

/* 17085 십자가 2개 놓기
// 해설 : 음 오아예

int N, M;
char map[15][15];
int answer = 0;

//위 오 아 왼
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

//(r,c)가 중심일 때, 가능한 십자가의 최대 크기
int getSize(int r, int c){  
    int ret = 0;
    while(1){
        bool flag = true;
        for(int i = 0; i<4; i++){
            int nr = r + dr[i]*ret;
            int nc = c + dc[i]*ret;
            if(nr<0 || nc<0 || nr>=N || nc>=M || map[nr][nc] != '#'){
                flag = false;
                break;
            }
        }
        if(flag) ret++;
        else break;
    }
    return ret - 1; //ret가 0부터 시작하므로, 처음 통과하면 ret=1이 되는데 이때 십자가의 크기는 0임 ('*' 한개짜리)
}

//중심이 (r,c)이고 크기가 K인 십자가를 만들거나(val='#') 십자가 원상복구(val='.')
void make_cross(int r, int c, int k, int val){ 
    for(int i = 0; i<=k; i++){
        for(int j = 0; j<4; j++){
            int nr = r + dr[j]*i;
            int nc = c + dc[j]*i;
            map[nr][nc] = val;
        }
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> map[i][j];
        }
    }


    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            if(map[i][j] == '#'){
                int step1 = getSize(i,j);
                for (int k = 0; k <= step1; k++)    //첫번째 십자가 크기 1부터 max까지, 
                {
                    make_cross(i,j,k,'*');  //첫번째 십자가 표시

                    for(int r = 0; r<N; r++){
                        for(int c=0; c<M; c++){
                            if(map[r][c] == '#'){
                                int step2 = getSize(r,c); //각 크기에 대해 두번째 십자가 크기 구하기
                                int width1 = 4*k + 1;
                                int width2 = 4*step2 + 1;
                                answer = max(answer, width1*width2);
                            }
                        }
                    }
                    make_cross(i,j, k, '#');    //첫번째 십자가 원상복구


                }
            } 
        
            
        }
    }
    
   
    cout << answer;

    return 0;
}
*/