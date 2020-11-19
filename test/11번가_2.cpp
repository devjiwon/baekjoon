#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<int> v;

    vector<string> s;
    s.push_back("abc");
    s.push_back("bca");
    s.push_back("dbe");
    
    for(int i=0;i<s.size()-1;i++){
        for(int j=i+1;j<s.size();j++){
            for(int k=0;k<s[i].size();k++){
                if(s[i][k] == s[j][k]){
                    // v.push_back(i);
                    // v.push_back(j);
                    // v.push_back(k);

                    printf("%d %d %d\n", i, j, k);

                    return 0;
                    
                    // return v;c/
                }
            }
        }
    }



    printf("0");
    return 0;
    // return v;
}