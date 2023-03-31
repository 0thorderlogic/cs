#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(float ratio[], float weight[], float profit[], int mid, int low, int high) {
    int i, j, k;
    float B[30],C[30], D[30];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high) {
        if (ratio[i] < ratio[j]) {
            B[k] = ratio[i];
            C[k] = weight[i];
            D[k] = profit[i];
            i++;
            k++;
        }
        else {
            B[k] = ratio[j];
            C[k] = weight[j];
            D[k] = profit[j];
            j++;
            k++;
        }
    }
    while (i <= mid) {
        B[k] = ratio[i];
        C[k] = weight[i];
        D[k] = profit[i];
        k++;
        i++;
    }
    while (j <= high) {
        B[k] = ratio[j];
        C[k] = weight[j];
        D[k] = profit[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++) {
        ratio[i] = B[i];
        weight[i] = C[i];
        profit[i] = D[i];
    }
}

void mergesort(float ratio[], float weight[], float profit[], int low, int high) {
    int mid;
  
    if (low < high) {
        mid = (low + high) / 2;
        mergesort(ratio, weight, profit, low, mid);
        mergesort(ratio, weight, profit, mid + 1, high);
        merge(ratio, weight, profit, mid, low, high);
    }
}

void main() {
    int noofobject = 7, index, rem_cap = 15, i;
    float cost = 0.0;
    float ratio[7];
    float weight[7] = {2.0, 3.0, 5.0, 7.0, 1.0, 4.0, 1.0};
    float profit[7] = {10.0, 5.0, 5.0, 7.0, 6.0, 18.0, 3.0};

    printf("Ratio before sorting in ascending order:\n");
    for (index = 0; index < noofobject; index++) {
        ratio[index] = (float)(profit[index] / weight[index]);
        printf("%f ", ratio[index]);
    }
	printf("\n");
    
	mergesort(ratio, weight, profit, 0, noofobject - 1);
    printf("Ratios after sorting in ascending order:\n");
    for (i = 0; i < 7; i++) {
        printf("%f ", ratio[i]);
    }
    printf("\n");
    
	printf("Weights sorted with respect to ratios:\n");
    for (i = 0; i < 7; i++) {
        printf("%f ", weight[i]);
    }
    printf("\n");
    
	printf("Profits sorted with respect to ratios:\n");
    for (i = 0; i < 7; i++) {
        printf("%f ", profit[i]);
    }
    printf("\n");
    
	for (index = noofobject - 1; index >= 0; index--) {
        if (weight[index] <= rem_cap) {
            cost = cost + profit[index];
            rem_cap = rem_cap - weight[index];
        }
        else if (rem_cap > 0) {
            cost = cost + ((profit[index] / weight[index]) * rem_cap);
            rem_cap = 0;
            break;
        }
    }
    printf("Total profit: %f\n", cost);
}