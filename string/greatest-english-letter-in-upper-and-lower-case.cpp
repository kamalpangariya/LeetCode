class Solution {
public:
    string greatestLetter(string s) {
        set<char> st;
        for(auto it: s) st.insert(it);
        string ans = "";
        for(char ch = 'Z'; ch>='A'; ch--){
            if( st.find(ch) != st.end() && st.find(ch-'A'+'a')!= st.end() ){
                ans.push_back(ch);
                break;
            }
        }
        return ans;
    }
};