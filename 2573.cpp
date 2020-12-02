#include <iostream>

using namespace std;

int n, m;
int adj[10001][10001] = {0, };
int visited[10001][10001] = {0, };

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

// 빙산이 몇 조각인지 확인
void dfs(int x, int y){
    for(int i=0;i<4;i++){
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

        visited[nx][ny] =  1;
        if(adj[nx][ny] > 0 && visited[nx][ny] == 0) {
            dfs(nx, ny);
        }
    }
}

int main(){
    scanf("%d %d", &n, &m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &adj[i][j]);
        }
    }

    int cnt = 0;
    // while(true){
        // 1. 빙산이 몇 조각인지 확인
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(adj[i][j] != 0 && visited[i][j] == 0){
                    cnt++;
                    dfs(i, j);
                } 
            }
        }




        // 2. 두 조각 이상인지 확인


        // 3. 빙산 녹이기


        // 4. 빙산이 다 녹았는지 확인



    // }

    printf("%d\n", cnt);
    



    


    return 0;
}