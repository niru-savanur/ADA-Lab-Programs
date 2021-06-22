#include <stdio.h>

int a[10][10], p[10][10], i, j, k, n;

void warshalls()

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

                if ((p[i][j] != 1) && (p[i][k] == 1 && p[k][j] == 1))

                    p[i][j] = 1;
            }
        }
    }
}

void main()

{

    printf("Enter number of vertices\n");

    scanf("%d", &n);

    printf("enter adjacency matrix\n");

    for (i = 1; i <= n; i++)

    {

        for (j = 1; j <= n; j++)

        {

            scanf("%d", &a[i][j]);
        }
    }

    warshalls();

    printf("Path Matrix\n");

    for (i = 1; i <= n; i++)

    {

        for (j = 1; j <= n; j++)

        {

            printf("%d\t", p[i][j]);
        }

        printf("\n");
    }
}
