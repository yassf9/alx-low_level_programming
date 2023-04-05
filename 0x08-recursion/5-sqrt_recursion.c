#include "main.h"
/**
 * square_root - returns the square root of a number using recursion
 *
 * @n: number to find the square root of
 * @guess: current guess for the square root
 *
 * Return: the square root of @n or -1 if there is no natural square root
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
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to find the square root of
 *
 * Return: the natural square root of @n or -1 if there is no natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (square_root(n, 0));
}
