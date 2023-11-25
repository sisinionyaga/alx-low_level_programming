# 0x14. C - Bit Manipulation

## Overview

This repository contains C code for bit manipulation tasks. The tasks involve working with binary numbers, bitwise operators, and manipulating individual bits in integers.

## Learning Objectives

After completing this project, you should be able to:

- Look for the right source of information without too much help.
- Manipulate bits and use bitwise operators.

## Requirements

- **Allowed Editors:** vi, vim, emacs
- **Compilation:** Ubuntu 20.04 LTS, `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **File Endings:** All files should end with a new line.
- **Documentation:** Include a `README.md` at the root of the project.
- **Coding Style:** Follow the Betty style, checked using `betty-style.pl` and `betty-doc.pl`.
- **Global Variables:** Not allowed.
- **Functions per File:** No more than 5.
- **Library Functions:** Only allowed functions are `malloc`, `free`, and `exit`. Functions like `printf`, `puts`, `calloc`, `realloc` are forbidden.
- **Library Function:** Only allowed to use `_putchar`.
- **Header File:** Prototypes of all functions and the prototype of `_putchar` should be in `main.h`.
- **Header File Guard:** Include guards in all header files.

## Files

1. **0-binary_to_uint.c**
   - Function that converts a binary number to an unsigned integer.
   - Prototype: `unsigned int binary_to_uint(const char *b);`

2. **1-print_binary.c**
   - Function that prints the binary representation of a number.
   - Prototype: `void print_binary(unsigned long int n);`

3. **2-get_bit.c**
   - Function that returns the value of a bit at a given index.
   - Prototype: `int get_bit(unsigned long int n, unsigned int index);`

4. **3-set_bit.c**
   - Function that sets the value of a bit to 1 at a given index.
   - Prototype: `int set_bit(unsigned long int *n, unsigned int index);`

5. **4-clear_bit.c**
   - Function that sets the value of a bit to 0 at a given index.
   - Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`

6. **5-flip_bits.c**
   - Function that returns the number of bits needed to flip to get from one number to another.
   - Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`

7. **100-get_endianness.c**
   - Function that checks the endianness.
   - Prototype: `int get_endianness(void);`
   - Returns: 0 if big endian, 1 if little endian.

## author

Sisinio Muthengi 
25/11/2023
