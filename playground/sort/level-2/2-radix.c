#include <stdio.h>

static int get_max(int cards[], int size)
{
    int max_val;

    max_val = cards[0];
    for (int i = 1; i < size; i++)
    {
        if (cards[i] > max_val)
            max_val = cards[i];
    }
    return (max_val);
}

void radix_sort(int cards[], int n) 
{
    int i, bucket[10];
    int max_val = cards[0], exp = 1;
    
    max_val = get_max(cards, n);
    
    while (max_val / exp > 0) 
    {
        int output[n];
        // Initialise le tableau bucket à zéro
        for (i = 0; i < 10; i++) 
            bucket[i] = 0;
        
        // comper le nombre de digit
        for (i = 0; i < n; i++) 
            bucket[(cards[i] / exp) % 10]++;

        // for 1st time
        // 2 1 1 0 1 0 0 0 0 0

        // for 2st time
        // 3 0 0 1 0 0 1 0 0 0
        
        for (i = 1; i < 10; i++) // remplis 
            bucket[i] += bucket[i - 1];

        // for 1st time
        // 2 3 4 4 5 5 5 5 5 5

        // for 2st time
        // 3 3 3 4 4 4 5 5 5 5
            
        for (i = n - 1; i >= 0; i--) 
        {
            output[bucket[(cards[i] / exp) % 10] - 1] = cards[i];
            bucket[(cards[i] / exp) % 10]--;
        }

        // for 1st time
        // cards[i] = 4 => (cards[i] / exp) % 10 = 5 => 5 - 1 = 4 => output[4] = 4
        // cards[i] = 30 => (cards[i] / exp) % 10 = 2 => 2 - 1 = 1 => output[1] = 30
        // cards[i] = 60 => (cards[i] / exp) % 10 = 1 => 1 - 1 = 0 => output[0] = 60
        // cards[i] = 1 => (cards[i] / exp) % 10 = 3 => 3 - 1 = 2 => output[2] = 1
        // cards[i] = 2 => (cards[i] / exp) % 10 = 4 => 4 - 1 = 3 => output[3] = 2

        // for 2st time
        // cards[i] = 4 => (cards[i] / exp) % 10 = 3 => 3 - 1 = 2 => output[2] = 4
        // cards[i] = 2 => (cards[i] / exp) % 10 = 2 => 2 - 1 = 1 => output[1] = 2
        // cards[i] = 1 => (cards[i] / exp) % 10 = 1 => 1 - 1 = 0 => output[0] = 1
        // cards[i] = 30 => (cards[i] / exp) % 10 = 4 => 4 - 1 = 3 => output[3] = 30
        // cards[i] = 60 => (cards[i] / exp) % 10 = 5 => 5 - 1 = 4 => output[4] = 60
        
        for (i = 0; i < n; i++)
            cards[i] = output[i];

        // for 1st time
        // 60 30 1 2 4

        exp *= 10;
    }
}

int main() 
{
    int cards[] = {2, 1, 60, 30, 4};
    int n = 5;
    
    radix_sort(cards, n);
    
    printf("\nTableau après le tri:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", cards[i]);
    
    return 0;
}