class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false); 
        std::cin.tie(NULL); 

        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                return true;
            }
           
        }
         return false;
    }
};