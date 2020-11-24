#include <iostream>

using namespace std;

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    if(m == 1 || m == 2) printf("NEWBIE!");
    else if(n >= m && m != 1 && m != 2) printf("OLDBIE!");
    else printf("TLE!");

    return 0;
}