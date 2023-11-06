# More malloc, free

1. **How to Use the `exit` Function:**

   The `exit` function is used to terminate a program and return an exit status code to the operating system. It's part of the C standard library and is typically used in situations where you want to exit your program, whether it's due to successful execution or an error condition.

   Here's how you use the `exit` function in a C program:

   ```c
   #include <stdlib.h>  // Include the necessary header file

   int main() {
       // Your program logic here

       if (/* some condition for successful execution */) {
           // Exiting with a successful status code (0)
           exit(0);
       } else {
           // Exiting with an error status code (non-zero)
           exit(1);
       }
   }
   ```

   You call the `exit` function and pass an integer argument to it. By convention, an exit status of `0` typically indicates successful execution, while non-zero values indicate error conditions. The specific exit status codes and their meanings can vary based on the application and platform.

2. **`calloc` and `realloc` Functions:**

   - **`calloc` (Contiguous Allocation):** The `calloc` function is used to allocate memory for an array of elements, and it initializes the allocated memory to zero. It takes two arguments: the number of elements to allocate and the size of each element. The total memory allocated is the product of these two values.

     ```c
     #include <stdlib.h>
     void *calloc(size_t num_elements, size_t element_size);
     ```

     Example:

     ```c
     int *arr = (int *)calloc(5, sizeof(int));
     ```

     This allocates memory for an integer array of 5 elements and initializes all elements to zero.

   - **`realloc` (Reallocate Memory):** The `realloc` function is used to change the size of a previously allocated block of memory. It takes two arguments: a pointer to the previously allocated memory block and the new size. It may also allocate a new block of memory if necessary, copy the data from the old block, and return the pointer to the new block.

     ```c
     #include <stdlib.h>
     void *realloc(void *ptr, size_t new_size);
     ```

     Example:

     ```c
     int *new_arr = (int *)realloc(arr, 10 * sizeof(int));
     ```

     This resizes the previously allocated `arr` to have space for 10 integers. The old data, if any, will be copied to the new block.

   When using `calloc` or `realloc`, it's essential to check if the memory allocation was successful by testing if the returned pointer is not `NULL`. Failing to check for a `NULL` pointer can lead to issues when working with the allocated memory.
