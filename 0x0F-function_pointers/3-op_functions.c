#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers
 * @a: first input
 * @b: second input
 *
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * 0p_sub - difference of two numbers
 * @a: first input
 * @b: second input
 *
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of two numbers
 * @a: first input
 * @b: second input
 *
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - quotient of two numbers
 * @a: first input
 * @b: second input
 *
 * Return: 0
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of division of a by b
 * @a: first input
 * @b: second input
 *
 * Return: 0
 */
int op_mod(int a, int b)
{
	return (a % b);
}
