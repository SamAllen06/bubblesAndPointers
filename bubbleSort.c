//Bubble Sort
#include <stdio.h>

#define MAX 10
void printArray(int*);
void sort(int*);
void swap(int*, int*);


void sort(int *array){
	int i;
	int j;
	for (i=0; i<MAX; i++){
		for (j=0; j<MAX; j++){
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

int main(){
	int array[] = {10, 5, 3, 7, 2, 9, 1, 4, 6, 8};
	printf("Before: ");
	printArray(array);
	int x = 5;
	int y = 6;
	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	sort(array);
	printf("After: ");
	printArray(array);

	return 0;
}//end main
