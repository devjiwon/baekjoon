#include <iostream>

using namespace std;

int main(){

    int h, m;
    
    scanf("%d %d", &h, &m);

    if(m >= 45){
        m = m - 45;
    } else{
        if(h != 0) h--;
        else h = 23;

        m = m + 15;
    }

    printf("%d %d", h, m);
    


    return 0;
}