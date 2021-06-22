#include <stdio.h>

int a[10][10], p[10][10], i, j, k, n;

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

            p[i][j] = a[i][j];
        }
    }

    for (k = 1; k <= n; k++)

    {

        for (i = 1; i <= n; i++)

        {

            for (j = 1; j <= n; j++)

            {
                p[i][j] = min(p[i][j], p[i][k] + p[k][j]);
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

            scanf("%d", &a[i][j]);
        }
    }

    floyds();

    printf("Distance Matrix\n");

    for (i = 1; i <= n; i++)

    {

        for (j = 1; j <= n; j++)

        {

            printf("%d\t", p[i][j]);
        }

        printf("\n");
    }
}
