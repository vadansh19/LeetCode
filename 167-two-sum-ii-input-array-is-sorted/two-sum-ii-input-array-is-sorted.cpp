class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> map;
        for(int i = 0; i< numbers.size(); i++)
        {
            if(map.find(target-numbers[i]) == map.end())
            {
                map[numbers[i]] = i;
            }
            else
            {
                return {map[target-numbers[i]]+1,i+1};
            }

        }
        return {-1,-1};
    }
};