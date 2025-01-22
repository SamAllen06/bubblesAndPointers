#include <stdio.h>
#define MAX 4
int main(){
	int i;
	int array[] = {'1', '2', '3', '4'};
	printf("[");
	for (i=0; i<MAX; i++){
		if (i<(MAX-1)){
			printf("%c, ", array[i]);
		}
		else{
			printf("%c]", array[i]);
		}
	}
	return 0;
}
