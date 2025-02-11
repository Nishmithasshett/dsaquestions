#include <iostream>
using namespace std;
int reverse(int n,int rev=0)
{
    if(n==0)
    {
        return rev;
    }
    else
    {
        return reverse(n/10,rev*10+n%10);
    }
}
bool palindrome(int n)
{
    if(n<0)
    {
        return false;
    }
    return (n==reverse(n));
}
int main() {
    // Write C++ code here
    int n;
    std::cout << "Enter the number\n";
    std::cin >> n;
    if(palindrome(n))
    {
        std::cout << "Palindrome\n";
    }
   else
    {
        std::cout << "Not palindrome\n";
    }

    return 0;
}