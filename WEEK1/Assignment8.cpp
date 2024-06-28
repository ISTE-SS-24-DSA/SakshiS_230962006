// DSA Assignment Question- Week 1- Q(8)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int n,i,ele;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements:";
    for (i=0;i<n;i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    cout << "Vector Elements: ";
    vector <int> :: iterator it;
    for (it=v.begin(); it!=v.end(); it++)
        cout << (*it) << " ";
    cout << endl;

    vector <int> :: reverse_iterator rit;
    cout << "Reversed Order: ";
    for (rit=v.rbegin(); rit!=v.rend(); rit++)
        cout << (*rit) << " ";
    cout << endl;

    return 0;
}
