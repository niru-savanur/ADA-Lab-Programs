#include <stdio.h>

int c[10][10], d[10][10], i, j, k, n;

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void floyds()

{

    for (i = 1; i <= n; i++)

    {

        for (j = 1; j <= n; j++)

        {

            d[i][j] = c[i][j];
        }
    }

    for (k = 1; k <= n; k++)

    {

        for (i = 1; i <= n; i++)

        {

            for (j = 1; j <= n; j++)

            {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

void main()

{

    printf("Enter number of vertices\n");

    scanf("%d", &n);

    printf("enter cost adjacency matrix\n");

    for (i = 1; i <= n; i++)

    {

        for (j = 1; j <= n; j++)

        {

            scanf("%d", &c[i][j]);
        }
    }

    floyds();

    printf("Distance Matrix\n");

    for (i = 1; i <= n; i++)

    {

        for (j = 1; j <= n; j++)

        {

            printf("%d\t", d[i][j]);
        }

        printf("\n");
    }
}
