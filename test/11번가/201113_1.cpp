#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int answer = 2;
    vector<int> A;
    // A.push_back(2);
    // A.push_back(3);
    // A.push_back(3);
    // A.push_back(2);
    // A.push_back(2);
    // A.push_back(2);
    // A.push_back(1);

    A.push_back(2);
    A.push_back(5);
    A.push_back(3);
    A.push_back(2);
    A.push_back(4);
    A.push_back(1);


    if(A.size() == 2) return 2;

    int first_num = A[0];
    int end_num = A[A.size()-1];

    A.erase(A.begin() + A.size()-1);
    A.erase(A.begin() + 0);
    sort(A.begin(), A.end());

    int max = A[A.size()-1];

    int temp = first_num;

    printf("%d\n", first_num);

    for(int i=0;i<A.size();i++){
        if(temp < A[i]){
            answer++;
            temp = A[i];
            printf("%d\n", A[i]);
            A.erase(A.begin() + i--);
        }
        // printf("%d\n", A[i]);
    }

    temp = end_num;

    sort(A.rbegin(), A.rend());

    for(int i=0;i<A.size();i++){
        if(temp < A[i] && max > A[i]){
            answer++;
            temp = A[i];
            printf("%d\n", A[i]);
            A.erase(A.begin() + i--);
        }
        // printf("%d\n", A[i]);
    }

     printf("%d\n", end_num);

    printf("\n\n%d\n", answer);

    return answer;
}