#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, a;
    scanf("%d", &n);
    priority_queue<int, vector<int>, greater<int> > pqMax; // 오름차순 // 큰 수들을 저장
    priority_queue<int> pqMin; // 내림차순 // 작은 수 들을 저장
    
    for(int i=0;i<n;i++){
        scanf("%d", &a);

        if(pqMin.size() > pqMax.size()){
            pqMax.push(a);
        } else{
            pqMin.push(a);
        }

        if(!pqMin.empty() && !pqMax.empty() && pqMin.top() > pqMax.top()){
            int temp = pqMin.top();
			pqMin.pop();
			pqMin.push(pqMax.top());
			pqMax.pop();
			pqMax.push(temp);
        }

        printf("%d\n", pqMin.top());

    }

    return 0;
}




// #include <iostream>
// #include <queue>

// using namespace std;

// int main(){
//     int n, a;
//     scanf("%d", &n);
//     priority_queue<int, vector<int>, greater<int> > pqMax; // 오름차순 // 큰 수들을 저장
//     priority_queue<int> pqMin; // 내림차순 // 작은 수 들을 저장
    
//     for(int i=0;i<n;i++){
//         scanf("%d", &a);

//         if(pqMin.empty() || pqMin.top() >= a){
//             pqMin.push(a);

//             if(pqMin.size() > pqMax.size() + 1){
//                 pqMax.push(pqMin.top());
//                 pqMin.pop();
//             }
//         } else if(pqMax.empty() || pqMax.top() <= a){
//             pqMax.push(a);

//             if(pqMax.size() > pqMin.size()){
//                 pqMin.push(pqMax.top());
//                 pqMax.pop();
//             }
//         } else if(pqMin.size() <= pqMax.size()){
//             pqMin.push(a);
//         } else{
//             pqMax.push(a);
//         }

//         printf("%d\n", pqMin.top());

//     }

//     return 0;
// }





// #include <iostream>
// #include <queue>
// #include <cmath>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main(){
//     int n;
//     scanf("%d", &n);
//     // priority_queue<int, vector<int>, greater<int> > q;
//     vector<int> v;

//     for(int i=0;i<n;i++){
//         int a;
//         scanf("%d", &a);

//         v.push_back(a);

//         sort(v.begin(), v.end());

//         if(v.size() == 1){
//             printf("%d\n", v[0]);
//         } else{
//             printf("%d\n", v[ceil(double(v.size()/2.0))-1]);
//         }
//     }

//     return 0;
// }