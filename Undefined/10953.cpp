#include <iostream>

using namespace std;

int main(){
    int n, a, b;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d,%d", &a, &b);
        printf("%d\n", a+b);
    }

    return 0;
}

// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int n;
//     scanf("%d", &n);

//     for(int i=0;i<n;i++){
//         string s;
//         cin >> s;

//         int idx = s.find(',');

//         int a, b;

//         a = stoi(s);
//         string ss = s.substr(idx+1, s.size() - idx - 1);
//         b = stoi(ss);

//         printf("%d\n", a+b);
//     }

    

//     return 0;
// }
