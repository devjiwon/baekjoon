#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int arr[301] = {0, };
    int cost[301] = {0, };

    scanf("%d", &n);

    for(int i=2;i<=n+!;i++){
        int a;
        scanf("%d", &arr[i]);
    }

    int temp = 0;

    for(int i=2;i<=n+1;i++){
        if(i == n && cnt == 3){
            cost[n] = arr[n] + cost[i-2];
        } else if (i == n && cnt != 3){
            cost[i] = arr[i] + max(cost[i-1], cost[i-2]);
        }

        if(cnt == 3){
            cnt = 0;
            cost[i] = arr[i] + cost[i-2];
        } else{
            cost[i] = arr[i] + max(cost[i-1], cost[i-2]);
        }
    }
    printf("\n\n");

    for(int i=2;i<=n+1;i++){
        printf("%d\n", cost[i]);
    }

    printf("%d\n", max(cost[n+1], cost[n]));
    

    return 0;
}