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


#endif
