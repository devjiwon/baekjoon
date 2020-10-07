#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    int answer;
    vector<int> v;

    if(n < 100) {
        printf("%d", n);
        return 0;
    }
    
    answer += 99;

    for(int i=100;i<=n;i++){
        int num = i;

        while(num != 0){
            v.push_back(num%10);
            num = num/10;
        }

        int cnt = 0;
        for(int i=0;i<v.size()-2;i++){
            if(v[i] - v[i+1] == v[i+1] - v[i+2]){
                cnt++;
            }
        }


        if(cnt == v.size()-2) {
            // printf("%d ", i);
            answer++;
        }

        v.clear();
    }

    printf("%d", answer);



    return 0;
}