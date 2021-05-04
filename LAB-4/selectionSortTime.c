#include<stdio.h>
#include <stdlib.h>
#include<time.h>

clock_t start, end;
double cpu_time_used;

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
    int numsArray[12] = { 1000, 2000, 5000, 8000, 10000, 15000, 20000, 25000, 30000, 40000, 50000, 100000};
    
   
      
    for(l = 0; l < 12; l++){
        printf("number of elements taken -%d\n", numsArray[l]);
        n = numsArray[l];
        int arr[n];

        srand(time(0));
        printf("Generating array.......\n");
        for (i = 0; i < n; i++)
        {

            arr[i] = rand() % 100;
            
        }
        printf("Array generated!\n");
        printf("Sorting array.......\n");
        start = clock();
        selectionSort(arr, n);
        end = clock();
        cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Array sorted!\n");
        printf("time used: %f\n\n\n", cpu_time_used);
    }
    
    
}