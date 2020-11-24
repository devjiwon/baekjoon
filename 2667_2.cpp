#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int adj[26][26] = {0, };
int visited[26][26] = {0, };

vector<int> answer;

int cnt = 1;
int n;

int nx[4] = {1, -1, 0, 0};
int ny[4] = {0, 0, 1, -1};

void dfs(int x, int y){
    for(int i=0;i<4;i++){
        int dx = x + nx[i];
        int dy = y + ny[i];

        if(dx < 0 || dy < 0 || dx >= n || dy >= n) continue;

        if(visited[dx][dy] == 0 && adj[dx][dy] == 1){
            visited[dx][dy] = 1;
            cnt++;
            dfs(dx, dy);
        }
    }
}

int main(){
    scanf("%d", &n);
    string s;
    
    for(int i=0;i<n;i++){
        cin >> s;

        for(int j=0;j<n;j++){
            adj[i][j] = s[j] - '0';
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j] == 0 && adj[i][j] == 1){
                cnt = 1;
                visited[i][j] = 1;
                dfs(i, j);
                answer.push_back(cnt);
            }
        }
    }

    printf("%lu\n", answer.size());

    sort(answer.begin(), answer.end());

    for(int i=0;i<answer.size();i++){
        printf("%d\n", answer[i]);
    }
    return 0;
}