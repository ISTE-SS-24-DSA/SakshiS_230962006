// DSA Assignment Question- Week 1- Q(3)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,i,flag=1;
    cout << "Enter a number: ";
    cin >> num;
    for (i=2;i<sqrt(num);i++)
    {
        if (num%i==0)
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
        cout << "Given number is a Prime number." << endl;
    else
        cout << "Given number is a Composite number." << endl;
    return 0;
}
