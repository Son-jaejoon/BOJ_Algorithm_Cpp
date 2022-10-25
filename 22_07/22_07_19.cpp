#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[10000] = {0, };
    double one_price[10000] = {0, };

    for(int i = 0 ; i < N ; i++)
    {
        scanf("%d", arr[i]);
    }

    for(int i = 0 ; i < N ; i++)
    {
        one_price[i] = arr[i]/(i+1);
    }

    int max_index = std::max_element(one_price, one_price + 10000) - one_price;
}

/* 14391번 종이 조각
using namespace std;

int arr[4][4];
bool check[4][4] = { false, };
int row, col, result = 0;

void brute(int num, int sum) {
	int x = num % col;
	int y = num / col;
	if (num >= row * col) {
		result = max(result, sum);
		return;
	}
	if (check[y][x]) brute(num + 1, sum);
	else {
		int val, ny, nx;
		val = arr[y][x];
		check[y][x] = true;
		brute(num + 1, sum + val);
		check[y][x] = false;
		//밑으로
		for (int k = 1; k < row - y; k++) {
			nx = x;
			ny = y + k;
			val *= 10;
			val += arr[ny][nx];
			for (int j = 1; j <= k; j++)
				check[y + j][nx] = true;
			brute(num + 1, sum + val);
			for (int j = 1; j <= k; j++)
				check[y + j][nx] = false;
		}
		val = arr[y][x];
		//오른쪽으로
		for (int k = 1; k < col - x; k++) {
			ny = y;
			nx = x + k;
			if (check[ny][nx]) return;
			val *= 10;
			val += arr[ny][nx];
			for (int j = 1; j <= k; j++)
				check[ny][x+j] = true;
			brute(num + 1, sum + val);
			for (int j = 1; j <= k; j++)
				check[ny][x + j] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> row >> col;
	string str;
	for (int i = 0; i < row; i++) {
		cin >> str;
		for (int j = 0; j < col; j++)
			arr[i][j] = str[j] - '0';
	}
	brute(0, 0);
	cout << result;
	return 0;
}
*/

/* 14889번 스타트와 링크
using namespace std;
int N;
int map[22][22];
bool chk[22];
int ans = 0x7fffffff;

void Calc() {
	int A, B;
	A = B = 0;
	for (int i = 1; i <= N; i++) {
		if (chk[i] == true) { // true 팀 더하기 
			for (int j = 1; j <= N; j++) {
				if (chk[j] == true)
					A += map[i][j];
			}
		}
		else { // false 팀 더하기 
			for (int j = 1; j <= N; j++) {
				if (chk[j] == false)
					B += map[i][j];
			}
		}
	}
	int tmp = abs(A - B);
	if (tmp < ans)ans = tmp;
}

void DFS(int node, int start) {
	if (node == N / 2) {
		Calc();
		return;
	}
	for (int i = start; i <= N; i++) {
		chk[i] = true;
		DFS(node + 1, i + 1);
		chk[i] = false;
	}
}

int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	DFS(0, 1);
	printf("%d\n", ans);
}
*/

/* 11723번 집합

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string str = "";
    int M, x;
    int arr[21] = {0};
    
    
    cin >> M;
    for(int i = 0; i<M; i++){
        cin >> str;
        
        if(str=="add"){
            cin >> x;
            if(arr[x]==0){   //없으면
                arr[x] = 1;
            }
        }
        
        else if(str=="remove"){
            cin >> x;
            if(arr[x] == 1){  //있으면
                arr[x] = 0;
            }
            
        }
        else if(str=="check"){
            cin >> x;
            if(arr[x] == 0){   //없으면
                cout << "0\n";
            } else{
                cout << "1\n";
            }
        }
        else if(str=="toggle"){
           cin >> x;
            if(arr[x] == 1){  //있으면
                arr[x] = 0;
            } else{
                arr[x] = 1;
            }
        }
        else if(str=="all"){
            
            for(int k = 1; k<=20; k++){ arr[k] = 1;}
            
        }
        else if(str=="empty"){
            memset(arr, 0, sizeof(arr));
        }
    }
    
    return 0;
}
*/