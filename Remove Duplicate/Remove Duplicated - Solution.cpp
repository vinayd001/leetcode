class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int temp=0, count=0;
        
        for(int i=0; i<nums.size(); i++) {
            if(val==nums[i]) {
                if(count==0)
                    temp=i;
                count++;
            } else if(count) {
                nums[temp]=nums[i];
                temp++;
            }
        }
        
        return nums.size()-count;
        
    }
};