class Solution {
public:
    int maxArea(vector<int>& heights) {
        int first =0;
        int last = heights.size()-1;
        int volume=0;
        
        while (first<last){
            int breadth = last-first;
            int length = min(heights[first],heights[last]);
            int temp = length * breadth;
            if(temp>volume){
                volume=temp;
            }
            if(heights[first]<heights[last]){
                first++;
            }
            else{
                last--;
            }
           
        }
        return volume;
        
    }
};
