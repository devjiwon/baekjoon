#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<vector<int> > v;
vector<bool> visited;

int n, m;

void dfs(int vv){
    stack<int> s;
    s.push(vv);

    while(!s.empty()){
        int top = s.top();
        s.pop();

        // printf("** %d\n", top);

        if(visited[top-1] == true) continue;

        visited[top-1] = true;

        sort(v[top].rbegin(), v[top].rend());

        for(int i=0; i<v[top].size(); i++){
            if(visited[v[top][i] - 1] == false) s.push(v[top][i]);
        }
    }

}

int main(){
    scanf("%d %d", &n, &m);
    int a, b;

    v.resize(n+1);
    visited.resize(n+1);

    for(int i=0;i<m;i++){
        scanf("%d %d", &a, &b);

        v[a].push_back(b);
        v[b].push_back(a);
        
    }

    for(int i=0;i<n;i++){
        visited.push_back(false);
    }

    int cnt = 0;

    for(int i=0;i<n;i++){
        sort(v[i+1].rbegin(), v[i+1].rend());
        if(visited[i] == false){
            cnt++;
            dfs(i+1);
        }
    }

    printf("%d\n", cnt);

}