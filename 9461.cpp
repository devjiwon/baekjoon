// #include <iostream>

// using namespace std;

// int main(){
//     int num;
//     scanf("%d", &num);

//     for(int j=0;j<num;j++){
//         long long f[101] = {0, };
//         int n;
//         scanf("%d",  &n);

//         f[1] = 1;
//         f[2] = 1;
//         f[3] = 1;
//         f[4] = 2;
//         f[5] = 2;

//         for(int i=6;i<=n;i++){
//             f[i] = f[i-1] + f[i-5];
//         }

//         printf("%lld\n", f[n]);
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

int main(){
    long long f[101] = {0, };

    f[1] = f[2] = f[3] = 1;
    
    for(int i=4;i<=101;i++){
        f[i] = f[i-2] + f[i-3];
    }

    int num;
    scanf("%d", &num);

    for(int i=0;i<num;i++){
        int a;
        scanf("%d", &a);
        printf("%lld\n", f[a]);
    }


    return 0;
}