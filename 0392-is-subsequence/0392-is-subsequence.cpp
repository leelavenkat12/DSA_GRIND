class Solution {
public:
    bool isSubsequence(string s, string t) {
        int writer = 0;
        int reader = 0;
        while( writer < s.size() && reader < t.size()){
            if(s[writer] == t[reader]){
                reader++;
                writer++;
            }
            else{
                reader++;
            }
            

        }
        if (writer == s.length()){
            return true;
        }
       return   false;
    }
};