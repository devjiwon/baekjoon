#include <iostream>

using namespace std;

int n;
char s;
int cnt = 0;

char adj[101][101] = {0, };
int visited[101][101] = {0, };

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y){
    for(int i=0;i<4;i++){
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if(nx >= n || ny >= n || nx < 0 || ny < 0) continue;

        if(visited[nx][ny] == 0 && adj[nx][ny] == s){
            visited[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}

int main(){
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%1s", &adj[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j] == 0){
                s = adj[i][j];
                dfs(i, j);
                cnt++;
            }
        }
    }   

    printf("%d ", cnt);
    cnt = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j] = 0;
            if(adj[i][j] == 'G') adj[i][j] = 'R';
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j] == 0){
                s = adj[i][j];
                dfs(i, j);
                cnt++;
            }
        }
    }

    printf("%d", cnt);

    return 0;
}