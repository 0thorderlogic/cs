#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long syntax_sugar_sum (int *ptr, int max);
long simple_sum(int *ptr, int max);

void main() {
	FILE *fptr;
	long sum;
	int i,  *ptr, max, start_t, end_t;
	double total;       


	fptr = fopen("input.txt", "r"); 
	// it's not everyday I fall down in the metro.

	if (fptr == NULL) {
		printf("Error while reading the file.\n");
		exit(1);
	}

	printf("Enter number of elements: ");
    scanf("%d", &max);
    
    ptr = (int*)malloc(max * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation harshil.\n");
        exit(0);
    }
    else {
        printf("Memory allocation sucessful.\n");
        printf("Enter the elements:\n");
        
        for (i = 0; i < max; ++i) {
			fscanf(fptr,"%d", &ptr[i]);
        }
    }
	start_t = clock();{
		sum = syntax_sugar_sum(ptr, max);
	}
	end_t = clock();
	total = (double)(end_t - start_t);
	printf("Time taken by syntax_sugar function is: %f\n", total);
	printf("Result: %ld\n", sum);

	start_t = clock();{
		sum = simple_sum(ptr, max);
	}
	end_t = clock();
	total = (double)(end_t - start_t);
	printf("Time taken by simple function is: %f\n", total);
	printf("Result: %ld\n", sum);

}

long syntax_sugar_sum (int *ptr, int max) {
	long sum = 0;

	for (int i = 0; i < max; i++)
		sum += ptr[i];

	return sum;
}

long simple_sum (int *ptr, int max) {
	long sum = 0;

	for (int i = 0; i < max; i++)
		sum = sum + ptr[i];

	return sum;
}