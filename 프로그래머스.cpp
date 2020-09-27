#include <string>
#include <vector>

using namespace std;

int arr[201][201] = {0, };
int visited[201][201] = {0, };

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int cnt = 0;
int nn;

void dfs(int x, int y){
    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx >= nn || ny >= nn || nx < 0 || ny < 0) continue;
        
        if(arr[nx][ny] == 1 && visited[nx][ny] == 0){
            visited[nx][ny] = 1;
            dfs(nx, ny);
        }
    
    }
}

int main() {
    int n = 3;
    int nn = n;
    int answer = 0;
    int sum = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    // for(int i=0;i<201;i++){
    //     for(int j=0;j<201;j++){
    //         arr[i][j] = 0;
    //         visited[i][j] = 0;
    //     }
    // }
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(computers[i][j] == 1){
    //             arr[i][j] = 1;
    //         }
    //     }
    // }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 1 && visited[i][j] == 0){
                visited[i][j] = 1;
                cnt++;
                dfs(i, j);
            }
        }
    }

    return cnt;
}