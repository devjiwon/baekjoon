#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

vector<int> v[100001];
int visited[100001] = {0, };
int arr[100001] = {0, };
vector<pair<int, int> > answer;

int cnt = 0;

void dfs(int start){
    if(visited[start] == 1) return;
    visited[start] = 1;

    cnt++;

    for(int j=0;j<v[start].size();j++){
        int top = v[start][j];
        
        dfs(top);
    }
}

int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    for(int i=0;i<m;i++){
        int a, b;
        scanf("%d %d", &a, &b);

        v[b].push_back(a);
    }

    sort(v[1].begin(), v[1].end());

    for(int i=1;i<=n;i++){
        if(visited[i] == 0){
            dfs(i);
        }

        for(int j=0;j<=n;j++){
            visited[j] = 0;
        }

        answer.push_back(make_pair(cnt, i));
        cnt = 0;
    }

    sort(answer.rbegin(), answer.rend());

    int max = answer[0].first;

    vector<int> a;

    for(int i=0;i<answer.size();i++){
        if(max == answer[i].first) a.push_back(answer[i].second);
    }

    sort(a.begin(), a.end());

    for(int i=0;i<a.size();i++){
        printf("%d ", a[i]);
    }


    return 0;
}