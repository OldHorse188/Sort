#include <stdio.h>

// 选择排序（内部排序，不稳定）
// 遍历找最小值，依次放到对应位置
//
// 最好时间复杂度 O(n^2)
// 最坏时间复杂度 O(n^2)
// 平均时间复杂度 O(n^2)
void SelectionSort(int array[], int length)
{
	int min;
	int temp;
	for (int i = 0; i < length - 1; i++)
	{
		// 重置 min
		min = i;
		// 遍历找到最小值
		for (int j = i + 1; j < length; j++)
		{
			if (array[j] <= array[min])
			{
				min = j;
			}
		}
		// 交换最小值到当前位置
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
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
	SelectionSort(array, length);
	printArray(array, length);
	return 0;
}
