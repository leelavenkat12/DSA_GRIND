class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> map1;

        for(int i = 0; i < magazine.size(); i++) {
            map1[magazine[i]]++;
        }
        for(int i = 0; i < ransomNote.size(); i++) {
            if(map1.find(ransomNote[i]) != map1.end() &&
               map1[ransomNote[i]] > 0) {
                map1[ransomNote[i]]--;
            }
            else {
                return false;
            }
        }
        return true;
    }
};