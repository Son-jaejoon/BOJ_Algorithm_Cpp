#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <cmath>
#include <cstring>
#include <functional>
#define endl "\n"

using namespace std;

/* 2096번 내려가기
// 해설 : 솔직히 이렇게 푸는건지 몰랐으면 못풀었음. 슬라이딩 윈도우(정해진 구간 훑기) + DP
// 참고 : https://blog.naver.com/kks227/220795165570

int N;

int colMax[3], colMin[3], tmpMax[3], tmpMin[3];

void solution()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> tmpMax[j];
            tmpMin[j] = tmpMax[j];
            tmpMax[j] += max(colMax[1], (j == 1) ? max(colMax[0], colMax[2]) : colMax[j]);
            tmpMin[j] += min(colMin[1], (j == 1) ? min(colMin[0], colMin[2]) : colMin[j]);
        }
        memcpy(colMax, tmpMax, sizeof(tmpMax));
        memcpy(colMin, tmpMin, sizeof(tmpMin));
    }

    sort(colMax, colMax + 3);
    sort(colMin, colMin + 3);

    cout << colMax[2] << " " << colMin[0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    solution();
}
*/

/* 1300 K번째 수
// 해설 : 이분배열임을 깨닫고 idx값으로 하려했지만 N이 커지면 시간초과됨.
// 그러므로 다른 해결 법을 찾아 idx값이 주어졌으므로 그것 보다 작게 계산하는 방식을 알아야함.
// 이분 탐색의 경우 low, high의 기준을 명확하게 잡고 정답을 어디에서 저장해야할지 잘 알아야함.
// 참고 : https://jaimemin.tistory.com/988

long long N, K;

void solution()
{

    long long start_idx = 1;
    long long end_idx = K;
    long long ans = 0;

    while(start_idx <= end_idx)
    {
        long long mid = (start_idx + end_idx)/2;
        long long cnt = 0;

        for(int i = 1 ; i <= N ; i++)
        {
            cnt += min(mid / i, N); // 1차원 idx값 나누기 y를 하면 작은 갯수가 나옴 -> 1인경우 N보다 커지므로 최소값을 비교하는 것

            if(cnt >= K)
                break;
        }

        if(cnt >= K)
        {
            ans = mid; // cnt가 k일 수 있으니, cnt >= K일 때 ans를 저장해놔야함.
            end_idx = mid - 1;
        }
        else
        {
            start_idx = mid + 1;
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    solution();
}
*/