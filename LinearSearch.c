#include <stdio.h>

int LSearch(int arr[], int len, int target)
{
	int i = 0;
	for(i = 0;i<len;i++)
	{
		if(arr[i] == target)
			return i;
	}
	return -1;
}

int main()
{
	int arr[] = {6,8,10,2,4};	//random
	int idx;

	idx = LSearch(arr,sizeof(arr)/sizeof(int),4);
	if(idx==-1)
		printf("Failed to Search...\n");
	else
		printf("Target index : %d\n",idx);

	idx = LSearch(arr,sizeof(arr),sizeof(int),7);
	if(idx == -1)
		printf("Failed to Search...\n");
	else
		printf("Target index : %d\n",idx);

	return 0;
}
