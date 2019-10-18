class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size(), max=nums[0];
        for(int i=0; i<len; i++) {
            int sum=0;
            for(int j=i; j<len; j++) {
                sum+=nums[j];
                if(sum>max)
                    max=sum;
            }
        }
        return max;
    }
};