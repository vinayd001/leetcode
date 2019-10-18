class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int len = nums.size();
        int mid, start=0, end=len;
        while(1) {
            mid=(start+end)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target) {
                if((mid+1)==len || nums[mid+1]>target)
                    return  mid+1; 
                start = mid+1;
            } else if(nums[mid]>target){
                if((mid-1)<0)
                    return 0;
                else if(nums[mid-1]<target)
                    return  mid;
                end = mid-1;
            }
        }
    }
};