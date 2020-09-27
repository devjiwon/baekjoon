#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int a;
        scanf("%d", &a);

        double sum = 0;
        vector<int> v;
        for(int j=0;j<a;j++){
            
            int b;
            scanf("%d", &b);
            v.push_back(b);
            sum += b;
        }

        double avg = sum / a;
        double s = 0;
        for(int i=0;i<v.size();i++){
            if(avg < v[i]) {
                s++;
            }
        }
        printf("%.3lf%%\n", s/a*100);
    }

   


	return 0;
}