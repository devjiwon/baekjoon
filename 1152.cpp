#include <iostream>
#include <string.h>

using namespace std;

int main(){
    // char s[100000] = { '\0' };
    string s;
    getline(cin, s);

    int count = 0;

    if(s[0] == ' ' && s.size() == 1) {
        printf("0");
        return 0;
    }

    for(int i=0;i<s.size();i++){
        if(s[i] == ' ' && i != 0 && i != s.size()-1) {
            count++;
        }
    }

    printf("%d", count+1);

    return 0;
}