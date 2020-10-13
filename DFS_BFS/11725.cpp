#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> v[100001];
int arr[100001] = {0, };
int visited[100001] = {0, };

void dfs(int start){
    stack<int> s;
    s.push(start);

    while(!s.empty()){
        int top = s.top();
        s.pop();

        if(visited[top] == 1) continue;

        visited[top] = 1;

        sort(v[top].rbegin(), v[top].rend());

        for(int i=0;i<v[top].size();i++){
            if(visited[v[top][i]] == 0) {
                arr[v[top][i]] = top;
                s.push(v[top][i]);
            }
        }
    }
}

int main(){

    int n, a, b;
    scanf("%d", &n);

    // v.resize(n);

    for(int i=0;i<n-1;i++){
        scanf("%d %d", &a, &b);

        v[a].push_back(b);
        v[b].push_back(a);
    }

    // printf("adfafsa\n");

    sort(v[1].rbegin(), v[1].rend());

    for(int i=1;i<=n;i++){
        // printf("23222");
        if(visited[i] == 0){
            dfs(i);
            // printf("%d\n",i);
        }
    }

    for(int i=2;i<=n;i++){  
        printf("%d\n", arr[i]);
    }

    return 0;
}