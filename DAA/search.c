#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int *ptr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    /* create temp arrays */
    int L[n1], R[n2];
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = ptr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = ptr[m + 1 + j];
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            ptr[k] = L[i];
            i++;
        }
        else {
            ptr[k] = R[j];
            j++;
        }
        k++;
    }
  
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        ptr[k] = L[i];
        i++;
        k++;
    }
  
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        ptr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int *ptr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

		merge_sort(ptr, l, m);
		merge_sort(ptr, m + 1, r);

		merge(ptr, l, m, r);
    }
}

int main() {
	int i,  *ptr, max, start_t, end_t, l, r, m;       
	double total;

    // max stores the numbers of elements to be stored in the array.
    
    printf("Enter number of elements: ");
    scanf("%d", &max);
    
    ptr = (int*)malloc(max * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation harshil.\n");
        exit(0);
    }
    else {
        printf("Memory allocation sucessfull.\n");
        printf("Enter the elements:\n");
        
        for (i = 0; i < max; ++i) {
            printf("Enter element number[%d]: ", i);
			scanf("%d", &ptr[i]);
        }

		for (i = 0; i < max; ++i)
			printf("| %d ", ptr[i]);
        printf(" |\n");
    }
    
    l = 0; r = max - 1; m = l+r/2;
    
    // call the merge function
	start_t = clock();
	{
		merge_sort(ptr, 0, max - 1);
	}
	end_t = clock();
	total = (double)(end_t - start_t);
	
	//	printf("Time taken by your desired function is: %f\n", total);
	
	printf("Sorted array:\n");
	for (i = 0; i < max; ++i)
			printf("| %d ", ptr[i]);
    printf(" |\n");
    
   	printf("Time taken by your desired function is: %f\n", total);
	return 0;	
}
