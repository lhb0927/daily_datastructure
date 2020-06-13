#include <stdio.h>
#include "InfixPostfix.h"

int main(void)
{
	char exp1[] = "1+2*3";
	char exp2[] = "(1+2)*3";
	char exp3[] = "((1-2)+3)*(5-2)";

	ConToRPNExp(exp1);
	ConToRPNExp(exp2);
	ConToRPNExp(exp3);

	printf("%s\n",exp1);
	printf("%s\n",exp2);
	printf("%s\n",exp3);
	
	return 0;
}
