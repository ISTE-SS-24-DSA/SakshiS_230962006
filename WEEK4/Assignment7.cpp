// DSA Assignment Question- Week 4- Q(7)

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums)
{
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int sum=(n*(n+1))/2;
    int s2=0;
    for (int i=0;i<n;i++)
        s2+=nums[i];
    int missingNum=sum-s2;
    return missingNum;
}

int main()
{
    vector <int> arr={9,6,4,2,3,5,7,0,1};
    int n=arr.size();
    cout << missingNumber(arr);
    return 0;
}
