#include <iostream>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int a;
        scanf("%d", &a);
        char arr[100] = {0, };
        scanf("%s", arr);

        string s;
        for(int i=0;i<100;i++){
            if(arr[i] == 0) break;

            for(int j=0;j<a;j++){
                s += arr[i];
            }
        }
        cout << s << endl;
    }

    return 0;
}