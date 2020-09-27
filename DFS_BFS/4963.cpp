#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int n, m;
int arr[51][51] = {0, };
int visited[51][51] = {0, };

int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};

void dfs(int x, int y){
    for(int i=0;i<8;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= m || ny >= n) continue;

        if(arr[nx][ny] == 1 && visited[nx][ny] == 0){
            visited[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}

int main(){
    while(true){
        scanf("%d %d", &n, &m);

        if(n == 0 && m == 0) break;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d", &arr[i][j]);
                visited[i][j] = 0;
            }
        }

        int cnt = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j] == 1 && visited[i][j] == 0){
                    cnt++;
                    dfs(i, j);
                }
            }
        }


        printf("%d\n", cnt);


    }



    return 0;
}