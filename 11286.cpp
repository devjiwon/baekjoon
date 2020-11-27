#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    // 정수와 그 정수의 절대값을 저장하는 우선순위 큐
    priority_queue<pair<int, int> > q;

    for(int i=0;i<n;i++){
        int a;
        scanf("%d", &a);

        if(a == 0){ // 0의 입력을 받았을 때
            if(q.empty()){ // 큐가 비어있으면, 0 출력
                printf("0\n");
            }else{ // 큐가 비어있지 않으면, 절대값이 가장 작은 값을 출력
                printf("%d\n",-q.top().second); // 저장할 때, -를 붙여서 했기 때문에 출력할 때도 -를 붙여서 출력해야 함
                q.pop();
            }

        } else{ // 정수가 들어왔을 때, 큐에 저장
           q.push(make_pair(-abs(a), -a)); // -를 안붙이면, 값이 큰 것부터 정렬된다. 그렇기 때문에 -를 붙여서 저장을 함

        }
    }

    // while(!q.empty()){
    //      printf("%d %d\n", -q.top().first, -q.top().second); 
    //      q.pop();
    // }

    return 0;
}