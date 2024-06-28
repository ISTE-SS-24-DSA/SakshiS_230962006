// DSA Assignment Question- Week 1- Q(2)

#include <iostream>
using namespace std;

int main()
{
    int num, rem, rev=0;
    cout << "Enter a number: ";
    cin >> num;
    while (num!=0)
    {
        rem=num%10;
        rev=(rev*10)+ rem;
        num=num/10;
    }
    cout << "Reversed number: " << rev << endl;
    return 0;
}
