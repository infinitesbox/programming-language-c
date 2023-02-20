#include <stdio.h>

int main()
{
    char cards[5] = { '4', '3', '2', '5', '1' };
    for(int i = 0; i < 5; i++) 
    {
        int temp = cards[i];    
        int j = i;
        while(j > 0 && temp < cards[j - 1]) 
        {
            cards[j] = cards[j - 1];
            j = j - 1;
        }
        cards[j] = temp;     
        printf("%c\n", cards[j]);  
    } 

    printf("%s\n", cards);

    // 4 3 2 5 1  i = 0
    // 3 4 2 5 1  i = 1
    // 2 3 4 5 1  i = 2
    // 2 3 4 5 1  i = 3
    // 2 3 4 5 1  i = 4

    return (0);
}