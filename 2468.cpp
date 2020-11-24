#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[101][101] = {0, };
int visited[101][101] = {0, };

int n, range;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

vector<int> answer;

void dfs(int x, int y){
    for(int i=0;i<4;i++){
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if(nx >= n || ny >= n || nx < 0 || ny < 0) continue;

        if(arr[nx][ny] > range && visited[nx][ny] == 0){
            visited[nx][ny] = 1;
            dfs(nx, ny);
        }
    } 
}

int main(){
    scanf("%d", &n);

    int max = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);

            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }

    for(range = 0; range <= max; range++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j] = 0;
            }
        }

        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j] > range && visited[i][j] == 0){
                    cnt++;
                    visited[i][j] = 1;
                    dfs(i, j);
                }
            }
        }
        answer.push_back(cnt);
    }

    sort(answer.rbegin(), answer.rend());

    printf("%d\n", answer[0]);

    return 0;
}