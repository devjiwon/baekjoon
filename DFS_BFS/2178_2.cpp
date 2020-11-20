#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;

int adj[101][101] = {0, };
int visited[101][101] = {1, };

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int x, int y){
    queue<pair<int, int> > q;
    q.push(make_pair(x, y));
    
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            int nx = dx[i] + x;
            int ny = dy[i] + y;

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

            if(adj[nx][ny] == 1 && visited[nx][ny] == 0){
                q.push(make_pair(nx, ny));
                visited[nx][ny] = visited[x][y] + 1;
            }
        }
    }
}

int main(){
    scanf("%d %d", &n, &m);

    for(int i=0;i<n;i++){
        string s;
        cin >> s;

        for(int j=0;j<m;j++){
            adj[i][j] = s[j] - '0';
        }
    }

    bfs(0, 0);

    printf("%d\n", visited[n-1][m-1]);

    return 0;
}