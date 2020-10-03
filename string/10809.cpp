#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    char arr[100] = {0, };
    int arrNum[26] = {0, };

    scanf("%s", arr);

    for(int i=0;i<26;i++){
        arrNum[i] = -1;
    }

    for(int i=0; i<100; i++){
        // printf("%d %d\n", arr[i] - 97, i);
        if(arr[i] - 97 == -97) break;

        if(arrNum[arr[i] - 97] == -1){
            arrNum[arr[i] - 97] = i;
        }
        
    }

    for(int i=0;i<26;i++){
        printf("%d ", arrNum[i]);
    }

    return 0;
}