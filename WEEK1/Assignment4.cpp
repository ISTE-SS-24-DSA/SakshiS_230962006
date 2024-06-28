// DSA Assignment Question- Week 1- Q(4)

#include <iostream>
using namespace std;

int main()
{
    int n=1;
    int i,j;
    for (i=1;i<6;i++)
    {
        for (j=1;j<i+1;j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }
    return 0;
}
