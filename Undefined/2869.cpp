#include <iostream>

using namespace std;

int main(){
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    int answer = 0;

    if((v-b) % (a - b) == 0){
        answer = (v-b) / (a-b);
    } else{
        answer = (v-b)/(a-b) + 1;
    }

    printf("%d", answer);


    return 0;
}