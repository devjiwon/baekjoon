#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    int min = 1;
    int max = 8;
    int as = 0, de = 0;

    for(int i=0;i<8;i++){
        int a;
        scanf("%d", &a);

        v.push_back(a);
    }

    for(int i=0;i<v.size();i++){
        if(v[0] == 1 && v[i] == min){
            min++;
            as++;
        }else if(v[0] == 8 && v[i] == max){
            max--;
            de++;
        }
    }

    if(as == 8){
        printf("ascending\n");
    }else if(de == 8){
        printf("descending\n");
    }else{
        printf("mixed\n");
    }


    return 0;
}