#include <iostream>

using namespace std;

int main(){

    int n;
    long long mul = 1;
    scanf("%d", &n);

    for(int i=2;i<=n;i++){
        mul *= i;
    }

    printf("%lld", mul);

    return 0;
}