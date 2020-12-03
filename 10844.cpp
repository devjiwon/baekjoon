#include <iostream>
#define MOD 1000000000

using namespace std;

int main(){
    int n;
    long arr[101][10] = {0, };
    scanf("%d", &n);

    for(int i=1;i<=9;i++){
        arr[1][i] = 1;
    }

    for(int i=2;i<=n;i++){
        for(int j=0;j<=9;j++){
            if(j == 0){ // j가 0일 때, 1만 가능
                arr[i][j] = arr[i-1][j+1] % MOD;
            } else if(j == 9){ // j가 9일 때, 8만 가능
                arr[i][j] = arr[i-1][j-1] % MOD;
            } else{ // 나머지
                arr[i][j] = (arr[i-1][j-1] + arr[i-1][j+1]) % MOD;
            }
        }
    }

    int answer = 0;

    for(int i=0;i<=9;i++){
        answer = (answer + arr[n][i]) % MOD;
    }

    printf("%d\n", answer);


    return 0;
}