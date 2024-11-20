# Ft_printf

**ft_printf** is a custom implementation of the `printf` function in C. It allows formatted output, similar to the standard `printf` but with a focus on understanding how variadic functions and format specifiers work internally. The project is part of the 42 school curriculum and aims to improve our understanding of C programming, variadic functions, and parsing.

## Features
- Supports multiple format specifiers such as `%c`, `%s`, `%d`, `%i`, `%p`, `%u`, `%x`, `%X`, and more.
- Supports printing of integers, characters, strings, and hexadecimal numbers.
- Handles various edge cases such as `NULL` pointers and negative numbers.

### How it works

1. The function parses the format string and processes each format specifier.
2. Depending on the specifier, it retrieves the corresponding argument and formats it accordingly.
3. The result is written to the standard output.
4. If a specifier is unsupported or the arguments do not match the specifier, an error is returned.
5. The function returns the total number of characters printed.

## Requirements
- The project must compile with no warnings.
- The implementation must handle standard `printf` functionality.
- The function must be able to print formatted strings with variable argument lists.

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/Ft_printf.git
   ```
2. Compile the project using `Makefile`:
   ```bash
	make
   ```

## Usage
1. Include the header `ft_printf.h` in your program.
2. Call `ft_printf()` with a format string and the corresponding arguments.

Example:
```c
#include "ft_printf.h"

int main() {
    int number = 42;
    ft_printf("The answer is %d\n", number);
    return 0;
}
```

## Functions

- **ft_printf(const char *format, ...)**: Prints formatted output to the standard output.

## License
Distributed under the MIT License. See LICENSE for more information.

## Author

- Romain - Github: [rom98759](https://github.com/rom98759)

