#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q; 
    // priority_queue<pair<int, int> > q;
    vector<pair<int, int> > v;

    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int a, b;
        scanf("%d %d", &a, &b);

        q.push(make_pair(a, b)); // 시작 시간, 끝나는 시간
    }

    v.push_back(make_pair(q.top().first, q.top().second));
    q.pop();

    while(!q.empty()){
        bool flag = true;

        for(int j=0;j<v.size();j++){
            if(v[j].second <= q.top().first){
                v[j].first = q.top().first;
                v[j].second = q.top().second;
                q.pop();

                flag = false;

                break;
            }
        }

        if(flag == true){
            v.push_back(make_pair(q.top().first, q.top().second));
            q.pop();
        }
    }

    printf("\n\n");
    for(int i = 0;i<v.size();i++){
        printf("%d %d\n", v[i].first, v[i].second);
    }

    printf("%lu\n", v.size());

    return 0;
}