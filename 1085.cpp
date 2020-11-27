#include <iostream>

using namespace std;

int main(){
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int cal_x = abs(x - w) > abs(x - 0) ? abs(x - 0) : abs(x - w);
    int cal_y = abs(y - h) > abs(y - 0) ? abs(y - 0) : abs(y - h);


    if(cal_x > cal_y){
        printf("%d\n", cal_y);
    } else{
        printf("%d\n", cal_x);
    }


    return 0;
}