// DSA Assignment Question- Week 1- Q(5)

#include <iostream>
using namespace std;

int main()
{
    int i,rows=5,j,k,n_stars=1;
    int spaces=rows;
    for (i=1;i<=rows;i++)
    {
        for (j=1;j<spaces;j++) //spaces
            cout << " ";
        for (k=1;k<=n_stars;k++)  //stars
            cout << "*" ;
        n_stars=n_stars+2;
        spaces--;
        cout << endl;
    }
    return 0;
}
