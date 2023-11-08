# 0x0F-function_pointers

**Function Pointers:**

In C programming, function pointers are pointers that can point to functions rather than data. They are used to achieve dynamic function dispatch, which means you can select and invoke a function at runtime. Function pointers are particularly useful in scenarios where you want to choose different functions to execute based on specific conditions or configurations.

**How to Use Function Pointers:**

Here's how to declare, assign, and use function pointers:

1. **Declaration:** You declare a function pointer with a specific function signature. The syntax for declaring a function pointer is:

   ```c
   return_type (*function_pointer_name)(parameter_list);
   ```

   For example:

   ```c
   int (*funcPtr)(int, int);
   ```

2. **Assignment:** You can assign a function's address to a function pointer. This typically involves naming the function without parentheses.

   ```c
   funcPtr = someFunction; // Assign the address of someFunction to funcPtr
   ```

3. **Function Call:** You can use the function pointer to call the function it points to.

   ```c
   int result = funcPtr(5, 10); // Call someFunction with arguments 5 and 10
   ```

**What a Function Pointer Holds:**

A function pointer holds the memory address of a function in the program's code segment. It doesn't store the function's actual code; instead, it contains the address where the function's code is located in memory.

**Where a Function Pointer Points in Virtual Memory:**

A function pointer points to the starting address of the function's code in the program's virtual memory. When you call the function through the pointer, it jumps to the address stored in the function pointer and starts executing the code at that location.

Function pointers are a powerful feature in C and can be used for various purposes, including creating callback mechanisms, implementing plugins, or switching between different algorithms dynamically at runtime. They provide a level of flexibility and indirection that can be quite valuable in certain programming scenarios.
