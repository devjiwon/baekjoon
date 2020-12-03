#include <iostream>
#include <cstring>

using namespace std;

int n, m;
int adj[301][301] = {0, };
int visited[301][301] = {0, };

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

// 빙산이 몇 조각인지 확인
void dfs(int x, int y){
    for(int i=0;i<4;i++){
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

        if(adj[nx][ny] != 0 && visited[nx][ny] == 0) {
            visited[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}

// 얼음 녹이기
void melt_dfs(int x, int y){
    int melt_cnt = 0;

    for(int i = 0; i < 4; i++){
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

        if(adj[nx][ny] == 0) melt_cnt++;
    }

    if(adj[x][y] - melt_cnt <= 0) visited[x][y] = 0;
    else visited[x][y] = adj[x][y] - melt_cnt;

}

int main(){
    scanf("%d %d", &n, &m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &adj[i][j]);
        }
    }

    
    int answer = 0;
    while(true){
        int cnt = 0;
        
        // 1. 빙산이 몇 조각인지 확인
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(adj[i][j] != 0 && visited[i][j] == 0){
                    cnt++;
                    dfs(i, j);
                } 
            }
        }
        answer++;

        // 2. 두 조각 이상인지 확인
        if(cnt >= 2) {
            printf("%d\n", --answer);
            return 0;
        }

        // 3. 빙산 녹이기
        memset(visited, 0, sizeof(visited));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(adj[i][j] != 0 && visited[i][j] == 0){
                    melt_dfs(i, j);
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                adj[i][j] = visited[i][j];
            }
        }

        // 4. 빙산이 다 녹았는지 확인
        int temp = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(adj[i][j] != 0){
                    temp++;
                } 
            }
        }

        if(temp == 0 && cnt <= 1){
            printf("0\n");
            return 0;
        }

        memset(visited, 0, sizeof(visited));
    }

    return 0;
}