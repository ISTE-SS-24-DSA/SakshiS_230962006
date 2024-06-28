// DSA Assignment Question- Week 2- Q(2)

#include <bits/stdc++.h>
using namespace std;

void frequencyCount(vector <int> &arr,int N, int P)
{
    vector <int> freq;
    for (int i=1;i<=N;i++)
    {
        int cnt=0;
        for (int x=0;x<arr.size();x++)
        {
            if (arr[x]==i)
                cnt++;
        }
        freq.push_back(cnt);
    }
    arr=freq;
    for (auto it=freq.begin();it!=freq.end();++it)
        cout << (*it) << " ";
}

int main()
{
    vector <int> arr;
    int N,P;
    cout << "Enter number of integers: ";
    cin >> N;
    cout << "Enter upper limit (P) of integers: ";
    cin >> P;
    cout << "Enter the integers between (1 to P): ";
    for (int i=0;i<N;i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    frequencyCount(arr,N,P);
    return 0;
}
