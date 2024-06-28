// DSA Assignment Question- Week 2- Q(3)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <string> keys;
    vector <int> arr;
    unordered_map <string,int> m;
    int n,flag=-1,i;
    string S;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements (keys): ";
    for (int i=0;i<n;i++)
    {
        string str;
        cin >> str;
        keys.push_back(str);
    }
    cout << "Enter an array (values): ";
    for (i=0;i<n;i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    cout << "Enter a key to find: ";
    cin >> S;

    for (i=0;i<n;i++)
        m[keys[i]]=arr[i];

    auto it= m.find(S);
    if (it==m.end())
        cout << "-1";
    else
        cout << "Value of the entered key: " << (*it).second;
    return 0;
}
