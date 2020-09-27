#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char s[51][51];
vector<int> v;

int calChess(int x, int y){

    int count = 0;
    for(int i=y;i<y+8;i++){
        for(int j=x;j<x+8;j++){
            if((i+1) % 2 != 0 && (j+1) % 2 != 0){ //홀수
                if(s[i][j] == 'B'){
                    count++;
                }
            } else if((i+1) % 2 == 0 && (j+1) % 2 == 0){ //짝수
                if(s[i][j] == 'B'){
                    count++;
                }
            } else{
                if(s[i][j] == 'W'){
                    count++;
                }
            }
        }
    }
    v.push_back(count);

    count = 0;
    for(int i=y;i<y+8;i++){
        for(int j=x;j<x+8;j++){
            if((i+1) % 2 != 0 && (j+1) % 2 != 0){ //홀수
                if(s[i][j] == 'W'){
                    count++;
                } 
            } else if((i+1) % 2 == 0 && (j+1) % 2 == 0){
                if(s[i][j] == 'W'){
                    count++;
                }
            } else{
                if(s[i][j] == 'B'){
                    count++;
                }
            }
        }
    }
    v.push_back(count);

    return 0;

}

int main(){

    int w, h; // 가로 세로
    scanf("%d %d", &h, &w);

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> s[i][j];
        }
    }


    for(int i=0;i<=w-8;i++){
        for(int j=0;j<=h-8;j++){
            calChess(i, j);
        }
    }

    sort(v.begin(), v.end());

    printf("%d\n", v[0]);

    return 0;
}