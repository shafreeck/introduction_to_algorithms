/* Insertion sort that takes running time in worst-case is O(n^2)*/
#include <stdio.h>

void insertion_sort(int arr[], int len) {
    int i, j;
    int val;

    for(i = 1; i < len; ++i){
        val = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > val){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = val;
    }
}

int main(int argc, char *argv[]) {
    int arr[] = {1, 2, 5, 3, 6, 4, 5, 9};
    int len = sizeof(arr)/sizeof(int);
    int i;

    printf("before sorting\n");
    for(i = 0; i < len; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertion_sort(arr, len);
    
    printf("after sorting\n");
    for(i = 0; i < len; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
