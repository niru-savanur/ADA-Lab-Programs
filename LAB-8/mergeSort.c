#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int m;
clock_t start, end;
double cpu_time_used;

void merge(int a[], int low, int mid, int high)

{

    int i, j, k, c[ high+1];

    i = low;

    k = low;

    j = mid + 1;

    while (i <= mid && j <= high)

    {

        if (a[i] < a[j])

            c[k++] = a[i++];

        else

            c[k++] = a[j++];
    }

    while (i <= mid)

            c[k++] = a[i++];

        while(j<=high)

            c[k++]=a[j++];

        for(i=low;i<=high;i++){
            for (m = 0; m < 100; m++)
            {
            }
            a[i] = c[i];
        }

            
}

void mergesort(int a[], int low, int high)

{

    int mid;

    if (low < high)

    {

        mid = (low + high) / 2;

        mergesort(a, low, mid);

        mergesort(a, mid + 1, high);
        
        merge(a, low, mid, high);
    }
}



void main()

{
    int inputs=10000;
    while(inputs <= 100000){

   

    int i, n;

    // printf("Enter number of elements\n");

    // scanf("%d", &n);
    n = inputs;
    int a[n];

    printf("Generating array....\n");
    srand(time(0));
    for (i = 0; i < n; i++)

        a[i] = rand() % 100;

    printf("Array generated!\n");

    // printf("Generated array is\n");
    // for (i = 0; i < n; i++)

    //     printf("%d\t", a[i]);

    printf("Sorting.....\n");

    start = clock();
    mergesort(a, 0, n - 1);
    end = clock();

    printf("Array sorted\n");

    cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
    
    printf("time used for %d elements: %f\n\n\n", n, cpu_time_used);

    // printf("Sorted array is..\n");

    // for (i = 0; i < n; i++)

    //     printf("%d\t", a[i]);
    inputs+=10000;
    }
}