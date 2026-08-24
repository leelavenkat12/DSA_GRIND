
/*class Solution {
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
*/
class Solution {
public:

    bool isRepeated(string &s, char ch, int index) {
    for(int i = 0; i < s.length(); i++) {
        if(i != index && s[i] == ch) {
            return true;
        }
    }

    return false;
}
    int firstUniqChar(string s) {
        for(int i = 0 ; i < s.size() ; i++){
            if(!isRepeated(s,s[i],i)){
                return i ;
            }
        }
        return -1;
    }
};

