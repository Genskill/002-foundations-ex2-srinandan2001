#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int typepattern;
    int rows;
    int i;
    int j;
    int k;
    typepattern = get_int("");
    rows = get_int("");
    if (typepattern == 1)
    {
        for (i=rows; i>=1; i--)
        {
            for (j=1; j<=i; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    else if (typepattern == 2)
    {
        for (i=rows; i>=1; i--)
        {
            for (j=1; j<=i-1; j++)
            {
                printf(" ");
            }
            for (k=rows; k>=i; k--)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Enter a valid number");
    }
}
