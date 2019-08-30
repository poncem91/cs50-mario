#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    //Asks user for input
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23);

    //makes every row
    for (int row = 0; row < height; row++)
    {
        //creates spaces
        for (int space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }

        //creates hashtags
        for (int hash = 0; hash < row + 1; hash++)
        {
            printf("#");
        }

        //creates spaces
        printf("  ");

        //creates hashtags
        for (int hash2 = 0; hash2 < row + 1; hash2++)
        {
            printf("#");
        }

        //creates new line
        printf("\n");
    }
}