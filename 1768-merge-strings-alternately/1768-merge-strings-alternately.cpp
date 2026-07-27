class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int writer = 0;
        int reader = 0;
        string res = "";
        while(writer < word1.size() && reader < word2.size()){
            res+=word1[writer];
            res+=word2[reader];

            writer++;
            reader++;

        }
         while(writer < word1.size()){
            res+=word1[writer];
            writer++;
         }
         while( reader < word2.size()){
             res+=word2[reader];
             reader++;
         }
return res;
    }
};