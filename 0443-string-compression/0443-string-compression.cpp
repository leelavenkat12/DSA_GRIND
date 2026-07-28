class Solution {
public:
    int compress(vector<char>& chars) {
        int reader = 0;
        int start = 0;
        int writer = 0;
        int count = 0;
        int n=chars.size();

        while(reader<n){
            start = reader;

            while(reader<n && chars[start]==chars[reader]){
                reader++;
            }
            count  = reader - start;
            chars[writer] = chars[start];
            writer++;
            if(count > 1){
                string num = to_string(count);
                 for (char ch : num){
                     chars[writer] = ch; 
                     writer++;
                      }
                  }
            }
        
        return writer;
    }
};