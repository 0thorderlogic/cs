#include <stdio.h>
#include <stdlib.h>

/* Program to implement linear search */

int main() {

    int arr[5], search_query, i;

    printf("Enter 5 elemets of an array: ");
    for (i = 0; i < 5 ; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("What to search? ");
    scanf("%d", &search_query);

    for (i = 0; i < 5 ; i++)
    {
        
        if (search_query == arr[i])
        {
            printf("Element resided at index %d\n", i);
            exit;
        }
        else
        {
            printf("Element not found!\n");
            exit;
        }
    }

}