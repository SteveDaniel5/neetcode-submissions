class Solution {
public:
    bool binarySearch(vector<int>ans, int target){
        int start = 0;
        int end = ans.size()-1;

        while(start<=end){
            int mid = start+(end-start)/2;
            if(ans[mid]==target){
                return true;
            }
            else if (target>ans[mid]){
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return false;

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size()-1;
      

      int start = 0;
      int end = rows;
   
      

      while(start<=end){
        int mid = start+(end-start)/2;
        if(target>=matrix[mid][0]&&target<=matrix[mid][matrix[mid].size()-1]){
            
            // vector<int>temp;
            // for(int i =0;i<matrix[mid].size();i++){
            //     temp.push_back(matrix[mid][i]);
            // }
            bool ans = binarySearch(matrix[mid],target);
                return ans;
           
        }
        
        else if (target>=matrix[mid][matrix[mid].size()-1]){
                
                start = mid+1;
        }
        else{
           
            end = mid-1;
        }
      }
        return false ; 

        
    }
};
