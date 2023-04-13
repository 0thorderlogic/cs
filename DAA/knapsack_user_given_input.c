#include <stdio.h>
#include <stdlib.h>

typedef struct knapsack
{
    int item;
    float weight, profit, ratio;

} ks;


void merge(ks arr[], int left, int mid, int right)
{
    int indx1, indx2, indx;
    int n1 = mid - left + 1;
    int n2 = right - mid;
 
    /* create temp arrays */
    ks left_arr[n1], right_arr[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (indx1 = 0; indx1 < n1; indx1++)
        left_arr[indx1] = arr[left + indx1];
    for (indx2 = 0; indx2 < n2; indx2++)
        right_arr[indx2] = arr[mid + 1 + indx2];
 
    /* Merge the temp arrays back into arr[l..r]*/
    indx1 = 0; // Initial index of first subarray
    indx2 = 0; // Initial index of second subarray
    indx = left; // Initial index of merged subarray
    while (indx1 < n1 && indx2 < n2) {
        if (left_arr[indx1].ratio >= right_arr[indx2].ratio) {
            arr[indx] = left_arr[indx1];
            indx1++;
        }
        else {
            arr[indx] = right_arr[indx2];
            indx2++;
        }
        indx++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (indx1 < n1) {
        arr[indx] = left_arr[indx1];
        indx1++;
        indx++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (indx2 < n2) {
        arr[indx] = right_arr[indx2];
        indx2++;
        indx++;
    }
}


void mergeSort(ks arr[], int left, int right)
{
    if (left < right) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int mid = left + (right - left) / 2;
 
        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
 
        merge(arr, left, mid, right);
    }
}

void knapsack(ks arr[], int n, float bag_cap)
{

    float cost = 0.0, fraction;
    float rem_cap = bag_cap;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <= rem_cap)
        {
            cost = cost + arr[i].profit;
            rem_cap = rem_cap - arr[i].weight;
        }
        else if (rem_cap > 0)
        {
            cost = cost + ((rem_cap / arr[i].weight) * arr[i].profit);
            break;
        }
    }

    printf("\n The max profit is: %f", cost);
}

//print the array
void print(ks arr[],int num){
    for (int indx = 0; indx < num; indx++)
    {
        printf("%d %f %f %f", arr[indx].item,arr[indx].weight,arr[indx].profit,arr[indx].ratio);
        printf("\n");
    }
}

int main()
{
    float bag_cap;
    int num;
    printf("Enter the no. of items: ");
    scanf("%d", &num);
    printf("Enter the bag apacity: ");
    scanf("%f", &bag_cap);
    ks *arr;
    arr = (ks *)malloc(num * sizeof(ks));

    for (int indx = 0; indx < num; indx++)
    {
    printf("Enter the weight and profit of item %d: ",indx+1);
        arr[indx].item = indx;
        scanf("%f %f", &arr[indx].weight, &arr[indx].profit);
        arr[indx].ratio = arr[indx].profit / arr[indx].weight;
    }

    printf("Before sorting\n");
    print(arr,num);

    // call the merge function 
    mergeSort(arr,0,num-1);

    printf("after sorting\n");
    print(arr,num);
    

    knapsack(arr, num, bag_cap);

    return 0;
}

