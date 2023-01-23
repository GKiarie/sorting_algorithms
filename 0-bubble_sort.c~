#include "sort.h"

/**
 * bubble_sort - ftn that sorts an array of integers
 * in ascending order
 * @array: input array to be sorted
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
  size_t i;
  size_t j;
  int temp;

  if (size < 2)
    {
      return;
    }
  
  for (i = 0; i < size; i++)
    {
      for (j = 0; j < (size - 1 - i); j++)
	{
	  if (array[j] > array[j + 1])
	    {
	      temp = array[j];
	      array[j] = array[j + 1];
	      array[j + 1] = temp;
	      print_array(array, size);
	    }
	}
    }
}
