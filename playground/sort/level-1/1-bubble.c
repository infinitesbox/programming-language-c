#include <stdio.h>

void bubble_md_1(char cards[], int size)
{
    int i, j, tmp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (cards[i] > cards[j])
            {
                tmp = cards[i];
                cards[i] = cards[j];
                cards[j] = tmp;
            }
        }
    }
}

void bubble_md_2(char cards[], int size)
{
    int i, j, tmp;

    for (i = 0; i < size - 1 ; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (cards[j] > cards[j + 1])
            {
                tmp = cards[j];
                cards[j] = cards[j + 1];
                cards[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    char cards[5] = { '2', '3', '4', '5', '1' };
    int i, j, tmp;

    bubble_md_1(cards, 5);

    //bubble_md_2(cards, 5);

    printf("%s\n", cards);

    return (0);
}