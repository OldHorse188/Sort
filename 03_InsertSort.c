#include <stdio.h>

// 插入排序（内部排序，稳定）
// 视“起始位置”为“有序数组”，遍历后续部分，将“待排序元素”插入到“有序数组”的合适位置
// 对“有序数组”从后向前扫描，一路交换位置，直到碰到比其小的数
//
// 最好时间复杂度 O(n)  数组恰好有序
// 最坏时间复杂度 O(n^2)
// 平均时间复杂度 O(n^2)
void InsertSort(int array[], int length)
{
	int temp;
	// 从“待排序元素”中依次取元素
	for (int i = 1; i < length; i++)
	{
		// 从“有序数组”中找合适位置，期间一路调换位置
		for (int j = i; j > 0; j--)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
			}
		}
	}

}

void printArray(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main()
{
	int array[] = {1, 4, 3, 8, 6, 0, 7};
	int length = sizeof(array)/sizeof(int);
	InsertSort(array, length);
	printArray(array, length);
	return 0;
}
