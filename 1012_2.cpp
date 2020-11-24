#include <iostream>

using namespace std;

int adj[51][51] = {0, };
int visited[51][51] = {0, };

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int width, height;

void dfs(int x, int y){
    for(int i=0;i<4;i++){
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if(nx < 0 || nx < 0 || nx >= width || ny >= height) continue;

        if(visited[nx][ny] == 0 && adj[nx][ny] == 1){
            visited[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}

int main(){
    int caseNum;
    scanf("%d", &caseNum);
    

    while(caseNum--){
        int cnt;
        int answer = 0;
        scanf("%d %d %d", &width, &height, &cnt);

        for(int i=0;i<cnt;i++){
            int a, b;
            scanf("%d %d", &a, &b);

            adj[a][b] = 1;
        }

        for(int i=0;i<width;i++){
            for(int j=0;j<height;j++){
                if(adj[i][j] == 1 && visited[i][j] == 0){
                    answer++;
                    dfs(i, j);
                }
                // printf("%d ", adj[i][j]);
            }
            // printf("\n");
        }

        printf("%d\n", answer);

        for(int i=0;i<width;i++){
            for(int j=0;j<height;j++){
                adj[i][j] = 0;
                visited[i][j] = 0;
                // printf("%d ", adj[i][j]);
            }
            // printf("\n");
        }
    }

    

    return 0;
}