#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int> > adj;
vector<int> visited;
vector<int> ss;
int n, m;

void dfs(int v){
    queue<int> q;
    q.push(v);
    visited[v] = 0;

    while(!q.empty()){
        int top = q.front();
        q.pop();

        if(ss[top] != 0) continue;

        ss[top] = 1;

        for(int i=0;i<adj[top].size();i++){
            if(ss[adj[top][i]] == 0) {
                visited[adj[top][i]] = visited[top] + 1;
                q.push(adj[top][i]);
            }
        }

    }
}

int main(){
    scanf("%d %d", &n, &m);

    adj.resize(n+1);
    visited.resize(n+1);
    ss.resize(n+1);

    for(int i=0;i<m;i++){
        int a, b;
        scanf("%d %d", &a, &b);

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<pair<int, int> > answer;

    for(int i=1;i<=n;i++){
        dfs(i);

        int sum = 0;

        for(int k=1;k<=n;k++){
            if(k != i){
                sum += visited[k];
            }
        }
        
        answer.push_back(make_pair(sum, i));

        for(int j=0;j<visited.size();j++){
            visited[j] = 0;
            ss[j] = 0;
        }
    }

    sort(answer.begin(), answer.end());

    printf("%d\n", answer[0].second);


    return 0;
}