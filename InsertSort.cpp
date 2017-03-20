#include "InsertSort.h"
int InsSort::sort(int *array,int size)
{
	func(array,size);
}
/**
 * 
 * */
void InsSort::func(int *array,int size)
{
	int i=1;
	while(i<size)
	{
		int j=0;
		while(j<i)
		{
			if(array[j] > array[i])
			{
				while(j<i)
				{
					array[i] ^= array[i-1] ^= array[i] ^= array[i-1];	
					j++;
				}
				continue;
			}
			j++;
		}
		i++;
	}
}
