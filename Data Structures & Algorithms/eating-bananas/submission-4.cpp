class Solution {
    public:
    int PosValidAns(vector<int>& piles, int k){
        float ans=0;
        int ans1=0;
        for(int i=0;i<piles.size();i++){
           ans = (piles[i]+k-1)/k;
           ans1+=ans;

        }
        return ans1;

    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high;
        auto it = std::max_element(piles.begin(), piles.end());
        high = *it;
        int posans=0;

        while(low<=high){
            int mid = low + (high - low) / 2;
            int check = PosValidAns(piles,mid);
            if(check<=h){
                //we have a answer save it 
                posans = mid;
                high = mid-1;

            }
            else{
                low = mid+1;

            }
        }
        return posans;



        
    }
};
