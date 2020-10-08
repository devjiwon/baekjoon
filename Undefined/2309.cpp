#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int arr[9] = {0, };
    int sum = 0;
    int i, j;
    vector<int> v;
    for(int i=0;i<9;i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    for(i=0;i<8;i++){
        for(j=i+1;j<9;j++){
            if(sum - arr[i] - arr[j] == 100){
                for(int l=0;l<9;l++){
                    // printf("%d %d##",i,j);
                    if(l != i && l != j) {
                        v.push_back(arr[l]);
                    }
                }

                sort(v.begin(), v.end());
                
                for(int l=0;l<v.size();l++){
                    printf("%d\n", v[l]);
                }

                return 0;
            }
        }
    }

    

   
    
    

    return 0;
}