#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    int k;
    vector<int> v;
    
    scanf("%d %d", &n, &k);

    for(int i=0;i<n;i++){
        int a;
        scanf("%d", &a);
        v.push_back(a);
    }

    sort(v.rbegin(), v.rend());

    int sum = 0;
    int count = 0;
    int i = 0;
    
    while(true){
        sum += v[i];

        if(sum > k){
            sum -= v[i];
            i++;
        } else if(sum == k){
            count++;
            break;
        } else{
            count++;
        }
    }

    printf("%d", count);



    return 0;
}