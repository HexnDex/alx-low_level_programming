# malloc, free
Project done during Full Stack Software Engineering studies at ALX SE program. It aims to learn about how to use arguments passed to a program in C language.

Technologies
C files are compiled using gcc 4.8.4
C files are written according to the C90 standard
Tested on Ubuntu 14.04 LTS


## Files
| Filename              | Description|
|-----------------------|----------------------------------------|
|0-create_array.c       ||
|1-strdup.c             ||
|2-str_concat.c         ||
|3-alloc_grid.c         ||
|4-free_grid.c			||
|100-argstostr.c		||
|101-strtow.c			||

1. **Difference between Automatic and Dynamic Allocation:**

   - **Automatic Allocation (Stack)**: Variables declared within a function, typically local variables, are automatically allocated on the stack. The memory is automatically managed by the compiler, and the scope of these variables is limited to the block in which they are defined. They have a relatively fixed size and a short lifespan, tied to the function's execution.

   - **Dynamic Allocation (Heap)**: Dynamic allocation, also known as heap allocation, is used for objects with a longer lifespan and whose size is not known at compile time. Memory is allocated from the heap, and you manage it manually. You control the allocation and deallocation of memory using functions like `malloc`, `calloc`, and `realloc`. Dynamic memory allocation allows for flexible memory management and can be used to create data structures and objects that persist beyond a function's scope.

2. **`malloc` and `free`**:

   - `malloc` (Memory Allocation): It is a function in C that allocates a specified number of bytes in the heap and returns a pointer to the first byte of the allocated memory. It takes the size of memory to allocate as an argument and returns a void pointer (`void*`) to the allocated memory block.

     Example of allocating memory for an array of integers:

     ```c
     int* arr = (int*)malloc(5 * sizeof(int));
     ```

   - `free`: It is a function that deallocates memory previously allocated by `malloc`, `calloc`, or `realloc`. It's important to use `free` to release memory when it's no longer needed to prevent memory leaks.

     Example of freeing allocated memory:

     ```c
     free(arr);
     ```

3. **Why and When to Use `malloc`**:

   You should use `malloc` and dynamic memory allocation when:

   - The size of memory needed is not known at compile time.
   - You need to create data structures with variable sizes.
   - You want to allocate memory with a longer lifespan, beyond the scope of a function.
   - You want to manage memory explicitly, for example, to allocate and deallocate memory as needed.

   Common use cases for `malloc` include creating dynamic arrays, linked lists, and other data structures, as well as reading data from files with variable record sizes.

4. **Using Valgrind to Check for Memory Leaks**:

   Valgrind is a powerful tool for detecting memory leaks in C and C++ programs. To use Valgrind:

   1. Compile your program with debugging symbols (use the `-g` flag when compiling with `gcc`).
   2. Run your program under Valgrind using the `valgrind` command followed by the path to your executable:

      ```bash
      valgrind --leak-check=full ./your_program
      ```

   Valgrind will analyze your program's memory usage and provide information about memory leaks, including the specific line numbers where memory was allocated but not freed.

   It's essential to ensure your program is compiled with debugging symbols for Valgrind to provide accurate line numbers for memory leak reports. Valgrind can be a valuable tool for finding and fixing memory leaks, which can lead to more reliable and efficient programs.
