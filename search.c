#include <stdio.h>
#include <stdlib.h>

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
    int item, i, max, *ptr, linear_return_value;
    
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
        printf("Enter the elements to be stored.\n");
        
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
    
    // calling the linear search function
    linear_return_value = linear_search(ptr, max, item);
	
	if (linear_return_value >= 0) 
		printf("Element found at: %d\n", linear_return_value);
	else 
		printf("Element not found\n");
}
