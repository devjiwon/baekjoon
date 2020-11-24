#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    scanf("%d", &n);

    queue<int> q;
    int size = 0;

    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        
        if(s == "pop"){
            if(!q.empty()){
                printf("%d\n", q.front());
                q.pop();
                size--;
            } else{
                printf("-1\n");
            }

        } else if(s == "size"){
            printf("%d\n", size);

        } else if(s == "empty"){
            if(!q.empty()){
                printf("0\n");
            } else{
                printf("1\n");
            }


        } else if(s == "front"){
            if(!q.empty()){
                printf("%d\n", q.front());
            } else{
                printf("-1\n");
            }

        } else if(s == "back"){
            if(!q.empty()){
                printf("%d\n", q.back());
            } else{
                printf("-1\n");
            }

        } else if(s == "push"){
            int num = 0;
            scanf("%d", &num);

            q.push(num);
            size++;
        }
    }




    return 0;
}