class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int , int >mp;

        for(int ch : s){
            mp[ch]++;
        }
 map<int , int >mp1;
        for(int ch : t){
            mp1[ch]++;
        }
 
 if (mp == mp1){
    return true ;
 }
    

  return false;
    }
};
