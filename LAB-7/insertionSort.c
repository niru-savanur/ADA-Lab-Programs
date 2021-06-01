#include <stdio.h>
#include <stdlib.h>
#include <time.h>

clock_t start, end;
double cpu_time_used;

void insertion_Sort(int a[], int n)

{
    int i, j, y;

    for (i = 1; i< n; i++)

    {

        y = a[i];

        j = i - 1;

        while (j >= 0 && a[j] > y)

        {

            a[j + 1] = a[j];

            j = j - 1;
        }

        a[j + 1] = y;
    }
    
}

void main(){

    int i, j, n, choice;
    
    while(1){
        printf("Enter number of elements:\n");
        scanf("%d", &n);
        int arr[n];
        printf("1:generate array\t2:enter elemets manually\n");
        scanf("%d", &choice);
        switch (choice){
            
            case 1:
                srand(time(0));
                for (i = 0; i < n; i++)
                {
                    arr[i] = rand() % 100;
                }
                // printf("generated array is:\n");
                // for (i = 0; i < n; i++)
                // {
                //     printf("%d\t", arr[i]);
                // }
                printf("array generated!!\n");
            break;
            case 2:
                printf("Enter %d elements of the array\n", n);
                for (i = 0; i < n; i++)
                {
                   scanf("%d", &arr[i]);
                }
            break;
            default: printf("invalid choice!!\n");
            exit(0);
        }
        start = clock();
        insertion_Sort(arr, n);
        end = clock();
        cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
        // printf("the sorted array is\n");
        // for (i = 0; i < n; i++)
        // {
        //     printf("%d\t", arr[i]);
        // }
        printf("array sorted!\n");
        printf("time used: %f\n\n\n", cpu_time_used);
    }
    
}