#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    vector<int> v;

    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int a;
        scanf("%d", &a);
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += v[i]*(n-i);
    }

    printf("%d", sum);

    return 0;
}