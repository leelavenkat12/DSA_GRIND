class Solution {
public:
    string removeOuterParentheses(string s) {
         string res="";
         int depth = 0;
         for(char ch : s){
            if(ch == '('){
                if(depth > 0 ){
                    res += '(';
                }
                depth++;
            }
            if(ch == ')'){
                depth--;
                if(depth > 0){
                    res +=')';
                }
            }
         } 
         return res;
    }
};