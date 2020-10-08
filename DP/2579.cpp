#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int arr[301] = {0, };
    int cost[301] = {0, };

    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        scanf("%d", &arr[i]);
    }

    cost[1] = arr[1];
    cost[2] = arr[1] + arr[2];
    cost[3] = max(arr[1] + arr[3], arr[2] + arr[3]);

    for(int i=4;i<=n;i++){
        cost[i] = max(cost[i-2] + arr[i], cost[i-3] + arr[i-1] + arr[i]);
    }

    printf("%d", cost[n]);

    return 0;
}