#include <iostream>
#include <queue>

using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int> > q;

    q.push(20);
    q.push(1);
    q.push(6);
    q.push(4);
    q.push(10);

    while(!q.empty()){
        cout << q.top() << endl;
        q.pop(); 
    }

    return 0;
}