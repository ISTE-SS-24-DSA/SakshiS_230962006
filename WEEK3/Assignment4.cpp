// DSA Assignment Question- Week 3- Q(4)

class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
        vector <int> one_to_n;
        sort(arr.begin(),arr.end());
        for (int i=1;i<=n;i++)
            one_to_n.push_back(i);

        for (int i=0;i<n;i++)
        {
            if (arr[i]!=one_to_n[i])
                return (one_to_n[i]);
        }
        return n;
    }
};
