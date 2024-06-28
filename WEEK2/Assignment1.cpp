// DSA Assignment Question- Week 2- Q(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ele,x;
    set <int> st;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i=0;i<n;i++)
    {
        cin >> ele;
        st.insert(ele);
    }
    cout << "Elements of Set:  ";
    for (auto it=st.begin(); it!=st.end(); ++it)
        cout << (*it) << " ";
    cout << endl;
    cout << "Enter an element to find: ";
    cin >> x;
    auto it=st.find(x);
    if (it!=st.end())
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}
