# Sorting Algorithms

ALX project for Sorting and Big O

## Tasks

---

### 0. Bubble sort

Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

-   **Prototype:** `void bubble_sort(int \*array, size_t size);`
-   You’re expected to print the array after each time you swap two elements (See example below)

Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

#### Algorithm

=========

**INPUT**:\
`input`: unsorted array\
`size`: size of input array

**STEPS**:
1. IF (size > 1):
	1. SET x to 1
	2. WHILE x < (size):
		1. SET y to 1
		2. WHILE y <= (size - x):
			1. IF input[y-1] > input[y]:
				1. SWAP input[y-1] with input[y]				
			2. INCREMENT y by 1
		3. INCREMENT x by 1

### 1. Insertion sort

Write a function that sort   s a doubly linked list of integers in **ascending** order using the Insertion sort algorithm

-   **Prototype:** `void insertion_sort_list(listint_t \*\*list);`
-   You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
-   You’re expected to print the list after each time you swap two elements (See example below)

Write in the file `1-O`, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

### 2. Selection sort

Write a function that sorts an array of integers in **ascending** order using the Selection sort algorithm

-   **Prototype**: `void selection_sort(int \*array, size_t size);`
-   You’re expected to print the array after each time you swap two elements (See example below)

Write in the file `2-O`, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

## References

### Tests

-   Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://intranet.alxswe.com/rltoken/YR-VWQbICB59wZs1eAaI3w)
