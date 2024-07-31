#include <stdio.h> 
// lets take a[5] = {32, 45, 67, 2, 7} as the array to be sorted. 
// merge sort function 
// function to merge the subarrays 
void merge(int a[], int p, int q, int r) 
{ 
int b[5]; //same size of a[] 
int i, j, k; 
k = 0; 
i = p; 
j = q + 1; 
while(i <= q && j <= r) 
{ 
if(a[i] < a[j]) 
{ 
b[k++] = a[i++]; // same as b[k]=a[i]; k++; i++; 
} 
else 
{ 
b[k++] = a[j++]; 
} 
} 
while(i <= q) 
{ 
b[k++] = a[i++]; 
} 
while(j <= r) 
{ 
b[k++] = a[j++]; 
} 
for(i=r; i >= p; i--) 
{ 
a[i] = b[--k]; // copying back the sorted list to a[] 
} 
} 
void mergeSort(int a[], int p, int r) 
{ 
int q; 
if(p < r) 
{ 
q = (p + r) / 2; 
mergeSort(a, p, q); 
mergeSort(a, q+1, r); 
merge(a, p, q, r); 
} 
} 
// function to print the array 
void printArray(int a[], int size) 
{ 
int i; 
for (i=0; i < size; i++) 
{ 
printf("%d ", a[i]); 
} 
printf("\n"); 
} 
int main() 
{ 
printf("Name:Krishna R Wable\n"); 
printf("Roll No: 21141216\n"); 
printf("Batch: I-1\n"); 
int size; 
printf("Enter Size of Array : "); 
scanf("%d",&size); 
int arr[5]; 
for(int i=0;i<size;i++){ 
scanf("%d",&arr[i]); 
} 
int n = sizeof(arr) / sizeof(arr[0]); 
printf("Given array: \n"); 
printArray(arr,n); 
// calling merge sort 
mergeSort(arr, 0, n-1); 
printf("\nSorted array: \n"); 
printArray(arr, n); 
return 0; 
} 