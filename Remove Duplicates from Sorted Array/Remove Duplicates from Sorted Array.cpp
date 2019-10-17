class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int temp=nums[0], count=1, tempIndex=0;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]!=temp) {
                count++;
                nums[tempIndex+1]=nums[i];
                temp=nums[i];
                tempIndex++;
            }
        }
        return count;
    }
};