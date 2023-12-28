class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int closer = 0;
        int mi = INT_MAX;

        for (int i = 0; i < nums.size() - 2; i++) {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == target) {
                    return sum;
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }

                int dif = abs(target - sum);
                if(dif<mi)
                {
                    mi = dif;
                    closer = sum;
                }
            }
        }
        return closer;
    }
};