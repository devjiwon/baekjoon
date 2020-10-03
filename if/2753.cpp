#include <iostream>

using namespace std;

int main(){

    int n;
    int answer = 0;

    scanf("%d", &n);

    if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0){
        answer = 1;
    }

    printf("%d", answer);

    return 0;
}