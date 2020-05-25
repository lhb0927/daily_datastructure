#include <stdio.h>

int Factorial(int n)
{
	if(n==0)
		return 1;
	else
		return n * Factorial(n-1);
}

int main()
{
	int num = 0;
	printf("Factorial number : ");
	scanf("%d",&num);

	printf("%d! = %d\n",num,Factorial(num));
	return 0;
}
