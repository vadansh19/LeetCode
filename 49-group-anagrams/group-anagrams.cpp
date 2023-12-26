class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        for (int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if (m.find(temp) != m.end()) {
                m[temp].push_back(strs[i]);
            } else {
                vector<string> words;
                words.push_back(strs[i]);
                m[temp] = words;
            }
        }

        vector<vector<string>> result;

        for (auto i : m) 
        result.push_back(i.second);
       
       return result;
    }
};