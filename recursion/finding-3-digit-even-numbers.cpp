class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> even_numbers;

        for (int i = 0; i < digits.size(); ++i) {

            for (int j = 0; j < digits.size(); ++j) {

                for (int k = 0; k < digits.size(); ++k) {
                    if ((i != j) and (j != k) and (i != k)) {

                        // condition for even Numbers
                        if (digits[i] != 0 and digits[k] % 2 == 0) {
                            string str = "";
                            str.push_back(digits[i] + '0');
                            str.push_back(digits[j] + '0');
                            str.push_back(digits[k] + '0');
                            even_numbers.insert(stoi(str));
                        }
                    }
                }
            }
        }

        vector<int> fnl(even_numbers.begin(), even_numbers.end());
        return fnl;
    }
};