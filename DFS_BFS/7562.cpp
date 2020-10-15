#include <iostream>
#include <queue>

using namespace std;

queue<pair<int ,int> > q;
int arr[301][301] = {0, };
int visited[301][301] = {0, };
int num;

int a, b, a1, b1;

int dx[8] = {2, 2, -2 ,-2, 1, 1, -1, -1};
int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};

void bfs(){
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for(int i=0;i<8;i++){
            int nx = dx[i] + x;
            int ny = dy[i] + y;

            if(nx < 0 || ny < 0 || nx >= num || ny >= num) continue;

            if (arr[nx][ny] == 0 && visited[nx][ny] == 0) {
                arr[nx][ny]++;
                visited[nx][ny] = visited[x][y] + 1; 

                q.push(make_pair(nx, ny));
            }

            
        }
    }
}
int main(){
    int n; 
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d", &num);
        scanf("%d %d", &a, &b);
        scanf("%d %d", &a1, &b1);

        if(a == a1 && b == b1) printf("0\n");
        else{
            q.push(make_pair(a, b));

            bfs();

            printf("%d\n", visited[a1][b1]);

            for(int k=0;k<301;k++){
                for(int j=0;j<301;j++){
                    visited[k][j] = 0;
                    arr[k][j] = 0;
                }
            }

            while(!q.empty()){
                q.pop();
            }
        }
    }

    return 0;
}