#include <stdio.h>
//NabhyaTron
int swap(int *x, int *y) 
{ 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
	return 0;
} 

int selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
        {
          if (arr[j] < arr[min_idx]) 
            min_idx = j;
        }
  
        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]); 
    } 
    return 0;
}

//Function to print an array
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n");
} 

// Driver program to test above functions 
int main() 
{ 
    int n;
    printf("Enter number of elements required in the array.\n");
    scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements\n", n);
	for(int i=0;i<n;i++)
	{
	    scanf("%d", &arr[i]);
	}
	selectionSort(arr, n); 
	printf("Sorted Array: \n"); 
	printArray(arr, n); 
	return 0; 
} 
