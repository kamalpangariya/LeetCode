class Solution {
public:
    bool isPalindrome(string s) {
          
        string str(""); //create empty string to be treated like vector of characters
            
        if(s.size() == 0 || s.size() == 1)
        {
            return true;
        }
        
        for(int i = 0; i < s.size(); i++)
        {
            if(isalnum(s[i])) //isalnum() function checks for alphanumeric characters, if found pushes into str
            {
                str.push_back(tolower(s[i])); //converts to lower case
            }
            else
            {
                continue; //skip if not alphanumeric
            }
        }
        
        int i = 0; //reference pointers for traversing the str starting from str.begin()
        int j = str.size() - 1; //starting from str.end()
        
        while(i <= j) // while loop to traverse both forward and backward to compare
        {
            if(str[i] != str[j]) //if any letters are not found to be a reflection of each other
            {
                return false; //return false immediatly as one mismatch disqualifies this
            }
            
            i++; //increment i up 1
            j--; //decrement j down 1 
        }
        return true; //if all matches are found return true 
    }
};