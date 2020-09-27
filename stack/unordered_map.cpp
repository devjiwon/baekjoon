#include <iostream>
#include <map>
#include <string>
 
using namespace std;
 
map<string, int> m;
 
int main()
{
    m.insert(make_pair<string, int>("apple", 10));
    m.insert(make_pair<string, int>("banana", 2));
    m.insert(make_pair<string, int>("lemon", 10));
    m.insert(make_pair<string, int>("melon", 5));
    m.insert(make_pair<string, int>("peach", 4));
    m.insert(make_pair<string, int>("orange", 13));
    m.insert(make_pair<string, int>("watermelon", 2));
    m.insert(make_pair<string, int>("pear", 4));
    m.insert(make_pair<string, int>("grape", 7));
    
    // update key with new value
    cout << "insert with the same key" << endl;
    auto iter = m.find("peach");
    if (iter != m.end())
    {
        m.erase("peach");
    }
 
    // not ordered
    cout << "iterator in map" << endl;\
    for(auto i=m.begin(); i!=m.end(); i++)
    {
        cout << i->first << ", " << i->second << endl; 
    }
}