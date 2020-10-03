#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int input;
    vector<int> an;
    int result = 0;

    scanf("%d", &input);
    while(input != 0){
        an.push_back(input%10);
        input = input/10;
    }

    sort(an.rbegin(), an.rend());

    for(int i=0;i<an.size();i++){
        result = result*10 + an[i];
    }

    printf("%d\n", result);

    
    return 0;
}