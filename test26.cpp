#include <iostream>
#include<list>
using namespace std;
int main() {
    list <int> mylist;
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);
    mylist.push_back(60);
    mylist.push_back(60);
    for(int i:mylist){
       cout<<i<<"\t";;
    }
    int n = mylist.size();
    cout<<"\n"<<"Size :"<<n<<"\n";
    mylist.unique();
    
    for(int i:mylist){
       cout<<i<<"\t";;
    }
    return 0;
}