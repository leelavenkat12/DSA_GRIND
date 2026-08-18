class Solution {
public:
    int beautySum(string s) {
    int ans = 0;
    for(int i = 0 ; i < s.size() ; i++){
        unordered_map<char,int>map1;
        for(int j = i ; j < s.size();j++){
            int maxi = INT_MIN;
            int mini = INT_MAX;
            map1[s[j]]++;
            for(auto it : map1){
                maxi = max(maxi,it.second);
                mini = min(mini,it.second);
            }

        ans +=maxi-mini;
        }
    }
    return ans;

    }
};