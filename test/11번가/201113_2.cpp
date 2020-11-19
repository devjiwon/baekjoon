#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(18);
    v.push_back(7);
    v.push_back(8);
    v.push_back(3);

    sort(v.rbegin(), v.rend());
    int answer = 0;

    for(int i=0;i<v.size()-2;i++){
        if(v[i] <= v[i+1]+v[i+2]){
            answer += v[i] + v[i+1] + v[i+2];
            break;
        }
    }

    if(answer == 0) answer = -1;
    printf("%d", answer);
    return 0;
}

// 실제 제출 코드
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A){
vector<int> v;

    sort(A.rbegin(), A.rend());
    int answer = 0;

    for(int i=0;i<A.size()-2;i++){
        if(A[i] < A[i+1]+A[i+2]){
            answer += A[i] +A[i+1] + A[i+2];
            break;
        }
    }

    if(answer == 0) answer = -1;

    return answer;
}
*/