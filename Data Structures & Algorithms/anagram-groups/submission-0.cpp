class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto x : strs){
            string sortedx = x;
            sort(sortedx.begin(), sortedx.end());
            mp[sortedx].push_back(x);
        }
        vector<vector <string>> result;
        for(auto pair : mp){
            result.push_back(pair.second);
        }

        return result;
    }
};
