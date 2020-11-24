#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int arr[501][501] = {0, };
    int cost[501][501] = {0, };

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    cost[0][0] = arr[0][0];

    for(int i=1;i<=n-1;i++){
        for(int j=0;j<=i;j++){
            if(j == 0){
                cost[i][j] = max(arr[i][j], cost[i][j]) + cost[i-1][j];
            } else if (j == i) {
                cost[i][j] = max(arr[i][j], cost[i][j]) + cost[i-1][j-1];
            } else{
                cost[i][j] = max(arr[i][j], cost[i][j]) + max(cost[i-1][j-1], cost[i-1][j]);
            }
        }

    }

    int max = -1;
    for(int i=0;i<n;i++){
        if(max < cost[n-1][i]) max = cost[n-1][i];
    }

    printf("%d", max);

    
    return 0;
}