class Solution {
public:
    bool rotateString(string s, string goal) {
        string res = "";
     
        for(int i = 0 ; i < s.length();i++){
            res = "";
            for(int j = 1 ; j< s.length();j++){
                    res+=s[j];
                
            }          
            res.push_back(s[0]);
            if(res == goal){
                return true;
            }
            s=res;
        
        } 
        return false;
    
    }
};