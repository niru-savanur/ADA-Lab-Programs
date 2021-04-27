#include<stdio.h>
#include <stdlib.h>
#include<time.h>
void selectionSort(int arr[], int n){
    int j, k, small, pos, temp;
    for(j = 0; j <= n-2; j++){
        small = arr[j];
        pos = j;
        for(k = j+1; k<= n-1;k++){
            if(arr[k] <= small){
                small = arr[k];
                pos = k;
            }
        }
        temp = arr[j];
        arr[j] = arr[pos];
        arr[pos] = temp;
    }
}


void main(){
    int n, i, l, choice;
    printf("Enter number of elements in array\n");
    scanf("%d",&n);
    int arr[n];
    printf("1: manually enter elements\n 2: generate array\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        for (i = 0; i < n; i++)
        {
            printf("Enter %d th element:\n", i + 1);
            scanf("%d", &arr[i]);
        }
        break;
    case 2:
        srand(time(0));
        for (i = 0; i < n; i++)
        {
            
            arr[i] = rand() % 100;
            printf("The element at pos %d is : %d\n ",i+1, arr[i]);
        }
        break;

    default:printf("invalid!\n");
        
    }
    
    selectionSort(arr, n);
    printf("the sorted array is:\n");
    for (l = 0; l < n; l++)
    {
        printf("The element at pos %d : ", l + 1);
        printf("%d\n", arr[l]);
    }
}