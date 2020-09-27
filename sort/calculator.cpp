#include <iostream>

using namespace std;

int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    int n1, n2, n3;

    n1 = b%10;
    n2 = b/10%10;
    n3 = b/100%10;

    printf("%d\n", n1*a);
    printf("%d\n", n2*a);
    printf("%d\n", n3*a);
    printf("%d", a*b);
    
    return 0;
}