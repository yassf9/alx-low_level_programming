#include "main.h"
/**
 * square_root - returns the square root of a number
 * @n: number to find the square root of
 * @guess: current guess for the square root
 * Return: the square root
 */
int square_root(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (square_root(n, guess + 1));
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: number to find the square root of
 * Return:natural square root of @n -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}
