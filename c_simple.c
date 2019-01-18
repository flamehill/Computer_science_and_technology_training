#include <stdio.h>

int main()
{
	int i,sum_even;
	sum_even = 0;
	i = 10;
	
	while(i > 0)
	{
		if(i%2 == 0)
		{
			sum_even += i;
		}
		i--;
	}
	printf("sum_even value is:%d\n", sum_even);
	return 0;
}

