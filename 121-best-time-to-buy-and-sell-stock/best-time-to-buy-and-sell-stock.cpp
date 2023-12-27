class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0, sell =0, curr =0, ma = INT_MIN, mi = INT_MAX;
        vector<int> l;
        vector<int> r;
        for(int i =0;i < prices.size();i++)
        {
            mi = min(mi,prices[i]);
            l.push_back(mi);
        }
                for(int i =prices.size()-1;i >=0;i--)
        {
            ma = max(ma,prices[i]);
            r.push_back(ma);
        }
        reverse(r.begin(),r.end());
        ma = INT_MIN;
                for(int i =0;i < prices.size();i++)
        {
            int temp = (r[i]-l[i]);
            ma = max(ma, temp);
        }
        return ma;
    }
};