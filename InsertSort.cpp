#include "InsertSort.h"
int InsSort::sort(int *array,int size)
{
	func(array,size);
}
/**
 * 插入排序
 * */
void InsSort::func(int *array,int size)
{
    int i=1;
    /*
     * 假设数组中下标为i的元素之前的数据均是有序的，
     * 最外层循环是遍历每个元素，使之插入之前的有序数组中。
     * */
    while(i<size)
    {
        int j=0;
        /*
         * 第二层循环找到i元素之前的有序数组中，i元素所处位置。
         * */
        while(j<i)
        {
            if(array[j] > array[i])
            {
                /*
                 * 找到位置后，依次交换位置，使其最终移动到那个位置。
                 * */
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
