#include <iostream>
#include <queue>

using namespace std;

int main(){
    int num;
    scanf("%d", &num);

    for(int i=0;i<num;i++){
        priority_queue<int> maxq;
        queue<pair<int, int> > q;
        int n, m;
        scanf("%d %d", &n, &m);

        for(int j=0;j<n;j++){
            int k;
            scanf("%d", &k);
            q.push(make_pair(k, j+1));
            maxq.push(k);
        }

        int cnt = 0;

        while(!q.empty()){
            if(maxq.top() == q.front().first){
                if(q.front().second == m){
                    break;
                } else{
                    cnt++;
                    q.push(make_pair(q.front().first, q.front().second));
                    q.pop();
                }
            }else{
                cnt++;
                q.push(make_pair(q.front().first, q.front().second));
                q.pop();
            }
        }

        printf("%d\n", cnt);
        
    }




    return 0;
}