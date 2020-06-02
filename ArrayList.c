#include <stdio.h>
#include "ArrayList.h"

void ListInit(List *plist)
{
	(plist->numOfData) = 0;
	(plist->curPosition) = -1;
}

void LInsert(List *plist,LData data)
{
	if(plist->numofData >= LIST_LEN)
	{
		puts("save is impossible..");
		return ;
	}

	plist->arr[plist->numOfData] = data;
	(plist->numofData)++;
}

int LFirst(List *plist, LData *pdata)
{
	if(plist->numofData==0)
		return FALSE;

	(plist->curPosition) = 0;
	*pdata = plist->arr[0];
	return TRUE;
}

int LNext(List *plist, LData *pdata)
{
	if(plist->curPosition >= (plist->numOfData)-1)
		return FALSE;
	
	(plist->curPosition)++;
	*pdata = plist->Arr[plist->curPosition];
	return TRUE;
}

LData LRmove(List *plist)
{
	int rpos = plist->curPosition;
	int num = plist->numOfData;
	int i;
	LData rdata = plist->arr[rpos];

	for(i = rpos;i<num-1;i++)
		plist->arr[i] = plist->Arr[i+1];

	(plist->numOfData)--;
	(plist->curPosition--;
	return rdata;
}

int LCount(List *plist)
{
	return plist->numOfData;
}
