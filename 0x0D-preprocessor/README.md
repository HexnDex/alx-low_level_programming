## C - Preprocessor
1. **What are macros and how to use them:**
   In C programming, macros are a way to define a sequence of code that gets replaced with a specific value or code before the program is compiled. Macros are typically defined using the `#define` preprocessor directive. Here's a basic syntax for defining macros:

   ```c
   #define MACRO_NAME value_or_code
   ```

   You can use macros to simplify code, make it more readable, and reduce repetition. For example:

   ```c
   #define PI 3.14159265

   float area = PI * radius * radius;
   ```

   Macros can also take arguments and be used as functions. These are often referred to as function-like macros. Here's an example:

   ```c
   #define SQUARE(x) ((x) * (x))

   int result = SQUARE(5);
   ```

   Be careful when using macros, as they are preprocessed, and the replacement is done without type-checking or scoping. So, use them judiciously and ensure they are safe and well-defined.

2. **Most common predefined macros:**
   C compilers often define several predefined macros that can be useful in your code. Some of the most common ones include:
   - `__FILE__`: Contains the current source file's name as a string.
   - `__LINE__`: Represents the current line number as an integer.
   - `__DATE__`: Contains the date when the source code was last compiled as a string (e.g., "Nov 7 2023").
   - `__TIME__`: Contains the time when the source code was last compiled as a string (e.g., "15:30:45").
   - `__STDC__`: An integer that indicates the level of conformance to ANSI C standards.

   You can use these predefined macros to include information about your code within your program, for debugging purposes, or for generating logs.

3. **How to include guard your header files:**
   Header files in C are often included in multiple source files. To prevent multiple inclusions and the resulting compilation errors, you should use include guards. Include guards are conditional directives that ensure the header file is only included once. Here's how to use them in a header file:

   ```c
   #ifndef MY_HEADER_H
   #define MY_HEADER_H

   // Your header file contents here

   #endif // MY_HEADER_H
   ```

   When the header file is included for the first time, `MY_HEADER_H` is not defined, so the contents within the `#ifndef` block are processed, and `MY_HEADER_H` is defined. Subsequent inclusions of the same header file will skip the block because `MY_HEADER_H` is already defined, preventing redefinition and compilation errors.

   This practice ensures that your header files are included safely, and the contents are not duplicated across multiple source files.
