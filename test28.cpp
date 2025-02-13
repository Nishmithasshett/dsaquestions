#include<iostream>
#include<stack>
#include<string>
using namespace std;
string reverse_string(string str)
{ 
  stack <char> s;
  for(char ch :str){
    s.push(ch);
  }
  string reversed = "";
  while(!s.empty()){
    reversed = reversed + s.top();
    s.pop();
   }
   return reversed;
}
int main() {
    string str = "Hello"; 
    string reversed = reverse_string(str); 
    cout << "Reversed string: " << reversed << "\n";
    return 0; 
}