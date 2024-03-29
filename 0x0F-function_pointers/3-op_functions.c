#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int (int a, int b)
{
	return (a - b);
}

/**
  * op_mul - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int(int a, int b)
{
	return (a * b);
}

/**
  * op_div - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int (int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
