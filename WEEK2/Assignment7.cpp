// DSA Assignment Question- Week 2- Q(7)

#include <bits/stdc++.h>
using namespace std;

int is_palin(int i,int n,string str)
{
    if (i>=n/2)
        return true;
    if (str[i]!=str[n-i-1])
        return false;
    return is_palin(i+1,n,str);
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin,str);
    int n=str.size();
    if (is_palin(0,n,str)==1)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
