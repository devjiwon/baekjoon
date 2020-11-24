#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<string> v;

    for(int i=0;i<n;i++){
        string s;

        v.push_back(s);
    }
    
    int answer = 0;
    int past = 0;

    for(int i=0;i<v.size(); i++){
        int arr[26] = {0, };
        for(int j=0;j<v[i].size();j++){
            if(i>=1){
                if(arr[v[i][j] - 97] != 0 || v[i] == v[i-1]){
                    answer++;
                    break;
                }
            } else{
                if(arr[v[i][j] - 97] != 0){
                    answer++;
                    break;
                }
            }
        }
    }

    return 0;
}