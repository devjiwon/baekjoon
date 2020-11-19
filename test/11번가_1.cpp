#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string S;
    cin >> S;

    int idx = 0;
    int a_cnt = 0; // 연속된 a의 개수
    int answer = 0;

    if(S.find("aaa") != -1){
        printf("-1");
        return -1;
    }

    if(S  == "aa") {
        printf("0");
        return 0;
    }

    if(S.find("a") == -1){
        printf("%lu", 2*(S.size()+1));
        return 2*(S.size()+1);
    }

    if(S[0] == 'a' && S[1] != 'a') answer++;

    for(int i=0;i<S.size();i++){
        if(i == 0 && S[0] == 'a') continue;
        
        if(S[i] == 'a'){
            if(a_cnt == 0) answer++;
            a_cnt++;
        } else if(S[i] != 'a'){
            if(a_cnt == 1){
                answer++;
            } else if(a_cnt == 0){
                answer += 2;
            }

            if(i == S.size() - 1) break;

            a_cnt = 0;
        }
    }

    if(a_cnt == 2){

    } else if(a_cnt == 1){
        answer++;
    }
    
    if(S[0] != 'a') answer += 2;


    printf("%d\n",answer);    
    
    

}


 



//   if(i < S.size() - 1 && S.substr(i, i+2) == "aa"){
//             i++;
//         } else if(S.substr(i, i+1) == "a"){
//             answer++;
//         } else if(S.substr(i, i+1) != "a"){
//             if(i == S.size() - 1){
//                 answer += 2;
//                 S = S.substr(0, i+1) + "aa" + S.substr(i+1, S.size());
//             } else if(i < S.size() - 2 && S.substr(i+1, i+3) == "aa"){
//                 continue;
//             } else if(i < S.size() - 2 && S.substr(i+1, i+2) == "a" && S.substr(i+2, i+3) != "a"){
//                 answer++;
//                 S = S.substr(0, i+1) + "a" + S.substr(i+1, S.size());
//             } else if(i < S.size() - 1 && S.substr(i+1, i+2) != "a"){
//                 answer += 2;
//                 S = S.substr(0, i+1) + "aa" + S.substr(i+1, S.size());
//             }
//         }