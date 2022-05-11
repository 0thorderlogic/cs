#include <stdio.h>

/* 
ToDO -
    [*] Store the base value of an array in a pointer
    [*] Acess all the values via pointer arithmetic
    [*] Derefence and Increment/Decrement the value in the array
*/

int main () {
    int arr[5] = {69, 420, 21, 80085, 438}, *ptr_base_address;

    for (int i = 0; i < 5; i++)
        printf("Value at arr[%d]: %d\n", i, arr[i]);        

    ptr_base_address = &arr[0];

    printf("Base address of arr from &arr: %p\n", &arr);
    printf("Base address of arr from pointer: %p\n", ptr_base_address);
    
    printf("[*] Store the base value of an array in a pointer - Complete\n");

    for (int i = 0; i < 5; i++)
        printf("Value at arr[%d]: %d\n", i, *(ptr_base_address+i));     

    printf("[*] Acess all the values via pointer arithmetic - Complete\n");

    printf("Derefencing and incrementing all the values by 1\n");

    for (int i = 0; i < 5; i++) {
        *(ptr_base_address+i) = *(ptr_base_address) + 1;
        printf("Value at arr[%d]: %d\n", i, *(ptr_base_address+i));     
    }

    return 0;
}