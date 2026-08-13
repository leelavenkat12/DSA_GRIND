class Solution {
public:
    string frequencySort(string s) {
    // first store in map ;
    unordered_map<char,int>map1;
    for(int i = 0 ; i < s.length();i++){
        map1[s[i]]++;
    }
    // create a pair vector to store map elemtns into vector
    vector<pair<char,int>>v;
    for(auto x : map1){
        v.push_back({x.first,x.second});
    }
    //  next i am sorting and writing as compartor
    sort(v.begin(),v.end(),[](pair<char,int>a,pair<char,int>b){
        return a.second > b.second;
    });
    string res = "";
    for(auto x : v){
        for(int i = 0 ; i < x .second ; i++){
       res.push_back(x.first);
    }
    }
    return res;
    }
};