#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int main(){
    int n;
    scanf("%d", &n);

    vector<pair<int, int> > v;

    for(int i=0;i<n;i++){
        int a, b;
        scanf("%d %d", &a, &b);
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end());

    int end = v[0].second;

    int count = 1;

    for(int i=1;i<n;i++){
        if(end <= v[i].first){
            count++;
            end = v[i].second;
            // printf("%d %d\n", v[i].first, v[i].second);
        }

        if(end > v[i].second){
            end = v[i].second;
        }

    }

    printf("%d\n", count);


    return 0;
}