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

1. IF `size > 1`:
    1. SET `x` to `1`
    2. WHILE `x` < `size`:
        1. SET `y` to `1`
        2. WHILE `y <= (size - x)`:
            1. IF `input[y-1] > input[y]`:
                1. SWAP `input[y-1]` with input`[y]`
                2. PRINT `input`
            2. SET `y` to `y+1`
        3. INCREMENT `x` by `1`
2. END

### 1. Insertion sort

Write a function that sort s a doubly linked list of integers in **ascending** order using the Insertion sort algorithm

-   **Prototype:** `void insertion_sort_list(listint_t \*\*list);`
-   You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
-   You’re expected to print the list after each time you swap two elements (See example below)

Write in the file `1-O`, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

**INPUT**:\
`input`: unsorted array\
`size`: size of input array

**STEPS**:

1. IF (`size` > `1`):
    1. SET `i` to `1`
    2. WHILE `i < size`:
        1. SET `j` to `i`
        2. WHILE `j > 0`:
            1. IF `input[j]` < `input[j-1]`>:
                1. SWAP `input[j]` with `input[j-1]`
                2. PRINT `input`
            2. ELSE:
                1. BREAK
            3. SET `j` to `j-1`
        3. SET `x` to `x+1`
2. END

### 2. Selection sort

Write a function that sorts an array of integers in **ascending** order using the Selection sort algorithm

-   **Prototype**: `void selection_sort(int \*array, size_t size);`
-   You’re expected to print the array after each time you swap two elements (See example below)

**INPUT**:\
`input`: unsorted array\
`size`: size of input array

**STEPS**:

1. IF (`size` > `1`):
    1. SET `i` to `0`
    2. WHILE `i < size`:
        1. SET `min` to `i`
        2. SET `j` to `i + 1`
        3. WHILE `j<size`:
            1. IF `input[min] > input[j]`:
                1. SET `min` to `j`
            2. SET `j` to `j + 1`
        4. IF `min` != `i`"
            1. SWAP `input[min]` with `input[i]` - Set temp to `input[i]`, then set `input[1]` to `input[min]` and set `input[min]` to `temp`
            2. PRINT `input`
        5. SET `i` to `i+1`
2. END

Write in the file `2-O`, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

### 3. Quick sort

Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

-   **Prototype:** `void quick_sort(int \*array, size_t size);`
-   You must implement the Lomuto partition scheme.
    -   pivot should always be the last element of the partition being sorted.
-   You’re expected to print the array after each time you swap two elements (See example below)

Write in the file `3-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

## References

### Tests

-   Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://intranet.alxswe.com/rltoken/YR-VWQbICB59wZs1eAaI3w)
