#include <iostream>

using namespace std;

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[10001] = {0, };

    for(int i=2;i<=b;i++){
        if(arr[i] == 1) continue;
        else{
            for(int j=i+i;j<=b;j+=i){
                arr[j] = 1;
            }
        }
    }

    int answer = 0;

    arr[1] = 1;
    
    for(int i=a;i<=b;i++){
        if(arr[i] == 0){
            answer += i;
        }
    }

    if(answer == 0) {
        printf("-1");
        return 0;
    }

    printf("%d\n", answer);

    for(int i=a;i<=b;i++){
        if(arr[i] == 0){
            printf("%d\n", i);
            return 0;
        }
    }

    return 0;
}