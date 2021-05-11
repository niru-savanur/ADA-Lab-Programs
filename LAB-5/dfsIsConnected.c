#include <stdio.h>


void dfs(int);

int a[10][10], vis[10], n, count;

void main()

{

    int i, j, src;
    printf("enter number of vertices\n");
    scanf("%d", &n);
    printf("enter adjacency matrix\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 1; i <= n; i++)
        vis[i] = 0;
    printf("enter source vertex\n");
    scanf("%d", &src);
    printf("Nodes reachable from vertex-%d \n", src);
    dfs(src);
    if (count == n)
    {
        printf("\nGraph is connected\n");
    }
    else
    {
        printf("Graph is not connected\n");
    }
}

void dfs(int v)
{

    int i;
    vis[v] = 1;
    count++;
    printf("%d\t", v);
    for (i = 1; i <= n; i++)
    {
        if (a[v][i] == 1 && vis[i] == 0)
            dfs(i);
    }
}