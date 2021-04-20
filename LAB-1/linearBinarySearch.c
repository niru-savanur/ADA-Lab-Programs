#include <stdio.h>
#include <time.h>
clock_t start1, start2,end1, end2;
double cpu_time_used1, cpu_time_used2;

int linearSearch(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }

    return -1;
}

int main()
{

    int result, choice, n, x;
    while (1)
    {
        printf("1:linear search\n2:binary search\n 3: stop\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter no of elements:\n");
            scanf("%d", &n);
            int arr[n];
            printf("Enter %d elements\n", n);
            for (int k = 0; k < n; k++)
            {
                scanf("%d", &arr[k]);
            }
            printf("enter element to be found\n");
            scanf("%d", &x);
            start1 = clock();
            result = linearSearch(arr, n, x);
            end1 = clock();
            cpu_time_used1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
            (result == -1) ? printf("Element is not present in array\n") : printf("Element is present at index %d\n", result);
            printf("time used: %f\n", cpu_time_used1);
        }

        else if (choice == 2)
        {
            printf("Enter no of elements:");
            scanf("%d", &n);
            int arr[n];
            printf("Enter %d elements in ascending order\n", n);
            for (int k = 0; k < n; k++)
            {
                scanf("%d", &arr[k]);
            }
            printf("enter element to be found\n");
            scanf("%d", &x);
            start2 = clock();
            result = binarySearch(arr, 0, n - 1, x);
            end2 = clock();
            cpu_time_used2 = (double)(end2 - start2) / CLOCKS_PER_SEC;
            (result == -1) ? printf("Element is not present in array\n") : printf("Element is present at index %d\n", result);
            printf("time used: %f\n", cpu_time_used2);
        }
        else
            break;
    }
    return 0;
}
