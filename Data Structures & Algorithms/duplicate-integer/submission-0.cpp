class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int , int > mp;

        for(int ch: nums){
            mp[ch]++;
        }

        for(auto it : mp){
            if(it.second >= 2)
            return true;
        }

        return false;
    }
};