#include <iostream>

using namespace std;

int main(){
    int n, answer, m;
    scanf("%d", &n);

    answer = n / 5;
    m = n - 5 * answer;

    while(true){
        if(m % 3 == 0){
            answer += m / 3;
            printf("%d", answer);
            return 0;
        }

        if(m >= n){
            printf("-1");
            return 0;
        }

        m += 5;

        answer--;
    }

    // printf("%d", answer);

    // return 0;
}