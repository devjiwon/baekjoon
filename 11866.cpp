#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;

    int n, k;
    scanf("%d %d", &n, &k);

    for(int i=1;i<=n;i++){
        q.push(i);
    }

    int cnt = 0;

    printf("<");

    while(!q.empty()){
        cnt++;

        if(q.size() == 1){
            printf("%d", q.front());
            break;
        }
        
        if(cnt == k){
            cnt = 0;
            printf("%d, ", q.front());
            q.pop();

        } else{
            q.push(q.front());
            q.pop();
        }
    }

    printf(">");



    return 0;
}