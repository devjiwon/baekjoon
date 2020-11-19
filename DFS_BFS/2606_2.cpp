#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

vector<vector<int> > adj;
vector<int> visited;

int answer = 0;

void dfs(int v){
    stack<int> s;
    s.push(v);

    while(!s.empty()){
        int top = s.top();
        s.pop();

        if(visited[top] == 1) continue;

        visited[top] = 1;
        answer++;

        for(int i=0;i<adj[top].size();i++){
            if(visited[adj[top][i]] == 0) s.push(adj[top][i]);
        }
    }
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    adj.resize(n+1);
    visited.resize(n+1);

    for(int i=0;i<m;i++){
        int a, b;
        scanf("%d %d", &a, &b);

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    sort(adj[1].begin(), adj[1].end());

    dfs(1);

    printf("%d\n", --answer);
    
    return 0;
}