// DSA Assignment Question- Week 1- Q(7)

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

    cout << "Sorted Vector: ";
    sort(v.begin(),v.end());
    for (i=0;i<n;i++)       //Printing sorted vector
        cout << v[i] << " ";
    cout << endl;

    cout << "Reversed vector: ";
    sort( v.begin(),v.end(),greater<int>() );
    for (i=0;i<n;i++)       //Printing reverse vector
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
