class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int greedychild = 0;
        int cookie = 0;
        int count  = 0;
        int n = g.size();
        int m = s.size();
        while ( greedychild < n && cookie < m){
            if(g[greedychild] <= s[cookie]){
                count++;
                greedychild++;
                cookie++;
            }
            else if(g[greedychild]>s[cookie]){
                cookie++;
            }
            else{
                greedychild++;
            }
        }
        return count;
    }
};