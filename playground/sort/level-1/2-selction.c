#include <stdio.h>

int main()
{
    char cards[5] = { '2', '3', '4', '5', '1' };
    int i, j, tmp, min;
    for (i = 0; i < 5 - 1 ; i++)
    {
        min = i;

        for (j = i + 1; j < 5; j++)
        {
            if (cards[j] < cards[min])
                min = j;
        }

        tmp = cards[i];
        cards[i] = cards[min];
        cards[min] = tmp;
    }

    printf("%s\n", cards);

    return (0);
}