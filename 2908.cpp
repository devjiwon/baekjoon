#include <iostream>

using namespace std;

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int new_a = 0, new_b = 0;

    while(a != 0){
        new_a *= 10;
        new_a += a%10;
        a /= 10;
    }

    while(b != 0){
        new_b *= 10;
        new_b += b%10;
        b /= 10;
    }
    
    if(new_a > new_b) printf("%d", new_a);
    else printf("%d", new_b);
  

    return 0;
}