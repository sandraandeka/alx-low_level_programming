#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return on success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * Prints lowercase alphabet 
 */
void print_alphabet(void);


/**
 * Prints lowercase alphabets 10 times
 */
void print_alphabet_x10(void);

/**
 * Prints lowercase alphabets and checks if c is lower then returns 1
 */
int _islower(int c);

/**
 * Checks if its an alphabet then return 1
 */
int _isalpha(int c);

/**
 * Prints the sign in a character
 */
int  print_sign(int n);

/**
 * prints out an absolute integer
 */
int _abs(int n);

/**
 * prints the last digit in a number
 */
int print_last_digit(int r);

/**
 * prints two digits
 */

void jack_bauer(void);

/**
 * print multiples of 9
 */
void times_table(void);

/**
 * adds two numbers
 */
int add(int a, int b);

/**
 * prints number to 98
 */
void print_to_98(int n);


#endif
