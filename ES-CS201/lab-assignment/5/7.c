#include <stdio.h>

/* 
Problem Statement:
Write a program in C to check whether a user given number is Palindrome or Not.
*/

int main() {
	int  k = 0, len= 0, rem, i, n, flag, arr[10], j;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int newlen= sizeof(a)/sizeof(a[0]);
	
	while (n!=0) {
		rem = n%10;
		arr[k++] = rem;
		n /= 10;
		len++;
	}
	
	for ( i = 0, j = len-1; i<j ; i++, j--) {
		if(arr[i] != arr[j]) {
			flag = 1;
		}
		break;
	}
	
	if (flag==0) {
		printf("YES!\n");
	}
	else {
		printf("NO\n");
	}
} 
