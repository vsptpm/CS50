#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n > 8 || n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int d = n - 1; d > i; d--)
        {
            printf(" ");
        }
        for (int h = -1; h < i; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
