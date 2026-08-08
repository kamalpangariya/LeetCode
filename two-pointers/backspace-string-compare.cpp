class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int ptr1 = 0;
        int ptr2 = 0;
        int ptr3 = 0;
        int ptr4 = 0;

        while(ptr2 < s.length()) {
            if(s[ptr2] == '#'){
                ptr1--;
                if(ptr1 < 0){
                    ptr1 = 0;
                }
            } else {
                s[ptr1] = s[ptr2];
                ptr1++;
            }
            ptr2++;
        }

        while(ptr4 < t.length()) {
            if(t[ptr4] == '#'){
                ptr3--;
                if(ptr3 < 0){
                    ptr3 = 0;
                }
            } else {
                t[ptr3] = t[ptr4];
                ptr3++;
            }
            ptr4++;
        }

        string ns = s.substr(0, ptr1);
        string nt = t.substr(0, ptr3);

        return ns == nt;
    }
};