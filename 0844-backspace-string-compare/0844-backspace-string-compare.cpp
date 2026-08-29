class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string word1 = "";
string word2 = "";

for(int i = 0; i < s.size(); i++) {
    if(s[i] != '#') {
        word1 += s[i];
    }
    else if(!word1.empty()) {
        word1.pop_back();
    }
}

for(int i = 0; i < t.size(); i++) {
    if(t[i] != '#') {
        word2 += t[i];
    }
    else if(!word2.empty()) {
        word2.pop_back();
    }
}

return word1 == word2;
    }
};