class Solution {
public:
int getpivot(vector<int>nums){
    int left = 0;
    int right = nums.size()-1;
    int mid =0;
    while(left<right){
         mid = (right+left)/2;
        cout<<"Mid: "<<mid<<endl;

        if(nums[mid]>=nums[0]){       //[3,4,5,6,1,2]
            left = mid+1;
        }
        else{
            right = mid;
        }
    }
    return right;
}
int binarySearch(vector<int>nums,int target,int start,int end){
    int left = start;
    int right = end;
      // if(right==-1){right = 0;}
    while(left<=right){
        int mid = left+(right-left)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            left = mid+1;
        }                   //[3,4,5,6,1,2]
        else{
            right = mid-1;
        }
    }
    return -1;

}
    int search(vector<int>& nums, int target) {
        int pivot = getpivot(nums);
         cout<<"Pivot: "<<pivot<<endl;
        if(nums[0]<=nums[nums.size()-1]){return binarySearch(nums,target,0,nums.size()-1);}
        
       
        int ans = -1;
        if(nums[pivot-1]>=target && target>=nums[0]){
            ans = binarySearch(nums,target,0,pivot-1);
        }
        else{
            ans = binarySearch(nums,target,pivot,nums.size()-1);
        }
        return ans;
    }
};
