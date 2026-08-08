class Solution {
public:
    vector<int> sumZero(int n) {
        int sum = 0;
        if(n == 1) return {0};
        if (n == 2) return {-1,1};
        vector<int> res;
        for(int i=0; i<n-1; i++){
            res.push_back(i);
            sum += i;
        }
        res.push_back(-sum);
        return res;
    }
};