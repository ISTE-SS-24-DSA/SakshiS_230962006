// DSA Assignment Question- Week 3- Q(1)

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool check(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        if (arr1==arr2)
            return true;
        else
            return false;
    }
};
