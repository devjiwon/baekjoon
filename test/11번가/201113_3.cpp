#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> a;
    vector<int> b;
    vector<pair<int, float> > answer;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(0);

    b.push_back(2);
    b.push_back(3);
    b.push_back(6);\
    b.push_back(8);
    b.push_back(4);

    for(int i=0;i<a.size();i++){
        float temp = (float)a[i]/(float)b[i];
        bool flag = true;
        printf("%f\n", temp);
        for(int j=0;j<answer.size();j++){
            if(answer[j].second == temp) {
                answer[j].first++;
                flag = false;
                break;
            }
        }
        if(flag == true){
            answer.push_back(make_pair(1, temp));
        }
        
    }

    sort(answer.rbegin(), answer.rend());

    for(int i=0;i<a.size();i++){
        printf("%d\n", answer[i].first);
    }





    return answer[0].first;
}


// 실제 코드
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &X, vector<int> &Y) {
    vector<pair<int, float> > answer;

    for(int i=0;i<X.size();i++){
        float temp = (float)X[i]/(float)Y[i];
        bool flag = true;
        for(int j=0;j<answer.size();j++){
            if(answer[j].second == temp) {
                answer[j].first++;
                flag = false;
                break;
            }
        }
        if(flag == true){
            answer.push_back(make_pair(1, temp));
        }
        
    }

    sort(answer.rbegin(), answer.rend());

  return answer[0].first;
}

*/