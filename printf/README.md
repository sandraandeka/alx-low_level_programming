             -PRINTF
_printf is a custom implementation of the C programming function printf. This project is an application of the C programming knowledge that i have learnt.

Prototype: int_printf(const char *, ...);

Examples

String
. input: _printf("%s\n", 'This is a string.');
Output: This is a string.

Character

Input: _printf("The first letter in the alphabet is %c\n",' A');
Output: The first letter in the alphabet is A

Integer

Input: _printf("There are %i dozens in a gross\n", 12);
Output: There are 12 dozens in a gross

Decimal

Input: _print(%d\n", 1000);
Output: 1000

   FILE DESCRIPTION

_printf.c: contains the function _printf which uses the prototype .The format string is composed of the zero or more directives ._printf will return the number of characters printed (excludeing the null byte used output to strings) and will write to stdout, the standard output stream.
_putchar.c: - contains the function _putchar, which writes a character to stdout

main.h: contains all function prortotypes used for _printf.

man_3_printf: - manual page for the custom _printf function.

