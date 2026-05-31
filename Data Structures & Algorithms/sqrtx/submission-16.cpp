class Solution {
public:
    int mySqrt(int x) {
        long int low = 1;
        long int high= x/2;
        long int ans =0;
        if(x ==1 || x==2||x==3||x==0){
            return x;
        }
        while(low<=high){
            long int mid = low+(high-low)/2;
            long int res = mid*mid;
            ans = mid;
            if(res==x){
                return mid;
            }
            else if(res>x){
                high = mid-1;

            }
            else{
                low = mid+1;
                
            }
            
        }
        if(ans*ans < x)
        {
            return ans;
        }
        return ans-1;
        
    }
};