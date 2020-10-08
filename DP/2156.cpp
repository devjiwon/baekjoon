#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int arr[10001] = {0, };
    int cost[10001] = {0, };
    
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    cost[0] = arr[0];
    cost[1] = arr[0] + arr[1];

    for(int i=2;i<n;i++){
        cost[i] = max(cost[i-3] + arr[i-1] + arr[i], max(cost[i-2] + arr[i], cost[i-1]));
    }

    int max = -1;

    for(int i=0;i<n;i++){
        // printf("%d ", cost[i]);
        if(max < cost[i]) max = cost[i];
    }

    printf("%d", max);

    return  0;
}