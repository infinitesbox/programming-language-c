#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp; 
}

int partition(int cards[], int left, int right)
{
	int pivot = cards[right]; // for 1st => 3 
	int i = left - 1;  //  for 1st => -1
	for (int j = left; j < right; j++) // for 1st => 0 to 3
	{
		if (cards[j] < pivot)
		{
			i = i + 1;
			swap(&(cards[i]), &(cards[j]));
			// for 1st
			
			// 2 < 3 
			// i = 0
			// j = 0
			// 2 1 4 3

			// 1 < 3
			// i = 1
			// j = 1
			// 2 1 4 3
		}
	}
	swap(&(cards[i + 1]), &(cards[right]));
	// for 1st
	// i = 1 + 1 = 2
	// right = 3
	// 2 1 3 4
	return i + 1; // for 1st i = 1 + 1 = 2
}

void quick_sort(int cards[], int left, int right)
{
	if (left < right)
	{
		int pivotIndex = partition(cards, left, right);
		quick_sort(cards, left, pivotIndex -1);
		// for 1st
		// left = 0
		// right = 2
		quick_sort(cards, pivotIndex + 1, right);
		// for 1st
		// left = 2 + 1 = 3
		// right = 3
	}
}

int main()
{
	int size = 4;
	int cards[4] = { 2, 1, 4, 3 };

	quick_sort(cards, 0, size - 1);

	for (int i = 0; i < size; i++)
		printf("[%d]", cards[i]);
	printf("\n");

	return (0);
}