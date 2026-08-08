int reverse(int n)
{
    int A = 214748364;
    int B = -214748364;
    signed int  reverse = 0;
	while(n)
    {
		int a = n % 10;
        if(reverse>A||reverse<B)
        {
            return 0;
        }
		reverse = (reverse * 10) + a;
		n = n / 10;
	}
    return reverse;
}
	