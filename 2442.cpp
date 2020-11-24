#include <iostream>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=i*2+1;k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}