class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int first = 0;int last = numbers.size()-1;
        vector<int>ans;

        while (first<last){
            
            if(numbers[first]+numbers[last]<target){
                first++;
            }
            if (numbers[first]+numbers[last]>target){
                last--;
            }
            if(numbers[first]+numbers[last]==target){
                first++;
                last++;
                ans.push_back(first);
                ans.push_back(last);
                return ans;
            }
        }
        return ans;
        
    }
};
