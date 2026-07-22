class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        while(left < right){
           char singledigitofleft = tolower(s[left]);
           char singledigitofright = tolower(s[right]);
           if(singledigitofleft == singledigitofright){
            left++;
            right--;

           }
           else if(!isalnum(s[left])){
            left++;

           }
           else if(!isalnum(s[right])) {
            right--;
           }
           else{
            return false;
           }
        }
        return true;
            }
};