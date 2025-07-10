class Solution {
public:
   int GiveSum(int n)
{
	int sum = 0;
	while (n>0)
	{
	
		int t = n % 10;
		sum += t*t;
		n = n / 10;
	}
	return sum;
}

bool isHappy(int n) 
{
	set<int>passedN;

	while (true)
	{
		if (n==1)
		{
			return true;
		}
		if (passedN.count(n))
		{
			return false;
		}
		passedN.insert(n);
		n = GiveSum(n);
	}

	return false;
}
};