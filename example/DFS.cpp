#include <iostream>
#include <vector>

using namespace std;

// 그래프의 인접 리스트 표현
vector<int> adj[8];
// 각 정점을 방문했는지 여부를 확인
vector<bool> visited;

void dfs(int here){
    cout << "DFS visits " << here << endl;

    visited[here] = true;

    // 모든 인접 정점을 순회하면서
    for(int i=0; i<adj[here].size(); ++i){
        int there = adj[here][i];

        // 아직 방문한 적 없다면 방문한다.
        if(!visited[there]) {
            dfs(there);
        }
    }
    // 더 이상 방문할 정점이 없으니, 재귀 호출을 종료하고 이전 정점으로 돌아간다.
}

// 모든 정점을 방문한다.
void dfsAll(){
    // visited를 모두 false로 초기화한다.
    visited = vector<bool> (7, false);

    // 모든 정점을 순회하면서, 아직 방문한 적 없으면 방문한다.
    for(int i=1; i<=7; i++){
        if(!visited[i]) dfs(i);
    }
}

int main(){

    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    adj[2].push_back(5);
    adj[5].push_back(2);

    adj[3].push_back(6);
    adj[6].push_back(3);

    adj[3].push_back(7);
    adj[7].push_back(3);

    //깊이 우선 탐색을 구현
    dfsAll();

    return 0;
}