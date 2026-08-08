class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> stk;
        int index = -1;
        for (int i = 0; i < word.length(); i++) {
            stk.push(word[i]);
            if (word[i] == ch) {
                index = i;
                break;
            }
        }
        if (index == -1)
            return word;
        for (int i = 0; i <= index; i++) {
            word[i] = stk.top();
            stk.pop();
        }
        return word;
    }
};