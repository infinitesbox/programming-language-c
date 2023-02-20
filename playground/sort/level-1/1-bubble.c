#include <stdio.h>

int main()
{
    char cards[5] = { '2', '3', '4', '5', '1' };
    int i, j, tmp;
    for (i = 0; i < 5 - 1 ; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (cards[j] > cards[j + 1])
            {
                tmp = cards[j];
                cards[j] = cards[j + 1];
                cards[j + 1] = tmp;
            }
        }
    }

    printf("%s\n", cards);

    return (0);
}