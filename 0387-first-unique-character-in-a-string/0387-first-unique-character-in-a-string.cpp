class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map1;
        for(int i = 0 ; i < s.size() ;i++){
            map1[s[i]]++;
        }
        for(int i = 0 ; i < s.size();i++){
            if(map1[s[i]]==1){
                return i ;
                break;
            }
        }
        return -1;
    }
};