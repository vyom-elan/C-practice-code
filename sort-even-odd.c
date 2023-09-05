/*You are required to input the size of the matrix then the elements of matrix, then you have to divide the main matrix in two sub matrices (even and odd) in such a way that element at 0 index will be considered as even and element at 1st index will be considered as odd and so on. then you have sort the even and odd matrices in ascending order then print the sum of second largest number from both the matrices

Example

enter the size of array : 5
enter element at 0 index : 3
enter element at 1 index : 4
enter element at 2 index : 1
enter element at 3 index : 7
enter element at 4 index : 9
Sorted even array : 1 3 9
Sorted odd array : 4 7

7*/

#include <stdio.h>
int main() {
	int arr[100];
	int length, i, j, oddlen, evenlen, temp;
	int odd[50], even[50];
	printf("Enter the length of the array: ");
	scanf("%d", &length);

	for (i = 0; i < length; i++) {
    	printf("Enter element at index %d: ", i);
    	scanf("%d", &arr[i]);
	}
	if (length % 2 == 0) {
    	oddlen = length / 2;
    	evenlen = length / 2;
	} else {
    	oddlen = length / 2;
    	evenlen = (length / 2) + 1;
	}
	for (i = 0; i < length; i++) {
    	if (i % 2 == 0) {
        	even[i / 2] = arr[i];
    	} else {
        	odd[i / 2] = arr[i];
    	}
	}
	for (i = 0; i < evenlen - 1; i++) {
    	for (j = i + 1; j < evenlen; j++) {
        	if (even[i] > even[j]) {
            	temp = even[i];
            	even[i] = even[j];
            	even[j] = temp;
        	}
    	}
	}
	for (i = 0; i < oddlen - 1; i++) {
    	for (j = i + 1; j < oddlen; j++) {
        	if (odd[i] > odd[j]) {
            	temp = odd[i];
            	odd[i] = odd[j];
            	odd[j] = temp;
        	}
    	}
	}
	printf("\nSorted even array: ");
	for (i = 0; i < evenlen; i++) {
    	printf("%d ", even[i]);
	}
	printf("\n");
	printf("Sorted odd array: ");
	for (i = 0; i < oddlen; i++) {
    	printf("%d ", odd[i]);
	}
	printf("\n");
	printf("%d", even[evenlen - 2] + odd[oddlen - 2]);
	return 0;
}
