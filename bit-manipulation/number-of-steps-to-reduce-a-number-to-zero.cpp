class Solution {
    public:
    int countStep(int num, int step)
    {
        if(num == 0) return step;
        if(num % 2 == 0)
        {
            return countStep(num / 2, step + 1);
        }
        return countStep(num - 1, step + 1);
    }
    int numberOfSteps(int num) {
        return countStep(num, 0);
    }
};