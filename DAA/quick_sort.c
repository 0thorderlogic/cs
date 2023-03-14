#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void print(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("| %d ", arr[i]);

	printf(" |\n");
}

int partition(int arr[], int low, int high) {
    int pivot, i, j, temp;
    pivot = arr[low];
    i = low + 1;
    j = high;
    do
    {

        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quicksort(int arr[], int low, int high) {
    int partition_index;
    if (low < high)
    {
        partition_index = partition(arr, low, high);
        quicksort(arr, low,  partition_index - 1);
        quicksort(arr,  partition_index + 1, high);
    }
}

int main() {
    int *arr, i = 0, n, start_t, end_t;
    double total;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    if(arr==NULL) {
        printf("Memory allocation failed.\n");
        exit(0);
    }

    else 
        for(i=0;i<n;i++) {
			printf("Enter element number[%d]: ", i);
			scanf("%d",&arr[i]);
		}

    print(arr, n);

    start_t=clock();
    {
	    quicksort(arr, 0, n - 1);
    }
    end_t=clock();    
	total=(double)(end_t - start_t);

	printf("Sorted array:\n");
    print(arr, n);
	
	printf("Time taken by the function %f\n",total);
    
	return 0;
}