#include <stdio.h>

void Recursive(int num)
{
	if(num <0)
		return ;
	printf("Recursive Call!! %d\n",num);
	Recursive(num-1);
}

int main()
{
	int a;
	printf("Recursive Num : ");
	scanf("%d",&a);

	Recursive(a);
	return 0;
}
