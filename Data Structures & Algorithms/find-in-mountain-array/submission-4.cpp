/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int getPeak(MountainArray arr){
        int currele= -1;

        int start =0;
        int end = arr.length()-1;
        while(start<end){
            int mid = start + (end-start)/2;
            currele = arr.get(mid);
            if(currele<arr.get(mid+1)){
                start = mid+1;
            }
              else {
                end = mid;
            }
        }
        return start;

    }
    int BS1(MountainArray arr , int peak , int target){
        int start =0;
        int end = peak;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr.get(mid)==target){
                return mid;
            }
            else if (target<arr.get(mid)){
                end = mid-1;
                }
                else {
                    start = mid+1;
                }
        }
        return -1;
    }
    int BS2(MountainArray arr , int peak , int target){
        int start=peak;
        int end = arr.length()-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr.get(mid)==target){
                return mid;
            }
            else if (target<arr.get(mid)){
                start = mid+1;
                }
                else {
                    end = mid-1;
                }
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {

        int peakidx = getPeak(mountainArr);
        if(target==mountainArr.get(peakidx)){
            return peakidx;
        }
        cout<<"Peak value index is "<<peakidx<<endl;
        cout<<"Pivot value is " <<mountainArr.get(peakidx);
        int idx = BS1(mountainArr,peakidx,target);
        if(idx!=-1){
        return idx;
        }
        else{
        int idx2 = BS2(mountainArr,peakidx,target);
        return idx2;
    }
        
    

        
    }
};