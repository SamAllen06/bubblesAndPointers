Pseudocode for Bubble Sort
constant MAX is max length of array

function sort (array):
	create integer variable i and j
	for i from zero to MAX -1:
		for j from zero to MAX -1:
			if array[j] > array[j+1]
				swap array[j] with array [j+1]
					printArray(array)

function printArray(array):
	define MAX as 10
	print an open bar
	start a for loop with i gets zero, it adds 1 to i each time, and it stops when it reaches MAX
		if i is less than MAX minus 1
			print the value at i in the array with a comma
		otherwise print the value of i in the array with a closed bar

function swap(a, c):
	create integer variable b to temporarily store a value
	b gets the address of a
	a gets the address of c
	c gets the address of b
	return a and c


main:
	
