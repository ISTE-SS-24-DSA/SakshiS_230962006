// DSA Assignment Question- Week 4- Q(8)

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums)
{
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int xorr=0;
    for (int i=0;i<n;i++)
        xorr=xorr^nums[i];
    return xorr;
}

int main()
{
    vector <int> arr={4,1,2,1,2};
    int n=arr.size();
    cout << singleNumber(arr);
    return 0;
}
