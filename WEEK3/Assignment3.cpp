// DSA Assignment Question- Week 3- Q(3)

class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        vector <int> index;
        vector <int> output;
        int n=arr.size();
        int one_index=1;
        for (auto it=arr.begin();it!=arr.end();it++)
        {
            index.push_back(one_index);
            one_index++;
        }
        for (int i=0;i<n;i++)
        {
            if (arr[i]==index[i])
                output.push_back(arr[i]);
        }
        return output;
    }
};
