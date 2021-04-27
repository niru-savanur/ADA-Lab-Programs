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
    int n, i, l;
    printf("Enter number of elements in array\n");
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n; i++){
        printf("Enter %d th element:\n", i+1);
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, n);
    printf("the sorted array is:\n");
    for (l = 0; l < n; l++)
    {
        printf("The %d th element: ", l + 1);
        printf("%d\n", arr[l]);
    }
}