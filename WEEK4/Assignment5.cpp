// DSA Assignment Question- Week 4- Q(5)

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums)
{
        int i=0;
        for(int j = 1; j < nums.size(); j++){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
}

int main()
{
    vector <int> arr={0,0,1,1,1,2,2,3,3,4};
    int k=removeDuplicates(arr);
    cout << "k value: " << k << endl;
    for (int i=0;i<k;i++)
        cout << arr[i] << " ";
    return 0;
}
