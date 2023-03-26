#include "function_pointers.h"
/**
  *int_index - function that searches for an integer
  *@array: array
  *@size: size
  *@cmp: function pointer
  *Return:the index of the first element
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp != 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
