#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int n, i;

	printf("Enter number of elements: ");
	scanf("%d",&n);

	ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {
		printf("Memory successfully allocated using malloc.\n");

		for (i = 0; i < n; ++i) {
            printf("Enter element number[%d]: ", i);
			scanf("%d", &ptr[i]);
        }

		for (i = 0; i < n; ++i)
			printf("| %d ", ptr[i]);
        printf(" |\n");
	}

	return 0;
}
