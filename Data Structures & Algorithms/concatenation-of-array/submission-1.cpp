class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums);
        copy(nums.begin(), nums.end(), back_inserter(ans));
        return ans;

        
    }
};