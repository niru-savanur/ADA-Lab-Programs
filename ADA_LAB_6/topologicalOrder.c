#include <stdio.h>
int a[10][10], n, explr[10], vis[10], j = 0;
void dfs(int v)

{

    int i;

    vis[v] = 1;

    for (i = 1; i <= n; i++)

    {

        if (a[v][i] == 1 && vis[i] == 0){
            dfs(i);
        }

            
    }
    explr[j++] = v;
    
}

void main()

{

    int m, u, v, i, k;

    printf("Enter number of vertices\n");

    scanf("%d", &n);

    for (i = 1; i <= n; i++)

    {

        for (k = 1; k <= n; k++)

        {

            a[i][k] = 0;
        }
    }
    printf("Enter number of edges\n");

    scanf("%d", &m);

    for (i = 1; i <= m; i++)

    {

        printf("enter an edge\n");

        scanf("%d %d", &u, &v);

        a[u][v] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        vis[i] = 0;
    }
    

    for (i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i);
        }
    }

    printf("topological order\n");

    for (i = n - 1; i >= 0; i--){
        printf("%d\t", explr[i]);
    }

        
}