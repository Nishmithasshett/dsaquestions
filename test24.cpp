#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> elements = {1,2,3,4};
elements.push_back(5);
for(int element : elements){
    cout<<element<<"\n";
}
int size1 = elements.size();
elements.pop_back();
int size = elements.size();

cout<<"Initial Size:"<< size1<<"\n";
cout<<"Final Size:"<< size<<"\n";

for(int i = 0; i < size; i++)
{
    cout<<elements[i]<<"\n";
}

return 0;
}
