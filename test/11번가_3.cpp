#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    vector<int> A;

    long long answer = 0;

    A.push_back(6);
    A.push_back(2);
    A.push_back(3);
    A.push_back(5);
    A.push_back(6);
    A.push_back(3);

    sort(A.begin(), A.end());

    // for(int i=0;i<A.size();i++){
    //     printf("%d ", A[i]);
    // }

    printf("\n");
    for(int i=0;i<A.size();i++){
        if(A[i] != i+1){
            if(A[i] > i+1){
                answer += (A[i] - (i+1));
            } else{
                answer += ((i+1) - A[i]);
            }
        }

        if(answer > 100000000){
            printf("-1");
            return 0;
        }
    }

    printf("%lld\n", answer);

    



    return 0;
}