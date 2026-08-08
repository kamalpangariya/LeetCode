class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans, rows;
        rows = {"qwertyuiop","asdfghjkl","zxcvbnm"};
        for(string word: words){
            string find ="";
            char firstChar = tolower(word[0]);
            for(string row: rows){
                if(row.find(firstChar) != -1){
                    find=row;
                    break;
                }
            }
            bool y=true;
            for(char ch: word){
                if(find.find(tolower(ch))==-1){
                    y=false;
                }
            }
            if(y){
                ans.push_back(word);
            }
        }
        return ans;
    }
};