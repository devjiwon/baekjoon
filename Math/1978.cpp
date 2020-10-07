// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     bool arr[1001] = {false, };
//     scanf("%d", &n);

//     for(int i = 2; i <= n; i++){
//         if(arr[i] == false){
//             for(int j = i+i; j <= n; j+=i){
//                 arr[j] = true;
//             }

//         } else continue;
//     }
//     arr[1] = true;
//     arr[2] = true;
//     for(int i=1;i<=n;i++){
//         if(arr[i] == false){
//             printf("%d ", i);
//         }
       
//     }


//     return 0;
// }

#include <iostream>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int answer = 0;

    for(int i=0;i<n;i++){
        int a;
        scanf("%d", &a);
        int cnt = 0;

        for(int j=1;j<=a;j++){
            if(a % j == 0) cnt++;
        }

        if(cnt == 2){
            answer++;
        }
    }

    printf("%d\n", answer);

    return 0;
}