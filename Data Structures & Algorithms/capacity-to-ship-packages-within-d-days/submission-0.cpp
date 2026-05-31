class Solution {
public:
    bool checkShipment(vector<int>& weights, int days, int mid){
        int currweight = 0;
        int currdays=1;
            for(int j =0;j<weights.size();j++){
                currweight+=weights[j];
                if(currweight>mid){
                    currweight = weights[j];
                    currdays++;

                }
            }
            if(currdays<=days){
                return true;
            }

            else{
                return false;
            }
        }
        
    
    int shipWithinDays(vector<int>& weights, int days) {

        int max=std::accumulate(weights.begin(), weights.end(), 0);;
        auto it = std::max_element(weights.begin(), weights.end());
        int low = *it;
        int possibleans = 0 ;

        while(low<=max)
        {
            int mid = low+(max-low)/2;
            bool ans = checkShipment(weights,days,mid);
            if(ans){
                possibleans=mid;
                max = mid-1;
            }
               
            else{
                 low = mid+1;
            }
            
        }
        return possibleans;

    }
};
    
