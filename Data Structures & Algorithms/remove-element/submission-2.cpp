class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int reader=0;
        int writer=0;
        while(reader<nums.size()){
            if(nums[reader]==val){
                reader++;
            }
            else{
                nums[writer]=nums[reader];
                reader++;
                writer++;
            }
        }
        return writer;
        
    }
};