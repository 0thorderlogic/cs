#include <stdio.h>
#include <time.h>

void basic();
void pointer();

int main()
{
	clock_t t;
	t = clock();
    basic();    // Function import
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("\nBasic function took %f seconds to execute \n", time_taken);
	
    clock_t t2;
	t2 = clock();
    pointer();    // Function import
	t2 = clock() - t2;
	double time_taken2 = ((double)t2)/CLOCKS_PER_SEC;
	printf("\nPointer function took %f seconds to execute \n", time_taken2);
    
    return 0;
}

void basic()
{
    int i_num1 = 69, i_num2 = 420;
    if (i_num1 > i_num2)
        printf("%d is greated", i_num1);
    else
        printf("%d is greated", i_num2);    
}

void pointer()
{
    int i_num1 = 69, i_num2 = 420;
    int *ptr1, *ptr2;

    ptr1 = &i_num1;
    ptr2 = &i_num2;

    if (*ptr1 > *ptr2)
        printf("%d is greated", *ptr1);
    else
        printf("%d is greated", *ptr2);    
    
}