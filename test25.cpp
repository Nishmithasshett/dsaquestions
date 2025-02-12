
#include <iostream>
#include<list>
using namespace std;
int main() {
    list <int> mylist;
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);
    mylist.push_back(50);
    mylist.push_back(60);
    for(int i:mylist){
       cout<<i<<"\n";
    }
    mylist.pop_back();
    mylist.pop_front();
    cout<<"After popping:\n";
    for(int i:mylist){
       cout<<i<<"\n";
    }
    auto it = mylist.begin();
    advance(it,1);
    mylist.insert(it,15);
    cout<<"After inserting\n";
    for(int i:mylist){
       cout<<i<<"\n";
    }
    return 0;
}