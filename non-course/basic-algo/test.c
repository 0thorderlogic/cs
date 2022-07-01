#include <stdio.h>
#include <time.h>

void prime();

int main()
{
	clock_t t;
	t = clock();
	prime();
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("prime function took %f seconds to execute \n", time_taken);
	return 0;
}

void prime()
{
    int i_num, i_limit, i_loop, i_check;
    printf("Enter a limit:");
    scanf("%d", &i_limit);

    printf("Prime numbers\n");
    printf("-------------------\n");
    printf("2\n");
    
    for (i_loop = 2; i_loop < i_limit; i_loop++)
    {

        while (i_loop/2 != 0)
        {
            printf("%d\n",i_loop);
        }
        i_loop++;

    }
    
}