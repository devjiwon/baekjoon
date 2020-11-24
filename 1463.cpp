#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[1000001] = {0, };
    int n;
    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        if(arr[i - 1] == 0){
            arr[i - 1] = arr[i] + 1;
        } else {
            arr[i - 1] = min(arr[i]+1, arr[i - 1]);
            
        }

        if(i % 3 == 0){
            if(arr[i / 3] == 0){
                arr[i / 3] = arr[i] + 1;
            } else{
                arr[i / 3] = min(arr[i]+1, arr[i / 3]);
            }
        } 
        
        if(i % 2 == 0){
            if(arr[i / 2] == 0){
                arr[i / 2] = arr[i] + 1;
            } else{
                arr[i / 2] = min(arr[i]+1, arr[i / 2]);
            }
        }

        // for(int i=1;i<=n;i++){
        //     printf("%d ", arr[i]);
        // }

        // printf("\n");
    }

    // for(int i=1;i<=n;i++){
    //     printf("%d ", arr[i]);
    // }
    
    printf("%d", arr[1]);

    return 0;
}