class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int k=0;
        vector<int>nums2;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i] != val){ 
                nums2.push_back(nums[i]);
                k++;
                }


        }
        nums = nums2;
       return k;
    }
};