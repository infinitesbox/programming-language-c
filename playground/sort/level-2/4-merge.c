#include <stdio.h>
#include <stdlib.h>

void merge(int cards[], int left_index, int mid, int right_index)
{
	int size_left = mid - left_index + 1;
	int size_right = right_index - mid;

	int cards_left[size_left];
	int cards_right[size_right];

	// for the 1st recursion
	// 4 1 

	// copy cards in tmp left array and in tmp right array
	for (int i = 0; i < size_left; i++)
		cards_left[i] = cards[left_index + i]; 
	// 4 

	for (int i = 0; i < size_right; i++)
		cards_right[i] = cards[mid + 1 + i]; 
	// 1

	// copy (merge) in cards 
	int i, j, k;
	for (i = 0, j = 0, k = left_index; i < size_left && j < size_right; k++)
	{
		if (cards_left[i] <= cards_right[j])
		{
			cards[k] = cards_left[i];
			i++;
		}
		else
		{
			cards[k] = cards_right[j];
			j++;
		}
	}

	// copy the rest of left array
	for ( ; i < size_left; i++, k++ )
		cards[k] = cards_left[i];

	// copy the rest of right array
	for ( ; j < size_right; j++, k++ )
		cards[k] = cards_right[j];
}

void merge_sort(int cards[], int left_index, int right_index)
{
	if (left_index >= right_index)
		return ;

	int mid = left_index + ((right_index - left_index) / 2);

	merge_sort(cards, left_index, mid);
	// 1st merge_sort
	// right_index = 3
	// left_index = 0 and mid = 1
	// cards [4, 1]

	// 2nd merge_sort
	// right_index = 1
	// left_index = 0 and mid = 0
	// cards [4]

	merge_sort(cards, mid + 1, right_index);
	// 2nd merge_sort
	// right_index = 1
	// mid = 0 + 1 = 1 and right_index = 1
	// cards [1]

	merge(cards, left_index, mid, right_index);
	// 2nd merge
	// left_index = 0 and  mid = 0 and right_index = 1
	// cards [4, 1]
}

int main()
{
	int size = 4;
	int cards[4] = { 4, 1, 2, 3 };

	merge_sort(cards, 0, size - 1);

	for (int i = 0; i < size; i++)
		printf("[%d]", cards[i]);
	puts("");

	return (0);
}