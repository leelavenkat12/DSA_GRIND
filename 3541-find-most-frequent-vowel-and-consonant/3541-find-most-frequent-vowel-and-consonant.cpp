class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> vowelmap;
        unordered_map<char,int> consonantsmap;
        int vowels = 0;
        int consonants = 0;
        for(char ch : s){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowelmap[ch]++;
            }
        }
        for(char ch : s){
            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
                consonantsmap[ch]++;
            }
        }
        for(auto it : vowelmap){
            vowels = max(vowels, it.second);
        }

        for(auto it : consonantsmap){
            consonants = max(consonants, it.second);
        }

        return vowels + consonants;
    }
};