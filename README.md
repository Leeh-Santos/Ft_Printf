# 42cursus Ft_Printf

## Project Information

### About

The purpose of this project is to learn about *variadic functions* by recoding `libc`'s [`printf`](https://man7.org/linux/man-pages/man3/printf.3.html).

### Mandatory

- Manage `diuxXcsp%` type conversions

### Allowed Functions

- [`malloc`](https://man7.org/linux/man-pages/man3/free.3.html)
- [`free`](https://man7.org/linux/man-pages/man3/free.3.html)
- [`write`](https://man7.org/linux/man-pages/man2/write.2.html)
- [`va_start, va_arg, va_end & va_copy`](https://man7.org/linux/man-pages/man3/stdarg.3.html)

### Requirements

The library is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path/to/ft_printf && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "ft_printf.h"
```

and, when compiling your code, add the required flags:

```shell
-lftprintf -L path/to/libftprintf.a -I path/to/ft_printf.h
