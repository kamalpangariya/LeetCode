class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        string ans = "";
        int max = 0;
        char maxChar;
        for (int i = 0; i < mp.size(); ++i) {
            for (auto itr : mp) {
                if (itr.second > max) {
                    max = itr.second;
                    maxChar = itr.first;
                }
            }
            if (max == 0) break;
            while (max--) {
                ans += maxChar;
            }
            mp[maxChar] = 0;
        }
        return ans;
    }
};