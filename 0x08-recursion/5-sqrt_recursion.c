#include "main.h"
/**
 * _sqrt_recursion -  the natural square root of a number
 * @n: The number to calculate the square root of
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	int low = 1, high = n, mid, sqrt;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	while (low <= high)
	{
		mid = (low + high) / 2;
		sqrt = mid * mid;
		if (sqrt == n)
			return (mid);
		else if (sqrt > n)
			 high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
