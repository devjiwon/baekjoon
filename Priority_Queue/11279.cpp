#include <iostream>
#include <queue>

using namespace std;

int main(){
    priority_queue<int> q;
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int a;
        scanf("%d", &a);

        if(a == 0){
            if(q.empty()) printf("0\n");
            else {
                printf("%d\n", q.top());
                q.pop();
            }
        } else{
            q.push(a);
        }
    }

    return 0;
}