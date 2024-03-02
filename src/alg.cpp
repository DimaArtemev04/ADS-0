// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
	int max=0,i=1;
	if (a == b)
		max = a;
	else if(a>b)
		while (i<= b)
		{
			if (a % i == 0 && b % i == 0)
				max = i;
			i++;
		}
	else
		while (i<=a)
		{
			if (a % i == 0 && b % i == 0)
				max = i;
			i++;
		}
	return max;
}
