#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int arr[26] = {0, };
    int max = -1;

    for(int i=0;i<s.size();i++){
        if('a' <= s[i] && s[i] <= 'z'){
            arr[s[i] - 97]++;
        } else{
            arr[s[i] - 65]++;
        }
    }

    int idx = 0;
    
    for(int i=0;i<26;i++){
        if(max < arr[i]) {
            max = arr[i];
            idx = i;
        }
    }

    int count = 0;

    for(int i=0;i<26;i++){
        if(max == arr[i]) count++;
    }
    
    if(count == 1){
        printf("%c\n", idx + 65);
    } else{
        printf("?");
    }
   

    return 0;
}