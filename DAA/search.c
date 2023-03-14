#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Binary and linear search on a dynamic array

int binary_search(int *ptr, int left, int right, int item) {
    /* 
        binary_search function takes the pointer PTR to the first 
        item in the array, size of the array, and the ITEM to be searched.
        Returns the position of the element of -1 if not found.
    */

	int i, mid;

	if (right >= left) {
        int mid = left + (right - left) / 2;
 
        if (ptr[mid] == item)
            return mid;
 
        if (ptr[mid] > item)
            return binary_search(ptr, left, mid - 1, item);
 
        return binary_search(ptr, mid + 1, right, item);
    }
 
    return -1;	
}

int linear_search(int *ptr, int max, int item) {
    /* 
        linear_search function takes the pointer PTR to the first 
        item in the array, size of the array, and the ITEM to be searched.
        Returns the position of the element of -1 if not found.
    */
    
    int position_of_item, i;
	
	for (i = 0; i < max; ++i) {
		
		if (item == ptr[i]) {
			position_of_item = i;
			break;	
		}
		
		else 
			position_of_item = -1;
	}
		
	return position_of_item;
}

void main() {
    int item, i, max, *ptr, return_value, choice;
	int start_t, end_t;    
	double total;

    // max stores the numbers of elements to be stored in the array.
    
    printf("Enter number of elements you wish to store: ");
    scanf("%d", &max);
    
    ptr = (int*)malloc(max * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation harshil.\n");
        exit(0);
    }
    else {
        printf("Memory allocation sucessfull.\n");
        printf("Enter the elements to be stored in an ascending form.\n");
        
        for (i = 0; i < max; ++i) {
            printf("Enter element number[%d]: ", i);
			scanf("%d", &ptr[i]);
        }

		for (i = 0; i < max; ++i)
			printf("| %d ", ptr[i]);
        printf(" |\n");
    }
    
    printf("Enter element to be searched: ");
    scanf("%d", &item);
    
	choice: 
		printf("\n\n1.Use linear Search\n2.Use Binary Search\nEnter choice: ");
		scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		// calling the linear search function
		start_t = clock();
		{
			return_value = linear_search(ptr, max, item);
			
			if (return_value >= 0) 
				printf("Element found at: %d\n", return_value);
			else 
				printf("Element not found\n");
			
		}
		end_t = clock();

		total = (double)(end_t - start_t);
		break;
	case 2: 
		// calling the binary search function
		start_t = clock();
		{
			return_value = binary_search(ptr, 0, max-1, item);

			if (return_value >= 0) 
				printf("Element found at: %d\n", return_value);
			else 
				printf("Element not found\n");
		}	
		end_t = clock();

		total = (double)(end_t - start_t);
		break;

	default:
		goto choice;
		break;
	}

	printf("Time taken by your desired function is: %f\n", total);
}