#include <iostream>
#include <vector>

using namespace std;

int main(){

    while(true){
        int n;
        scanf("%d", &n);
        bool flag = true;
        vector<int> v;

        if(n == 0) return 0;

        while(n != 0){
            v.push_back(n%10);
            n /= 10;
        }

        for(int i=0;i<v.size()/2;i++){
            if(v[i] != v[v.size() - i - 1]){
                flag = false;
                break;
            }
        }

        if(flag == true){
            printf("yes\n");
        } else{
            printf("no\n");
        }

        v.clear();
    }

    return 0;
}