# Solutions for Unit test 2 suggestions 


## 1. Write a program in C to find out the factorial of a user given number using recursive function.

```
#include<stdio.h>

int multiplyNumbers(int n);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

```
<br><br>
## 2. Write a program in C to search a specific item from a given set of integer values.

```
#include <stdio.h>

int main() {
    int arr[10], search, n, i;

    printf("Please enter how many elements should be available in an array: ");
    scanf("%d",&n);

    printf("Please enter %d numbers or integers one by one: ", n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

   printf("\nPlease enter the number you want to search? ");
   scanf("%d", &search);

   for (i = 0; i < n; i++)
        if (arr[i] == search) {
            printf("\n%d is present at location %d\n", search, i+1);
            break;
        }

    if (i == n)
      printf("%d is not available in the array.\n", search);
   return 0;
}
```
<br><br>
## 3. Write a program in C to calculate LCM of a user given number using user defined function.

```
#include <stdio.h>

int main() {
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    for(;;) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
```
<br><br>
## 4. Write a program in C to calculate number of Vowels, Number of
Consonants, Number of Numeric values and Number of spaces present in a
user given string.

```
code here
```
<br><br>
## 5. What is a pointer?

A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location. Like any variable or constant, you must declare a pointer before using it to store any variable address.

<br><br>
## 6. What are the different bitwise operators?

& - Bitwise AND
		
| - Bitwise OR
		
^ - Bitwise XOR
<br><br>
## 7. Give examples of Unary, Binary and Ternary operators?

Unary operators: The operators which work with only one operand are called unary operators. E.g. ++, - - etc are unary operators.

```
    int a=5; 
    a++;//here ++ acts on only one operand a 
    a--; 
```

Binary operators: The operators which work with two operands are called binary operators. E.g. +,-,*,/ are binary operators.

```
    int a=4,b=2,c; 
    c=a+b; 
    c=a-b; 
    c=a*b; 
    c=a/b; 
    /*Note that these operators acts on a  
    and b(2 operands)*/ 
```

Ternary operators: The operators which work with three operands are called ternary operators. E.g. ?: is a ternary operator.

```
    int a=1,b=2,max; 
    max=(a>b)?a:b; 
    /*Here ?: acts on three operands a>b,a  
    and b.  
```
<br><br>
## 8. What are different System software?

1.Operating system: Harnesses communication between hardware, system programs, and other applications.

2.Device driver: Enables device communication with the OS and other programs.

3.Firmware: Enables device control and identification.

4.Translator: Translates high-level languages to low-level machine codes.

5.Utility: Ensures optimum functionality of devices and applications.
