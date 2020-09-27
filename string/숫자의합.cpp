#include <iostream>

using namespace std;

int main(){
    int a;
    scanf("%d", &a);

    char b[100] = { 0, };

    scanf("%s", b);

    long answer = 0;

    for(int i=0;i<a;i++){
       answer += b[i] - '0';
    }

    printf("%ld\n", answer);


    return 0;
}