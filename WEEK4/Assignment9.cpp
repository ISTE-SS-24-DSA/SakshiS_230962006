// DSA Assignment Question- Week 4- Q(9)

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> sumMap;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int complement = target - nums[i];
        if (sumMap.find(complement)!=sumMap.end())
            return {sumMap[complement], i};
        sumMap[nums[i]] = i;
    }

    return {};
}

