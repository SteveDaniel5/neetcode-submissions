class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        std::sort(people.begin(),people.end());
        int left =0;
        int right = people.size()-1;
        int boats=0;

        while(left<=right){
            int currweight = people[left]+people[right];
            if(currweight==limit){
                boats++;
                right--;
                left++;
            }
            else{
                //current weight is exceeding limit 
                if(currweight>limit){
                    right--;
                    boats++;
                }
                else if(currweight<limit){
                    left++;
                    boats++;
                    right--;
                }
                //[1,2,4,5]

            }
        }
        return boats;
    }
};