#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;

    while(true){
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());

        if(a == 0 && b == 0 && c == 0) return 0;


        if(v[2]*v[2] == v[0]*v[0] + v[1]*v[1]){
            printf("right\n");
        } else{
            printf("wrong\n");
        }
        
        v.clear();
    }

    return 0;
}