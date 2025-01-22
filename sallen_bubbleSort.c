//Bubble Sort
#include <stdio.h>

#define MAX 9
void printArray(int*);
void sort(int*);
void swap(int*, int*);

int main(){
	int array[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
	printf("Before: \n");
	printArray(array);
	
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	sort(array);
	printf("After: \n");
	printArray(array);

	return 0;
}//end main

void sort(int *array){
	int i;
	int j;
	for (i=0; i<MAX; i++){
		for (j=0; j<(MAX-1); j++){
			if (array[j]>array[j+1]){
				swap(&array[j], &array[j+1]);
				printArray(array);
			} //ending if statement
		} //end second for statement
	} //end first for statement
} //end sort function

void printArray(int *array){
	int i;
	printf("[");
	for (i=0; i<MAX; i++){
		if (i<(MAX-1)){
			printf("%d, ", array[i]);
		} //end if statement
		else{
			printf("%d] \n", array[i]);
		} //end else statement
	} //end printing for loop
} //end printArray function

void swap(int *a, int *c){
	int b = *a;
	*a = *c;
	*c = b;
} //end swap function


