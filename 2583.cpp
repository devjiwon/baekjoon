#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, k;

int adj[101][101] = {0, };
int visited[101][101] = {0, };

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int a;

void dfs(int x, int y){
    for(int i=0;i<4;i++){
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if(nx >= n || ny >= m || nx < 0 || ny < 0) continue;

        if(adj[nx][ny] == 0 && visited[nx][ny] == 0){
            a++;
            visited[nx][ny]++;
            dfs(nx, ny);
        }
    }

}

int main(){
    scanf("%d %d %d", &n, &m, &k);
    int cnt = 0;
    vector<int> v;

    for(int i=0;i<k;i++){
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        for(int j=b;j<d;j++){
            for(int k=a;k<c;k++){
                adj[j][k] = 1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(adj[i][j] == 0 && visited[i][j] == 0){
                a++;
                cnt++;
                visited[i][j]++;
                dfs(i, j);
                v.push_back(a);
            }
            a = 0;
        }
    }

    printf("%d\n", cnt);

    sort(v.begin(), v.end());

    for(int i=0;i<v.size();i++){
        printf("%d ", v[i]);
    }

    return 0;
}