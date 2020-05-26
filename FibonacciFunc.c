#include <stdio.h>

int Fibo(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return Fibo(n-1) + Fibo(n-2);
}

int main()
{
	int fibo_num = 0;
	printf("Fibo num : ");
	scanf("%d",&fibo_num);

	for(int i = 1;i<fibo_num;i++)
	{
		printf("%d ",Fibo(i));
	}
	printf("\nDone..\n");
	return 0;
}
