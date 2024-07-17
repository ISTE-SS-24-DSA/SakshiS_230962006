// DSA Assignment Question- Week 4- Q(6)

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k)
{
        int n=nums.size();
        k=k % n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
}

int main()
{
    vector <int> arr={1,2,3,4,5,6,7};
    int n=arr.size();
    int k;
    cin >> k;
    rotate(arr,k);
    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    return 0;
}

