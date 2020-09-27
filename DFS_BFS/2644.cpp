#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int n, m;
int cnt = 0;

vector<vector<int> > v;
vector<bool> visited;
vector<int> arr;

void dfs(int vv){
    stack<int> s;
    s.push(vv);

    while(!s.empty()){
        int top = s.top();
        s.pop();

        if(visited[top - 1] == true) continue;

        visited[top - 1] = true;

        if(top == m){
            printf("%d\n", arr[top-1]);
            return;
        }


        sort(v[top].rbegin(), v[top].rend());

        for(int i=0;i<v[top].size();i++){
            if(visited[v[top][i] - 1] == false) {
                s.push(v[top][i]);
                arr[v[top][i] - 1] = arr[top - 1] + 1;
            }
        }
    }
    printf("-1\n");

}

int main(){
    int num;
    scanf("%d", &num);

    scanf("%d %d", &n, &m);

    int k;
    scanf("%d", &k);

    v.resize(num+1);
    visited.resize(num+1);
    arr.resize(num+1);

    for(int i=0;i<k;i++){
        int a, b;
        scanf("%d %d", &a, &b);

        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i=0;i<num;i++){
        arr[i] = 0;
    }

    sort(v[n].rbegin(), v[n].rend());
    
    dfs(n);

    return 0;
}