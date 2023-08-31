#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds square root of a number
 * @num: input
 * @root: The root to be tested
 *
 * Return: If the number has a natural square root
 * if the number does not have a natural square root --1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root
 * Return: Resulting Square root
 * if no square root --1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
