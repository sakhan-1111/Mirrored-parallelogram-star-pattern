#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, r, c;
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter columns: ");
    scanf("%d", &c);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=c; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
