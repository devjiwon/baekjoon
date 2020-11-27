#include <iostream>
#include <vector>

using namespace std;

int main(){
    int sum = 0;

    for(int i=0;i<5;i++){
        int a;
        scanf("%d", &a);
        sum += a*a;
    }

    printf("%d\n", sum%10);

    return 0;
}