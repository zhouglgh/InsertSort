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
void InsSort::func_shell(int *array,int size)
{
	int bulk=(size-1)/2;
	while(bulk >= 1)
	{
		int i=bulk;
		while(i<size)
		{
			int j=0;
			while(j<i)
			{
				if(array[j] > array[i])
				{
					while(j<i)
					{
						array[i] ^= array[i-bulk] ^= array[i] ^= array[i-bulk];	
						j+=bulk;
					}
					continue;
				}
				j+=bulk;
			}
			i+=bulk;
		}
		bulk = bulk/2;
	}
}
