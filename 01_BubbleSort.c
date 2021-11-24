#include <stdio.h>

// 冒泡排序（内部排序，稳定）
// 一遍一遍地遍历，过程中对调相邻逆序对，每一次遍历完成，剩余数组的最值移动到最后
//
// 最好时间复杂度 O(n)  数组恰好有序
// 最坏时间复杂度 O(n^2)
// 平均时间复杂度 O(n^2)
void BubbleSort(int array[], int length)
{
	int temp;
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
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
	BubbleSort(array, length);
	printArray(array, length);
	return 0;
}
