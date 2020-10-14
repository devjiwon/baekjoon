#include <iostream>

using namespace std;

int main(){
    int a, p, aa, b;
    scanf("%d", &a);

    int result[10001] = {0, };

    for(int j=0;j<a;j++){
        scanf("%d %d", &aa, &b);

        if(aa == b) {
            result[j] = 1;
        }else{
            for(int i=1;i<=aa;i++){
                p=p*(b-i+1)/i;

            }
            result[j]=p;
        }
		
		p=1;
    }

    for(int i=0;i<a;i++)
		printf("%d\n", result[i]);


    return 0;
}