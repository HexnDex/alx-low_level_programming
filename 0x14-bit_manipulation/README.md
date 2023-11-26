# Bit Manipulation Project

## Learning Objectives

Bit manipulation involves manipulating individual bits in binary representations of data using bitwise operators. Understanding and using bitwise operators is crucial for tasks such as setting, clearing, or checking specific bits, as well as more advanced operations like bit shifting and flipping.

Here are some fundamental bitwise operators:

1. **AND (`&`):**
   - **Operation:** Performs a bitwise AND operation on each pair of corresponding bits.
   - **Usage:** Used to mask bits (set certain bits to 0) or check if specific bits are set.

   ```c
   unsigned int result = a & b;
   ```

2. **OR (`|`):**
   - **Operation:** Performs a bitwise OR operation on each pair of corresponding bits.
   - **Usage:** Used to set bits to 1 or combine different bit patterns.

   ```c
   unsigned int result = a | b;
   ```

3. **XOR (`^`):**
   - **Operation:** Performs a bitwise XOR (exclusive OR) operation on each pair of corresponding bits.
   - **Usage:** Used to toggle or invert specific bits.

   ```c
   unsigned int result = a ^ b;
   ```

4. **NOT (`~`):**
   - **Operation:** Performs a bitwise NOT operation, flipping each bit (0 to 1 and 1 to 0).
   - **Usage:** Used to invert all bits in a binary number.

   ```c
   unsigned int result = ~a;
   ```

5. **Left Shift (`<<`):**
   - **Operation:** Shifts the bits of a number to the left by a specified number of positions.
   - **Usage:** Used for multiplying a number by a power of 2.

   ```c
   unsigned int result = a << 2;  // Left shift a by 2 positions
   ```

6. **Right Shift (`>>`):**
   - **Operation:** Shifts the bits of a number to the right by a specified number of positions.
   - **Usage:** Used for dividing a number by a power of 2.

   ```c
   unsigned int result = a >> 3;  // Right shift a by 3 positions
   ```

### Example: Setting and Clearing Bits

Let's say we have a variable `num`:

```c
unsigned int num = 5;  // Binary representation: 0000 0101
```

Now, let's set the third bit (from the right) to 1 using the OR operator:

```c
num = num | (1 << 2);  // Binary representation after setting: 0000 1101
```

And let's clear the second bit:

```c
num = num & ~(1 << 1);  // Binary representation after clearing: 0000 1001
```

Understanding and mastering bitwise operations provide powerful tools for efficient programming, especially in low-level programming, embedded systems, and optimization tasks.
## Project Files

| File                 | Description                                                                                      |
|----------------------|--------------------------------------------------------------------------------------------------|
| `0-binary_to_uint.c` | Converts a binary number to an unsigned integer.                                                  |
| `1-print_binary.c`   | Prints the binary representation of a number.                                                     |
| `2-get_bit.c`        | Returns the value of a bit at a given index.                                                      |
| `3-set_bit.c`        | Sets the value of a bit at a given index to 1.                                                    |
| `4-clear_bit.c`      | Sets the value of a bit at a given index to 0.                                                    |
| `5-flip_bits.c`      | Returns the number of bits needed to flip to get from one number to another.                       |
| `100-get_endianness.c`| Checks the endianness of the system.                                                             |
| `main.h`             | Header file containing function prototypes.                                                      |
