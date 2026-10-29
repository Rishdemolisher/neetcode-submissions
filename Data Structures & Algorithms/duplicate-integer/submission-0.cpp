class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        /*
        input:array
        output:true or false
        observation:if val appears more than once
        */
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
            {
                return true;
            }
            }
        }
        return false;
    }
};