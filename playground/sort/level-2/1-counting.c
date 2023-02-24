#include <stdio.h>

int get_max(int tab[], int size)
{
    int max = tab[0];
    for(int i = 1; i < size; i++)
        if(max < tab[i])
            max = tab[i];
    return max;
}

void counting_sort(int cards[], int n)
{
    int max = get_max(cards, n);

    int size = max + 1; // start from 0 to N 
    int count[size];

    for (int i = 0; i < max + 1; i++)
        count[i] = 0;
    
    for (int i = 0; i < n; i++)
        count[cards[i]]++;

    // 0 1 2 0 1 

    for (int i = 1; i < max + 1; i++)
        count[i] += count[i - 1];

    // add with previous value
    // it is freaky but it give all number with repetition
    // 0 1 3 3 4

    int output[n];
    for (int i = n - 1; i >= 0; i--) 
    {  
        output[count[cards[i]] - 1] = cards[i];  
        count[cards[i]]--;
    }

    // cards[i] = 2 => count[cards[i]] - 1 = 2 => output[2] = 2  
    // cards[i] = 4 => count[cards[i]] - 1 = 3 => output[3] = 4
    // cards[i] = 2 => count[cards[i]] - 1 = 1 => output[3] = 2
    // cards[i] = 1 => count[cards[i]] - 1 = 0 => output[3] = 1

    // Copy the sorted elements into original array
    for (int i = 0; i < n; i++)
        cards[i] = output[i];
}

int main()
{
    int cards[4] = { 2, 1, 4, 2 };

    counting_sort(cards, 4);
    
    for (int i = 0; i < 4; i++)
        printf("%d ", cards[i]);

    return 0;
}