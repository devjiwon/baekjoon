#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(8);
    v.push_back(20);

    sort(v.rbegin(), v.rend());
    int answer = 0;

    for(int i=0;i<v.size()-2;i++){
        if(v[i] <= v[i+1]+v[i+2]){
            answer += v[i] + v[i+1] + v[i+2];
        }
    }

    if(answer == 0) answer = -1;

    return 0;
}