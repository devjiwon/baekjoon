#include <iostream>

using namespace std;

int n;
int cnt = 0;

void fibonachi(int a, int b){
    int sum = a+b;
    cnt++;
    if(cnt == n){
        printf("%d\n", b);
    }

    return fibonachi(b, a+b);
}

int main(){
    scanf("%d", &n);
    
    fibonachi(0, 1);
}