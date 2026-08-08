bool isPalindrome(int x) {
    if(x > 0){
        unsigned int n = x, rev = 0;
        while(n > 0){
                rev = rev*10 + n % 10;
                n /= 10;
            }
        return (rev == x);
    }   
    return (x == 0);
}