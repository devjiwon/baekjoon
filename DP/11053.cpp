#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int arr[1001] = {0, };
    int cost[1001] = {0, };
    int sum = 0;

    for(int i=1;i<=n;i++){
        scanf("%d", &arr[i]);
    }

    for(int i=1;i<=n;i++){
        cost[i] = 1;
        for(int j=1;j<=i;j++){
            if(arr[i] > arr[j]){
                cost[i] = max(cost[i] , cost[j] + 1);
                
            }
        }
        sum = max(sum, cost[i]);
    }

    printf("%d\n", sum);

    return 0;
}