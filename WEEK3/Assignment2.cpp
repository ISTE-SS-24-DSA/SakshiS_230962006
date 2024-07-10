// DSA Assignment Question- Week 3- Q(2)

class Solution {
public:
    int getPairsCount(const vector<int>& arr, int k) {
        unordered_map<int, int> freq;
        int pairs = 0;

        for (int i = 0; i < arr.size(); ++i) {
            int complement = k - arr[i];
            if (freq.find(complement) != freq.end()) {
                pairs += freq[complement];
            }
            freq[arr[i]]++;
        }

        return pairs;
    }
};
