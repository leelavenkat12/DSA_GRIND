class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> map1;
        unordered_map<string, char> map2;

        int j = 0;

        for (int i = 0; i < pattern.size(); i++) {

            // Skip spaces
            while (j < s.size() && s[j] == ' ') {
                j++;
            }

            // No word available for this pattern character
            if (j >= s.size()) {
                return false;
            }

            // Extract word
            string word = "";

            while (j < s.size() && s[j] != ' ') {
                word += s[j];
                j++;
            }

            // Check both directions
            if (map1.find(pattern[i]) == map1.end() &&
                map2.find(word) == map2.end()) {

                map1[pattern[i]] = word;
                map2[word] = pattern[i];
            }
            else {

                if (map1[pattern[i]] != word ||
                    map2[word] != pattern[i]) {

                    return false;
                }
            }
        }

        // Check if extra words are remaining
        while (j < s.size() && s[j] == ' ') {
            j++;
        }

        if (j < s.size()) {
            return false;
        }

        return true;
    }
};