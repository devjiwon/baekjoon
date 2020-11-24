#include <iostream>

using namespace std;

int main(){
    int a, b, c, stud;
    scanf("%d %d %d %d", &a, &b, &c, &stud);

    for(int i=0;i<=stud/a;i++){
        int a_stu = i * a;
        for(int j=0;j<=stud/b;j++){
            int b_stu = j * b;
            for(int k=0;k<=stud/c;k++){
                if(a_stu + b_stu + k*c == stud){
                    printf("1");
                    return 0;
                }
            }
        }
    }

    printf("0");

    return 0;
}