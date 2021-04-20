#include <stdio.h>
#include <time.h>
clock_t start1, start2, end1, end2;
double cpu_time_used1, cpu_time_used2;

int recLinearSearch(int arr[], int l, int r, int x)
{
    if (r < l)
        return -1;
    if (arr[l] == x)
        return l;
    if (arr[r] == x)
        return r;
    return recLinearSearch(arr, l + 1, r - 1, x);
}

int recBinarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        
        if (arr[mid] == x)
            return mid;

        
        if (arr[mid] > x)
            return recBinarySearch(arr, l, mid - 1, x);

        
        return recBinarySearch(arr, mid + 1, r, x);
    }

    
    return -1;
}

int main()
{

    int result, choice, n, x;
    while (1)
    {
        printf("1:rec linear search\n2:rec binary search\n 3: stop\n");
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
            result = recLinearSearch(arr, 0, n-1, x);
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
            result = recBinarySearch(arr, 0, n - 1, x);
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